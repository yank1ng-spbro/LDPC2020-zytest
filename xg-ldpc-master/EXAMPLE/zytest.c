#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>
//#include <types.h>
#include "ldpctest.c"

#include <time.h>

//#define test 


#ifndef malloc16
#  ifdef __AVX2__
#    define malloc16(x) memalign(32,x)
#  else
#    define malloc16(x) memalign(16,x)
#  endif
#endif
float encoder_test(unsigned char **test_input,unsigned char **channel_input_optim,int Zc,int Kb,short block_length, short BG, encoder_implemparams_t *impp,short n_segments){
    float time_use=0;
    struct timeval start;
    struct timeval end;
    int i,j;
    srand(time(NULL));
    
    for (j=0;j<MAX_NUM_DLSCH_SEGMENTS;j++) {
        for (i=0; i<block_length/8; i++) {
            gettimeofday(&start,NULL);
            srand((unsigned int) start.tv_usec);
            test_input[j][i]=(unsigned char) rand();

            }
    }
   
    
    for(j=0;j<(n_segments/8+1);j++) {
    	//start_meas(time_optim);
    	
        //printf("%d\n",j);
        gettimeofday(&start,NULL);
        impp->macro_num=j;
    	nrLDPC_encoder(test_input,channel_input_optim,Zc,Kb,block_length, BG, impp);
    	gettimeofday(&end,NULL);
        //stop_meas(time_optim);
        time_use+=(end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);
        //printf("%.3f\n",time_use);
    }

    
    //printf("Encoding time %.1f us\n",time_use);
    return time_use;
}

int decoder_test(short No_iteration,
                    int nom_rate,
                    int denom_rate,
                    double SNR,
                    unsigned char qbits,
                    short block_length,
                    unsigned int ntrials,
                    int n_segments,
                    unsigned int *errors,
                    unsigned int *errors_bit,
                    double *errors_bit_uncoded,
                    short BG,
                    int Zc,
                    int Kb,
                    short nrows,
                    int no_punctured_columns,
                    int removed_bit,
                    unsigned char **test_input,
                    unsigned char **channel_input_optim

                    )
{
    int i,j;
    t_nrLDPC_dec_params decParams;

 
    int R_ind = 0;
    int code_rate_vec[8] = {15, 13, 25, 12, 23, 34, 56, 89};
    double sigma;
    sigma = 1.0/sqrt(2*SNR);
    struct timeval start;
    struct timeval end;
    float decodetime_use=0;
    unsigned int segment_bler = 0;
    t_nrLDPC_procBuf nrLDPC_procBuf;
    t_nrLDPC_procBuf* p_nrLDPC_procBuf = &nrLDPC_procBuf;

    
    t_nrLDPC_time_stats decoder_profiler;
    t_nrLDPC_time_stats* p_decoder_profiler =&decoder_profiler;


    unsigned char *channel_output_fixed[MAX_NUM_DLSCH_SEGMENTS];
    unsigned char *estimated_output[MAX_NUM_DLSCH_SEGMENTS];
    unsigned char *channel_output_uncoded[MAX_NUM_DLSCH_SEGMENTS];
    double *modulated_input[MAX_NUM_DLSCH_SEGMENTS];
    unsigned char *estimated_output_bit[MAX_NUM_DLSCH_SEGMENTS];
    unsigned char *test_input_bit;

    for(j=0;j<MAX_NUM_DLSCH_SEGMENTS;j++) {
        estimated_output_bit[j] = (unsigned char*) malloc16(sizeof(unsigned char) * block_length);
        memset(estimated_output_bit[j],0,sizeof(unsigned char) * block_length);
        channel_output_fixed[j]  = (unsigned char *)malloc16(sizeof(unsigned char) * 68*384);
        memset(channel_output_fixed[j],0,sizeof(unsigned char) * 68*384);
        estimated_output[j] = (unsigned char*) malloc16(sizeof(unsigned char) * block_length);
        memset(estimated_output[j],0,sizeof(unsigned char) * block_length);
        channel_output_uncoded[j] = (unsigned char *)malloc16(sizeof(unsigned char) * 68*384);
        memset(channel_output_uncoded[j],0,sizeof(unsigned char) * 68*384);
        modulated_input[j] = (double *)malloc16(sizeof(double) * 68*384);
        memset(modulated_input[j],0,sizeof(double) * 68*384);
    }
    test_input_bit = (unsigned char*) malloc16(sizeof(unsigned char) * block_length);
    memset(test_input_bit,0,sizeof(unsigned char) * block_length);

    *errors=0;
    *errors_bit=0;
    *errors_bit_uncoded=0;

    p_nrLDPC_procBuf = nrLDPC_init_mem();

    if (nom_rate == 1)
	  if (denom_rate == 5)
		  if (BG == 2)
			  R_ind = 0;
		  else
			  printf("Not supported");
	  else if (denom_rate == 3)
		  R_ind = 1;
	  else if (denom_rate == 2)
		  //R_ind = 3;
  	  	  printf("Not supported");
	  else
		  printf("Not supported");

    else if (nom_rate == 2)
	  if (denom_rate == 5)
		  //R_ind = 2;
  	  	  printf("Not supported");
	  else if (denom_rate == 3)
		  R_ind = 4;
	  else
		  printf("Not supported");

    else if ((nom_rate == 22) && (denom_rate == 30))
		  //R_ind = 5;
  	  	  printf("Not supported");
    else if ((nom_rate == 22) && (denom_rate == 27))
		  //R_ind = 6;
  	  	  printf("Not supported");
    else if ((nom_rate == 22) && (denom_rate == 25))
	  if (BG == 1)
		  R_ind = 7;
	  else
		  printf("Not supported");
    else
	  printf("Not supported");


    
    printf("nrows: %d\n", nrows);
    printf("no_punctured_columns: %d\n", no_punctured_columns);
    printf("removed_bit: %d\n", removed_bit);
    printf("To: %d\n", (Kb+nrows-no_punctured_columns) * Zc-removed_bit);
    printf("number of undecoded bits: %d\n", (Kb+nrows-no_punctured_columns-2) * Zc-removed_bit);


    decParams.BG=BG;
    decParams.Z=Zc;
    decParams.R=code_rate_vec[R_ind];//13;
    decParams.numMaxIter=No_iteration;
    decParams.outMode = nrLDPC_outMode_BIT;
    #ifdef test
    printf("test_input: \n");

        for(int j = 0; j < 16;j++){
                for (int i = 0; i< block_length/8+1 ;i++){
                    printf(" %d ",test_input[j][i]);

                }
                printf("\n");
                
            }
    printf("channel_input_optim: \n");

    for(int j = 0; j < 16;j++){
            for (int i = 0; i< (Kb+nrows-no_punctured_columns)*Zc-removed_bit+10 ;i++){
                printf(" %d ",channel_input_optim[j][i]);

            }
            printf("\n");
            
        }
    #endif
    for(j=0;j<n_segments;j++) {
	    for (i = 2*Zc; i < (Kb+nrows-no_punctured_columns) * Zc-removed_bit; i++) {
            if (channel_input_optim[j][i-2*Zc]==0)
            {
                
                modulated_input[j][i]=1.0;///sqrt(2);  //QPSK

            }
                
                
            else
            {
                
                modulated_input[j][i]=-1.0;///sqrt(2);
            }
            
            channel_output_fixed[j][i] = (char)quantize(sigma/4.0/4.0,modulated_input[j][i] + sigma*gaussdouble(0.0,1.0),qbits);

            if (channel_output_fixed[j][i]<0)
                channel_output_uncoded[j][i]=1;  //QPSK demod
            else
                channel_output_uncoded[j][i]=0;

            if (channel_output_uncoded[j][i] != channel_input_optim[j][i-2*Zc])
                *errors_bit_uncoded = (*errors_bit_uncoded) + 1;
            
	    }
    }
    #ifdef test
     printf("modulated_input: \n");

    for(int j = 0; j < 16;j++){
            for (int i = 0; i< (Kb+nrows-no_punctured_columns)*Zc-removed_bit+10 ;i++){
                printf(" %.1f ",modulated_input[j][i]);

            }
            printf("\n");
            
        }
 
    printf("channel_output_fixed: \n");

    for(int j = 0; j < 16;j++){
            for (int i = 0; i< (Kb+nrows-no_punctured_columns)*Zc-removed_bit+10 ;i++){
                printf(" %d ",channel_output_fixed[j][i]);

            }
            printf("\n");
            
        }
   #endif
   

    for(j=0;j<n_segments;j++){
        gettimeofday(&start,NULL);
        
        nrLDPC_decoder(&decParams, (int8_t*)channel_output_fixed[j], (int8_t*)estimated_output[j], p_nrLDPC_procBuf, p_decoder_profiler);
        
        gettimeofday(&end,NULL);

        decodetime_use+=(end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);
        
        #ifdef test
        printf("estimated_output: \n");
    
        for(int j = 0; j < 16;j++){
                for (int i = 0; i< (Kb+nrows-no_punctured_columns)*Zc-removed_bit+10 ;i++){
                    printf(" %d ",estimated_output[j][i]);

                }
                printf("\n");
                
            }
        #endif
    }

   for(j=0;j<n_segments;j++) {
      for (i=0; i<block_length>>3; i++)
      {
          
        if (estimated_output[j][i] != test_input[j][i])
        {
          segment_bler = segment_bler + 1;
          break;
        }
      }

      for (i=0; i<block_length; i++)
        {
          estimated_output_bit[j][i] = (estimated_output[j][i/8]&(1<<(i&7)))>>(i&7);
          test_input_bit[i] = (test_input[j][i/8]&(1<<(i&7)))>>(i&7); // Further correct for multiple segments
          if (estimated_output_bit[j][i] != test_input_bit[i])
          {
            *errors_bit = (*errors_bit) + 1;
          }
        }

      

    } // end segments

      if (segment_bler != 0)
		*errors = (*errors) + 1;

    *errors_bit_uncoded = *errors_bit_uncoded / (double)((Kb+nrows-no_punctured_columns-2) * Zc-removed_bit);

    
    printf("\n");
    printf("ldpc_decoder : %.3f us \n",decodetime_use);
    printf("ldpc_decoder_throughout : %.3f Mbps",block_length*n_segments/decodetime_use);
    printf("\n");

    for(j=0;j<MAX_NUM_DLSCH_SEGMENTS;j++) {
        free(modulated_input[j]);
        free(channel_output_uncoded[j]);
        free(channel_output_fixed[j]);
        free(estimated_output[j]);
        free(estimated_output_bit[j]);
    }
    free(test_input_bit);
    nrLDPC_free_mem(p_nrLDPC_procBuf);
    return *errors;

}

int main(int argc, char *argv[]) {
    
    int i,j;
    float time_use_mean=0;
    int iter=1;
    unsigned char *test_input[MAX_NUM_DLSCH_SEGMENTS]={NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};;

    unsigned char *channel_input_optim[MAX_NUM_DLSCH_SEGMENTS];

    
    randominit(0);
    
    short lift_size[51]= {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,20,22,24,26,28,30,32,36,40,44,48,52,56,60,64,72,80,88,96,104,112,120,128,144,160,176,192,208,224,240,256,288,320,352,384};


    short BG = 1;  // 或者 BG=2
    short block_length=8448;

    int Kb = 22;// 信息位的列数
    short nrows=46;
    int n_segments=1;
    int Zc=0;
    int no_punctured_columns,removed_bit;

    int nom_rate=1;
    int denom_rate=3;

    for (int i1=0; i1 < 51; i1++)
    {
        if (lift_size[i1] >= (double) block_length/Kb)
        {
        Zc = lift_size[i1];
        //printf("%d\n",Zc);
        break;
        }
    }


    encoder_implemparams_t impp=INIT0_LDPCIMPLEMPARAMS;


    for(j=0;j<MAX_NUM_DLSCH_SEGMENTS;j++) {
        test_input[j]=(unsigned char *)malloc16(sizeof(unsigned char) * block_length/8);
        memset(test_input[j],0,sizeof(unsigned char) * block_length/8);
        channel_input_optim[j] = (unsigned char *)malloc16(sizeof(unsigned char) * 68*384);
        memset(channel_input_optim[j],0,sizeof(unsigned char) * 68*384);
    }


    printf("ldpc_test: codeword_length %d, n_segments %d, block_length %d, BG %d, Zc %d, Kb %d\n",n_segments *block_length, n_segments, block_length, BG, Zc, Kb);

    impp.gen_code=0;
    impp.n_segments=n_segments;


    
    for(j=0;j<iter;j++) {
        time_use_mean+=encoder_test(test_input,channel_input_optim,Zc,Kb,block_length, BG, &impp,n_segments);
    }

    // for(int j = 0; j < 16;j++){
    //     for (int i = 0; i< 50 ;i++){
    //         printf(" %d ",channel_input_optim[j][i]);

    //     }
    //     printf("\n");
        
    // }


    printf("nrows: %d\n", nrows);
    printf("iters: %d\n", iter);
    printf("Encoding time mean %.3f us, Throughput is %f Mbps\n",time_use_mean/iter, 1.0 * n_segments * block_length / (time_use_mean/iter));
    



    /////////////////////////////////////////////////////////
    //译码
    ////////////////////////////////////////////////////////





    no_punctured_columns=(int)((nrows-2)*Zc+block_length-block_length*(1/((float)nom_rate/(float)denom_rate)))/Zc;
    //  printf("puncture:%d\n",no_punctured_columns);
    removed_bit=(nrows-no_punctured_columns-2) * Zc+block_length-(int)(block_length/((float)nom_rate/(float)denom_rate));
  
    //int32_t n_iter = 0;
    
    short No_iteration=5;

    
    double SNR0=-0.0,SNR,SNR_lin;
    double SNR_step = 0.2;

    unsigned char qbits=8;

    unsigned int errors,errors_bit;
    errors_bit=0;
    double errors_bit_uncoded;
    errors_bit_uncoded=0;

    unsigned int decoded_errors[10000];


    
    
    int test_uncoded= 0;
 

    int n_trials = 1;
    

    
    //channel_output_fixed[j][i] = (char)quantize(sigma/4.0/4.0,modulated_input[j][i] + sigma*gaussdouble(0.0,1.0),qbits);

    i=0;
    for (SNR=SNR0;SNR<SNR0+20;SNR+=SNR_step) {

        if (test_uncoded == 1)
            SNR_lin = pow(10,SNR/10.0);
        else
            SNR_lin = pow(10,SNR/10.0)*nom_rate/denom_rate;
        printf("Linear SNR: %f\n", SNR_lin);

        decoded_errors[i]=decoder_test(No_iteration,
                                        nom_rate,
                                        denom_rate,
                                        SNR_lin,   // noise standard deviation
                                        qbits,
                                        block_length,   // block length bytes
                                        n_trials,
                                        n_segments,
                                        &errors,
                                        &errors_bit,
                                        &errors_bit_uncoded,
                                        BG,
                                        Zc,
                                        Kb,
                                        nrows,
                                        no_punctured_columns,
                                        removed_bit,
                                        test_input,
                                        channel_input_optim
                                        );


        printf("SNR %f, BLER %f (%u/%d)\n", SNR, (float)decoded_errors[i]/(float)n_trials, decoded_errors[i], n_trials);
        printf("SNR %f, BER %f (%u/%d)\n", SNR, (float)errors_bit/(float)n_trials/(float)block_length/(double)n_segments, decoded_errors[i], n_trials);
        
        printf("SNR %f, Uncoded BER %f (%u/%d)\n",SNR, errors_bit_uncoded/(float)n_trials/(double)n_segments, decoded_errors[i], n_trials);
        if (decoded_errors[i] == 0) break;

        i=i+1;
    }
    printf("END!!!!!!!!\n");

    for(j=0;j<MAX_NUM_DLSCH_SEGMENTS;j++) {
        free(test_input[j]);
        free(channel_input_optim[j]);
        
    }
    
    return 0;
}