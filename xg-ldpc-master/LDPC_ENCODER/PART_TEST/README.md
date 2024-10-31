gcc ldpc_encode_parity_check_test.c -I ../LDPC_BG_ZC/ -Wall -mavx2
gcc ldpc_generate_coefficient_test.c -I ../ -Wall
gcc ldpc_encoder_optim_test.c ../time_meas.c -I  ../LDPC_BG_ZC/ -I ../ -mavx2 -Wall
gcc ldpc_encoder_optim8seg_test.c ../time_meas.c -I ../LDPC_BG_ZC/  -I ../ -mavx2 -Wall
gcc ldpc_encoder_optim8segmulti_test.c ../time_meas.c -I ../LDPC_BG_ZC/ -I ../ -mavx2 -Wall
gcc ldpc_encoder_test.c -I ../LDPC_BG_ZC/ -I ../ -Wall
gcc ldpc_encoder2_test.c ../time_meas.c -I  ../LDPC_BG_ZC/ -I ../ -mavx2 -Wall
