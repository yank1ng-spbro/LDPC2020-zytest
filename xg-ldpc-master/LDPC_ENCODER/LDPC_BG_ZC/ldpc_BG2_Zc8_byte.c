#include "sse_intrin.h"
// generated code for Zc=8, byte encoding
static inline void ldpc_BG2_Zc8_byte(uint8_t *c,uint8_t *d) {
  __m64i *csimd=(__m64i *)c,*dsimd=(__m64i *)d;

  __m64i *c2,*d2;

  int i2;
  for (i2=0; i2<1; i2++) {
     c2=&csimd[i2];
     d2=&dsimd[i2];

//row: 0
     d2[0]=_mm_xor_si64(c2[0],_mm_xor_si64(c2[72],_mm_xor_si64(c2[0],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[86],_mm_xor_si64(c2[40],_mm_xor_si64(c2[16],_mm_xor_si64(c2[18],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],_mm_xor_si64(c2[56],_mm_xor_si64(c2[44],_mm_xor_si64(c2[68],_mm_xor_si64(c2[58],_mm_xor_si64(c2[94],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[100],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],c2[102]))))))))))))))))))))))))));

//row: 1
     d2[1]=_mm_xor_si64(c2[12],_mm_xor_si64(c2[0],_mm_xor_si64(c2[72],_mm_xor_si64(c2[0],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[86],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[16],_mm_xor_si64(c2[30],_mm_xor_si64(c2[18],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],_mm_xor_si64(c2[56],_mm_xor_si64(c2[44],_mm_xor_si64(c2[68],_mm_xor_si64(c2[58],_mm_xor_si64(c2[94],_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[100],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],c2[102]))))))))))))))))))))))))))))))));

//row: 2
     d2[2]=_mm_xor_si64(c2[12],_mm_xor_si64(c2[0],_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[0],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[86],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[16],_mm_xor_si64(c2[30],_mm_xor_si64(c2[18],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],_mm_xor_si64(c2[68],_mm_xor_si64(c2[56],_mm_xor_si64(c2[44],_mm_xor_si64(c2[68],_mm_xor_si64(c2[70],_mm_xor_si64(c2[58],_mm_xor_si64(c2[94],_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[16],_mm_xor_si64(c2[100],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],c2[102]))))))))))))))))))))))))))))))))))))))));

//row: 3
     d2[3]=_mm_xor_si64(c2[0],_mm_xor_si64(c2[72],_mm_xor_si64(c2[0],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[2],_mm_xor_si64(c2[86],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[18],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],_mm_xor_si64(c2[56],_mm_xor_si64(c2[44],_mm_xor_si64(c2[80],_mm_xor_si64(c2[68],_mm_xor_si64(c2[58],_mm_xor_si64(c2[10],_mm_xor_si64(c2[94],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[50],_mm_xor_si64(c2[86],_mm_xor_si64(c2[74],_mm_xor_si64(c2[100],_mm_xor_si64(c2[100],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],c2[102]))))))))))))))))))))))))))))))))));

//row: 4
     d2[4]=_mm_xor_si64(c2[0],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[84],_mm_xor_si64(c2[36],_mm_xor_si64(c2[50],_mm_xor_si64(c2[38],_mm_xor_si64(c2[2],_mm_xor_si64(c2[74],_mm_xor_si64(c2[74],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[4],_mm_xor_si64(c2[18],_mm_xor_si64(c2[6],_mm_xor_si64(c2[54],_mm_xor_si64(c2[30],_mm_xor_si64(c2[44],_mm_xor_si64(c2[32],_mm_xor_si64(c2[56],_mm_xor_si64(c2[46],_mm_xor_si64(c2[82],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[38],_mm_xor_si64(c2[62],_mm_xor_si64(c2[88],_mm_xor_si64(c2[88],_mm_xor_si64(c2[16],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],c2[90]))))))))))))))))))))))))))))))))));

//row: 5
     d2[5]=_mm_xor_si64(c2[0],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[84],_mm_xor_si64(c2[84],_mm_xor_si64(c2[50],_mm_xor_si64(c2[38],_mm_xor_si64(c2[2],_mm_xor_si64(c2[74],_mm_xor_si64(c2[14],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[4],_mm_xor_si64(c2[18],_mm_xor_si64(c2[6],_mm_xor_si64(c2[54],_mm_xor_si64(c2[30],_mm_xor_si64(c2[44],_mm_xor_si64(c2[32],_mm_xor_si64(c2[56],_mm_xor_si64(c2[46],_mm_xor_si64(c2[82],_mm_xor_si64(c2[34],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[38],_mm_xor_si64(c2[62],_mm_xor_si64(c2[98],_mm_xor_si64(c2[88],_mm_xor_si64(c2[88],_mm_xor_si64(c2[16],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],c2[90]))))))))))))))))))))))))))))))))))));

//row: 6
     d2[6]=_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[48],_mm_xor_si64(c2[72],_mm_xor_si64(c2[36],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[62],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[88],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[44],_mm_xor_si64(c2[34],_mm_xor_si64(c2[70],_mm_xor_si64(c2[58],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[26],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[100],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],_mm_xor_si64(c2[78],c2[66]))))))))))))))))))))))))))))))))))));

//row: 7
     d2[7]=_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[24],_mm_xor_si64(c2[36],_mm_xor_si64(c2[48],_mm_xor_si64(c2[2],_mm_xor_si64(c2[86],_mm_xor_si64(c2[2],_mm_xor_si64(c2[50],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[26],_mm_xor_si64(c2[38],_mm_xor_si64(c2[14],_mm_xor_si64(c2[88],_mm_xor_si64(c2[76],_mm_xor_si64(c2[88],_mm_xor_si64(c2[76],_mm_xor_si64(c2[52],_mm_xor_si64(c2[64],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[66],_mm_xor_si64(c2[6],_mm_xor_si64(c2[18],_mm_xor_si64(c2[78],_mm_xor_si64(c2[90],_mm_xor_si64(c2[92],_mm_xor_si64(c2[8],_mm_xor_si64(c2[80],_mm_xor_si64(c2[92],_mm_xor_si64(c2[32],_mm_xor_si64(c2[8],_mm_xor_si64(c2[20],_mm_xor_si64(c2[94],_mm_xor_si64(c2[10],_mm_xor_si64(c2[58],_mm_xor_si64(c2[34],_mm_xor_si64(c2[46],_mm_xor_si64(c2[46],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[12],_mm_xor_si64(c2[60],_mm_xor_si64(c2[72],_mm_xor_si64(c2[72],_mm_xor_si64(c2[48],_mm_xor_si64(c2[60],_mm_xor_si64(c2[86],_mm_xor_si64(c2[98],_mm_xor_si64(c2[38],_mm_xor_si64(c2[14],_mm_xor_si64(c2[26],_mm_xor_si64(c2[62],_mm_xor_si64(c2[40],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[52],_mm_xor_si64(c2[88],_mm_xor_si64(c2[64],_mm_xor_si64(c2[76],_mm_xor_si64(c2[18],_mm_xor_si64(c2[102],_mm_xor_si64(c2[18],_mm_xor_si64(c2[90],_mm_xor_si64(c2[102],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],c2[54]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 8
     d2[8]=_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[72],_mm_xor_si64(c2[72],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[62],_mm_xor_si64(c2[74],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[88],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[44],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[44],_mm_xor_si64(c2[46],_mm_xor_si64(c2[34],_mm_xor_si64(c2[70],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[50],_mm_xor_si64(c2[88],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[100],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],c2[78]))))))))))))))))))))))))))))))))))))))))));

//row: 9
     d2[9]=_mm_xor_si64(c2[0],_mm_xor_si64(c2[60],_mm_xor_si64(c2[84],_mm_xor_si64(c2[36],_mm_xor_si64(c2[60],_mm_xor_si64(c2[60],_mm_xor_si64(c2[84],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[38],_mm_xor_si64(c2[74],_mm_xor_si64(c2[2],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[38],_mm_xor_si64(c2[40],_mm_xor_si64(c2[4],_mm_xor_si64(c2[28],_mm_xor_si64(c2[76],_mm_xor_si64(c2[4],_mm_xor_si64(c2[18],_mm_xor_si64(c2[78],_mm_xor_si64(c2[6],_mm_xor_si64(c2[30],_mm_xor_si64(c2[54],_mm_xor_si64(c2[6],_mm_xor_si64(c2[30],_mm_xor_si64(c2[20],_mm_xor_si64(c2[44],_mm_xor_si64(c2[8],_mm_xor_si64(c2[32],_mm_xor_si64(c2[32],_mm_xor_si64(c2[56],_mm_xor_si64(c2[22],_mm_xor_si64(c2[46],_mm_xor_si64(c2[58],_mm_xor_si64(c2[82],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[48],_mm_xor_si64(c2[84],_mm_xor_si64(c2[12],_mm_xor_si64(c2[72],_mm_xor_si64(c2[96],_mm_xor_si64(c2[14],_mm_xor_si64(c2[38],_mm_xor_si64(c2[38],_mm_xor_si64(c2[62],_mm_xor_si64(c2[64],_mm_xor_si64(c2[88],_mm_xor_si64(c2[64],_mm_xor_si64(c2[88],_mm_xor_si64(c2[88],_mm_xor_si64(c2[16],_mm_xor_si64(c2[76],_mm_xor_si64(c2[66],_mm_xor_si64(c2[30],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],_mm_xor_si64(c2[42],_mm_xor_si64(c2[66],c2[90])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 10
     d2[10]=_mm_xor_si64(c2[36],_mm_xor_si64(c2[14],_mm_xor_si64(c2[12],c2[74])));

//row: 11
     d2[11]=_mm_xor_si64(c2[0],_mm_xor_si64(c2[72],_mm_xor_si64(c2[0],_mm_xor_si64(c2[36],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[2],_mm_xor_si64(c2[86],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[18],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],_mm_xor_si64(c2[56],_mm_xor_si64(c2[44],_mm_xor_si64(c2[80],_mm_xor_si64(c2[68],_mm_xor_si64(c2[58],_mm_xor_si64(c2[10],_mm_xor_si64(c2[94],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[50],_mm_xor_si64(c2[86],_mm_xor_si64(c2[74],_mm_xor_si64(c2[62],_mm_xor_si64(c2[100],_mm_xor_si64(c2[100],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],_mm_xor_si64(c2[102],c2[42])))))))))))))))))))))))))))))))))))));

//row: 12
     d2[12]=_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[48],_mm_xor_si64(c2[72],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[62],_mm_xor_si64(c2[86],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[88],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[90],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[44],_mm_xor_si64(c2[34],_mm_xor_si64(c2[70],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[26],_mm_xor_si64(c2[50],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[100],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],c2[78]))))))))))))))))))))))))))))))))));

//row: 13
     d2[13]=_mm_xor_si64(c2[72],_mm_xor_si64(c2[48],_mm_xor_si64(c2[72],_mm_xor_si64(c2[36],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[74],_mm_xor_si64(c2[62],_mm_xor_si64(c2[26],_mm_xor_si64(c2[16],_mm_xor_si64(c2[4],_mm_xor_si64(c2[88],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[56],_mm_xor_si64(c2[44],_mm_xor_si64(c2[34],_mm_xor_si64(c2[82],_mm_xor_si64(c2[70],_mm_xor_si64(c2[36],_mm_xor_si64(c2[96],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[26],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[16],_mm_xor_si64(c2[100],_mm_xor_si64(c2[88],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],_mm_xor_si64(c2[90],c2[78])))))))))))))))))))))))))))))))))))));

//row: 14
     d2[14]=_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[0],_mm_xor_si64(c2[12],_mm_xor_si64(c2[72],_mm_xor_si64(c2[36],_mm_xor_si64(c2[0],_mm_xor_si64(c2[2],_mm_xor_si64(c2[86],_mm_xor_si64(c2[50],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[2],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[38],_mm_xor_si64(c2[88],_mm_xor_si64(c2[76],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[52],_mm_xor_si64(c2[16],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],_mm_xor_si64(c2[6],_mm_xor_si64(c2[66],_mm_xor_si64(c2[78],_mm_xor_si64(c2[42],_mm_xor_si64(c2[92],_mm_xor_si64(c2[56],_mm_xor_si64(c2[80],_mm_xor_si64(c2[44],_mm_xor_si64(c2[80],_mm_xor_si64(c2[8],_mm_xor_si64(c2[68],_mm_xor_si64(c2[94],_mm_xor_si64(c2[58],_mm_xor_si64(c2[10],_mm_xor_si64(c2[34],_mm_xor_si64(c2[94],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[60],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[24],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[24],_mm_xor_si64(c2[86],_mm_xor_si64(c2[50],_mm_xor_si64(c2[86],_mm_xor_si64(c2[14],_mm_xor_si64(c2[74],_mm_xor_si64(c2[40],_mm_xor_si64(c2[100],_mm_xor_si64(c2[40],_mm_xor_si64(c2[100],_mm_xor_si64(c2[40],_mm_xor_si64(c2[64],_mm_xor_si64(c2[28],_mm_xor_si64(c2[18],_mm_xor_si64(c2[102],_mm_xor_si64(c2[66],_mm_xor_si64(c2[90],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],_mm_xor_si64(c2[42],c2[102])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 15
     d2[15]=_mm_xor_si64(c2[72],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[60],_mm_xor_si64(c2[36],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[36],_mm_xor_si64(c2[26],_mm_xor_si64(c2[38],_mm_xor_si64(c2[14],_mm_xor_si64(c2[2],_mm_xor_si64(c2[74],_mm_xor_si64(c2[74],_mm_xor_si64(c2[50],_mm_xor_si64(c2[16],_mm_xor_si64(c2[28],_mm_xor_si64(c2[4],_mm_xor_si64(c2[4],_mm_xor_si64(c2[76],_mm_xor_si64(c2[90],_mm_xor_si64(c2[6],_mm_xor_si64(c2[78],_mm_xor_si64(c2[54],_mm_xor_si64(c2[30],_mm_xor_si64(c2[30],_mm_xor_si64(c2[6],_mm_xor_si64(c2[44],_mm_xor_si64(c2[20],_mm_xor_si64(c2[32],_mm_xor_si64(c2[8],_mm_xor_si64(c2[56],_mm_xor_si64(c2[32],_mm_xor_si64(c2[46],_mm_xor_si64(c2[22],_mm_xor_si64(c2[82],_mm_xor_si64(c2[58],_mm_xor_si64(c2[36],_mm_xor_si64(c2[48],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[84],_mm_xor_si64(c2[96],_mm_xor_si64(c2[72],_mm_xor_si64(c2[38],_mm_xor_si64(c2[14],_mm_xor_si64(c2[62],_mm_xor_si64(c2[38],_mm_xor_si64(c2[88],_mm_xor_si64(c2[64],_mm_xor_si64(c2[88],_mm_xor_si64(c2[64],_mm_xor_si64(c2[16],_mm_xor_si64(c2[88],_mm_xor_si64(c2[42],_mm_xor_si64(c2[54],_mm_xor_si64(c2[30],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[90],c2[66]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 16
     d2[16]=_mm_xor_si64(c2[12],_mm_xor_si64(c2[36],_mm_xor_si64(c2[0],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[72],_mm_xor_si64(c2[0],_mm_xor_si64(c2[0],_mm_xor_si64(c2[24],_mm_xor_si64(c2[62],_mm_xor_si64(c2[86],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[14],_mm_xor_si64(c2[38],_mm_xor_si64(c2[86],_mm_xor_si64(c2[14],_mm_xor_si64(c2[38],_mm_xor_si64(c2[52],_mm_xor_si64(c2[76],_mm_xor_si64(c2[40],_mm_xor_si64(c2[64],_mm_xor_si64(c2[16],_mm_xor_si64(c2[40],_mm_xor_si64(c2[30],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],_mm_xor_si64(c2[42],_mm_xor_si64(c2[6],_mm_xor_si64(c2[66],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[66],_mm_xor_si64(c2[92],_mm_xor_si64(c2[56],_mm_xor_si64(c2[80],_mm_xor_si64(c2[44],_mm_xor_si64(c2[68],_mm_xor_si64(c2[68],_mm_xor_si64(c2[92],_mm_xor_si64(c2[94],_mm_xor_si64(c2[58],_mm_xor_si64(c2[82],_mm_xor_si64(c2[94],_mm_xor_si64(c2[22],_mm_xor_si64(c2[72],_mm_xor_si64(c2[96],_mm_xor_si64(c2[60],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[36],_mm_xor_si64(c2[86],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[74],_mm_xor_si64(c2[98],_mm_xor_si64(c2[40],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[28],_mm_xor_si64(c2[52],_mm_xor_si64(c2[78],_mm_xor_si64(c2[102],_mm_xor_si64(c2[66],_mm_xor_si64(c2[90],_mm_xor_si64(c2[90],_mm_xor_si64(c2[54],_mm_xor_si64(c2[78],_mm_xor_si64(c2[102],_mm_xor_si64(c2[30],c2[90])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 17
     d2[17]=_mm_xor_si64(c2[36],_mm_xor_si64(c2[12],_mm_xor_si64(c2[24],_mm_xor_si64(c2[0],_mm_xor_si64(c2[84],_mm_xor_si64(c2[0],_mm_xor_si64(c2[72],_mm_xor_si64(c2[24],_mm_xor_si64(c2[0],_mm_xor_si64(c2[86],_mm_xor_si64(c2[62],_mm_xor_si64(c2[74],_mm_xor_si64(c2[50],_mm_xor_si64(c2[38],_mm_xor_si64(c2[14],_mm_xor_si64(c2[14],_mm_xor_si64(c2[86],_mm_xor_si64(c2[74],_mm_xor_si64(c2[76],_mm_xor_si64(c2[52],_mm_xor_si64(c2[64],_mm_xor_si64(c2[40],_mm_xor_si64(c2[40],_mm_xor_si64(c2[16],_mm_xor_si64(c2[54],_mm_xor_si64(c2[30],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[78],_mm_xor_si64(c2[90],_mm_xor_si64(c2[66],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],_mm_xor_si64(c2[68],_mm_xor_si64(c2[80],_mm_xor_si64(c2[56],_mm_xor_si64(c2[68],_mm_xor_si64(c2[44],_mm_xor_si64(c2[92],_mm_xor_si64(c2[68],_mm_xor_si64(c2[70],_mm_xor_si64(c2[82],_mm_xor_si64(c2[58],_mm_xor_si64(c2[22],_mm_xor_si64(c2[94],_mm_xor_si64(c2[58],_mm_xor_si64(c2[96],_mm_xor_si64(c2[72],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[36],_mm_xor_si64(c2[48],_mm_xor_si64(c2[24],_mm_xor_si64(c2[36],_mm_xor_si64(c2[12],_mm_xor_si64(c2[62],_mm_xor_si64(c2[74],_mm_xor_si64(c2[50],_mm_xor_si64(c2[98],_mm_xor_si64(c2[74],_mm_xor_si64(c2[16],_mm_xor_si64(c2[28],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[100],_mm_xor_si64(c2[52],_mm_xor_si64(c2[28],_mm_xor_si64(c2[102],_mm_xor_si64(c2[78],_mm_xor_si64(c2[90],_mm_xor_si64(c2[66],_mm_xor_si64(c2[66],_mm_xor_si64(c2[78],_mm_xor_si64(c2[54],_mm_xor_si64(c2[30],c2[102])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 18
     d2[18]=_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],c2[38]));

//row: 19
     d2[19]=_mm_xor_si64(c2[12],_mm_xor_si64(c2[84],_mm_xor_si64(c2[12],_mm_xor_si64(c2[84],_mm_xor_si64(c2[62],_mm_xor_si64(c2[26],_mm_xor_si64(c2[2],_mm_xor_si64(c2[50],_mm_xor_si64(c2[52],_mm_xor_si64(c2[28],_mm_xor_si64(c2[30],_mm_xor_si64(c2[78],_mm_xor_si64(c2[54],_mm_xor_si64(c2[68],_mm_xor_si64(c2[56],_mm_xor_si64(c2[80],_mm_xor_si64(c2[70],_mm_xor_si64(c2[10],_mm_xor_si64(c2[72],_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[62],_mm_xor_si64(c2[86],_mm_xor_si64(c2[16],_mm_xor_si64(c2[16],_mm_xor_si64(c2[40],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],c2[18]))))))))))))))))))))))))))));

//row: 20
     d2[20]=_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[36],_mm_xor_si64(c2[60],_mm_xor_si64(c2[26],_mm_xor_si64(c2[14],_mm_xor_si64(c2[74],_mm_xor_si64(c2[50],_mm_xor_si64(c2[26],_mm_xor_si64(c2[16],_mm_xor_si64(c2[4],_mm_xor_si64(c2[76],_mm_xor_si64(c2[90],_mm_xor_si64(c2[78],_mm_xor_si64(c2[30],_mm_xor_si64(c2[6],_mm_xor_si64(c2[20],_mm_xor_si64(c2[8],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[22],_mm_xor_si64(c2[58],_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[14],_mm_xor_si64(c2[38],_mm_xor_si64(c2[64],_mm_xor_si64(c2[64],_mm_xor_si64(c2[88],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],_mm_xor_si64(c2[18],c2[66]))))))))))))))))))))))))))))))))));

//row: 21
     d2[21]=_mm_xor_si64(c2[24],_mm_xor_si64(c2[0],_mm_xor_si64(c2[24],_mm_xor_si64(c2[48],_mm_xor_si64(c2[74],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[14],_mm_xor_si64(c2[64],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[42],_mm_xor_si64(c2[90],_mm_xor_si64(c2[66],_mm_xor_si64(c2[80],_mm_xor_si64(c2[68],_mm_xor_si64(c2[8],_mm_xor_si64(c2[92],_mm_xor_si64(c2[82],_mm_xor_si64(c2[34],_mm_xor_si64(c2[22],_mm_xor_si64(c2[84],_mm_xor_si64(c2[48],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[74],_mm_xor_si64(c2[14],_mm_xor_si64(c2[98],_mm_xor_si64(c2[28],_mm_xor_si64(c2[28],_mm_xor_si64(c2[64],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[90],_mm_xor_si64(c2[78],_mm_xor_si64(c2[42],c2[30]))))))))))))))))))))))))))))))))))));

//row: 22
     d2[22]=_mm_xor_si64(c2[74],c2[88]);

//row: 23
     d2[23]=_mm_xor_si64(c2[84],_mm_xor_si64(c2[42],c2[82]));

//row: 24
     d2[24]=_mm_xor_si64(c2[74],_mm_xor_si64(c2[40],c2[18]));

//row: 25
     d2[25]=_mm_xor_si64(c2[48],c2[58]);

//row: 26
     d2[26]=_mm_xor_si64(c2[12],_mm_xor_si64(c2[0],_mm_xor_si64(c2[24],_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[0],_mm_xor_si64(c2[0],_mm_xor_si64(c2[24],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[14],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[14],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[64],_mm_xor_si64(c2[52],_mm_xor_si64(c2[16],_mm_xor_si64(c2[40],_mm_xor_si64(c2[64],_mm_xor_si64(c2[30],_mm_xor_si64(c2[18],_mm_xor_si64(c2[42],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[66],_mm_xor_si64(c2[68],_mm_xor_si64(c2[56],_mm_xor_si64(c2[80],_mm_xor_si64(c2[44],_mm_xor_si64(c2[68],_mm_xor_si64(c2[8],_mm_xor_si64(c2[68],_mm_xor_si64(c2[92],_mm_xor_si64(c2[70],_mm_xor_si64(c2[58],_mm_xor_si64(c2[82],_mm_xor_si64(c2[34],_mm_xor_si64(c2[94],_mm_xor_si64(c2[22],_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[84],_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[48],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[36],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[74],_mm_xor_si64(c2[14],_mm_xor_si64(c2[74],_mm_xor_si64(c2[98],_mm_xor_si64(c2[98],_mm_xor_si64(c2[16],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[100],_mm_xor_si64(c2[28],_mm_xor_si64(c2[64],_mm_xor_si64(c2[28],_mm_xor_si64(c2[52],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],_mm_xor_si64(c2[90],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[78],_mm_xor_si64(c2[42],_mm_xor_si64(c2[102],c2[30])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 27
     d2[27]=_mm_xor_si64(c2[0],c2[96]);

//row: 28
     d2[28]=_mm_xor_si64(c2[26],_mm_xor_si64(c2[64],c2[94]));

//row: 29
     d2[29]=_mm_xor_si64(c2[24],c2[56]);

//row: 30
     d2[30]=_mm_xor_si64(c2[88],_mm_xor_si64(c2[10],_mm_xor_si64(c2[26],c2[66])));

//row: 31
     d2[31]=_mm_xor_si64(c2[12],_mm_xor_si64(c2[84],_mm_xor_si64(c2[12],_mm_xor_si64(c2[62],_mm_xor_si64(c2[26],_mm_xor_si64(c2[14],_mm_xor_si64(c2[2],_mm_xor_si64(c2[26],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[30],_mm_xor_si64(c2[78],_mm_xor_si64(c2[54],_mm_xor_si64(c2[68],_mm_xor_si64(c2[56],_mm_xor_si64(c2[92],_mm_xor_si64(c2[80],_mm_xor_si64(c2[70],_mm_xor_si64(c2[22],_mm_xor_si64(c2[10],_mm_xor_si64(c2[72],_mm_xor_si64(c2[36],_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[62],_mm_xor_si64(c2[98],_mm_xor_si64(c2[86],_mm_xor_si64(c2[16],_mm_xor_si64(c2[16],_mm_xor_si64(c2[52],_mm_xor_si64(c2[40],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],_mm_xor_si64(c2[30],c2[18])))))))))))))))))))))))))))))))))));

//row: 32
     d2[32]=_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[72],_mm_xor_si64(c2[24],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[62],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[88],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[44],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[44],_mm_xor_si64(c2[46],_mm_xor_si64(c2[34],_mm_xor_si64(c2[70],_mm_xor_si64(c2[58],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[50],_mm_xor_si64(c2[88],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[100],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],c2[78]))))))))))))))))))))))))))))))))))))))))));

//row: 33
     d2[33]=_mm_xor_si64(c2[36],_mm_xor_si64(c2[12],_mm_xor_si64(c2[36],_mm_xor_si64(c2[86],_mm_xor_si64(c2[50],_mm_xor_si64(c2[26],_mm_xor_si64(c2[76],_mm_xor_si64(c2[52],_mm_xor_si64(c2[52],_mm_xor_si64(c2[54],_mm_xor_si64(c2[6],_mm_xor_si64(c2[78],_mm_xor_si64(c2[92],_mm_xor_si64(c2[80],_mm_xor_si64(c2[8],_mm_xor_si64(c2[94],_mm_xor_si64(c2[34],_mm_xor_si64(c2[96],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[86],_mm_xor_si64(c2[14],_mm_xor_si64(c2[62],_mm_xor_si64(c2[40],_mm_xor_si64(c2[40],_mm_xor_si64(c2[64],_mm_xor_si64(c2[102],_mm_xor_si64(c2[90],c2[42]))))))))))))))))))))))))))));

//row: 34
     d2[34]=_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[26],_mm_xor_si64(c2[14],_mm_xor_si64(c2[2],_mm_xor_si64(c2[74],_mm_xor_si64(c2[62],_mm_xor_si64(c2[50],_mm_xor_si64(c2[50],_mm_xor_si64(c2[38],_mm_xor_si64(c2[16],_mm_xor_si64(c2[4],_mm_xor_si64(c2[88],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[64],_mm_xor_si64(c2[90],_mm_xor_si64(c2[78],_mm_xor_si64(c2[66],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],_mm_xor_si64(c2[18],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[8],_mm_xor_si64(c2[8],_mm_xor_si64(c2[92],_mm_xor_si64(c2[32],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[34],_mm_xor_si64(c2[22],_mm_xor_si64(c2[10],_mm_xor_si64(c2[58],_mm_xor_si64(c2[58],_mm_xor_si64(c2[46],_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[72],_mm_xor_si64(c2[72],_mm_xor_si64(c2[60],_mm_xor_si64(c2[26],_mm_xor_si64(c2[14],_mm_xor_si64(c2[98],_mm_xor_si64(c2[38],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[76],_mm_xor_si64(c2[64],_mm_xor_si64(c2[52],_mm_xor_si64(c2[64],_mm_xor_si64(c2[52],_mm_xor_si64(c2[88],_mm_xor_si64(c2[88],_mm_xor_si64(c2[76],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],_mm_xor_si64(c2[18],_mm_xor_si64(c2[30],_mm_xor_si64(c2[18],_mm_xor_si64(c2[102],_mm_xor_si64(c2[66],_mm_xor_si64(c2[66],c2[54]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 35
     d2[35]=_mm_xor_si64(c2[0],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[84],_mm_xor_si64(c2[50],_mm_xor_si64(c2[38],_mm_xor_si64(c2[2],_mm_xor_si64(c2[74],_mm_xor_si64(c2[14],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[4],_mm_xor_si64(c2[18],_mm_xor_si64(c2[6],_mm_xor_si64(c2[54],_mm_xor_si64(c2[30],_mm_xor_si64(c2[44],_mm_xor_si64(c2[32],_mm_xor_si64(c2[56],_mm_xor_si64(c2[46],_mm_xor_si64(c2[82],_mm_xor_si64(c2[10],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[96],_mm_xor_si64(c2[38],_mm_xor_si64(c2[62],_mm_xor_si64(c2[88],_mm_xor_si64(c2[88],_mm_xor_si64(c2[16],_mm_xor_si64(c2[66],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],c2[90]))))))))))))))))))))))))))))))))));

//row: 36
     d2[36]=_mm_xor_si64(c2[48],_mm_xor_si64(c2[76],c2[38]));

//row: 37
     d2[37]=_mm_xor_si64(c2[36],_mm_xor_si64(c2[84],_mm_xor_si64(c2[12],_mm_xor_si64(c2[60],_mm_xor_si64(c2[36],_mm_xor_si64(c2[84],_mm_xor_si64(c2[86],_mm_xor_si64(c2[38],_mm_xor_si64(c2[50],_mm_xor_si64(c2[2],_mm_xor_si64(c2[86],_mm_xor_si64(c2[26],_mm_xor_si64(c2[74],_mm_xor_si64(c2[76],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[52],_mm_xor_si64(c2[4],_mm_xor_si64(c2[54],_mm_xor_si64(c2[6],_mm_xor_si64(c2[6],_mm_xor_si64(c2[54],_mm_xor_si64(c2[78],_mm_xor_si64(c2[30],_mm_xor_si64(c2[92],_mm_xor_si64(c2[44],_mm_xor_si64(c2[80],_mm_xor_si64(c2[32],_mm_xor_si64(c2[68],_mm_xor_si64(c2[8],_mm_xor_si64(c2[56],_mm_xor_si64(c2[94],_mm_xor_si64(c2[46],_mm_xor_si64(c2[94],_mm_xor_si64(c2[34],_mm_xor_si64(c2[82],_mm_xor_si64(c2[96],_mm_xor_si64(c2[48],_mm_xor_si64(c2[60],_mm_xor_si64(c2[12],_mm_xor_si64(c2[12],_mm_xor_si64(c2[48],_mm_xor_si64(c2[96],_mm_xor_si64(c2[86],_mm_xor_si64(c2[38],_mm_xor_si64(c2[74],_mm_xor_si64(c2[14],_mm_xor_si64(c2[62],_mm_xor_si64(c2[40],_mm_xor_si64(c2[88],_mm_xor_si64(c2[40],_mm_xor_si64(c2[88],_mm_xor_si64(c2[28],_mm_xor_si64(c2[64],_mm_xor_si64(c2[16],_mm_xor_si64(c2[102],_mm_xor_si64(c2[54],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[102],_mm_xor_si64(c2[42],c2[90])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 38
     d2[38]=_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[48],_mm_xor_si64(c2[72],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[62],_mm_xor_si64(c2[86],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[88],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[44],_mm_xor_si64(c2[34],_mm_xor_si64(c2[70],_mm_xor_si64(c2[34],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[26],_mm_xor_si64(c2[50],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[100],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],c2[78]))))))))))))))))))))))))))))))))));

//row: 39
     d2[39]=_mm_xor_si64(c2[36],_mm_xor_si64(c2[24],_mm_xor_si64(c2[12],_mm_xor_si64(c2[0],_mm_xor_si64(c2[24],_mm_xor_si64(c2[84],_mm_xor_si64(c2[86],_mm_xor_si64(c2[74],_mm_xor_si64(c2[38],_mm_xor_si64(c2[14],_mm_xor_si64(c2[76],_mm_xor_si64(c2[64],_mm_xor_si64(c2[40],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[66],_mm_xor_si64(c2[92],_mm_xor_si64(c2[80],_mm_xor_si64(c2[68],_mm_xor_si64(c2[92],_mm_xor_si64(c2[94],_mm_xor_si64(c2[82],_mm_xor_si64(c2[22],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[60],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[86],_mm_xor_si64(c2[74],_mm_xor_si64(c2[98],_mm_xor_si64(c2[62],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[28],_mm_xor_si64(c2[52],_mm_xor_si64(c2[102],_mm_xor_si64(c2[90],_mm_xor_si64(c2[90],_mm_xor_si64(c2[78],c2[30]))))))))))))))))))))))))))))))))))))))))));

//row: 40
     d2[40]=_mm_xor_si64(c2[36],_mm_xor_si64(c2[0],_mm_xor_si64(c2[12],_mm_xor_si64(c2[72],_mm_xor_si64(c2[36],_mm_xor_si64(c2[0],_mm_xor_si64(c2[86],_mm_xor_si64(c2[50],_mm_xor_si64(c2[50],_mm_xor_si64(c2[14],_mm_xor_si64(c2[2],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[76],_mm_xor_si64(c2[40],_mm_xor_si64(c2[28],_mm_xor_si64(c2[52],_mm_xor_si64(c2[16],_mm_xor_si64(c2[4],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],_mm_xor_si64(c2[6],_mm_xor_si64(c2[66],_mm_xor_si64(c2[78],_mm_xor_si64(c2[42],_mm_xor_si64(c2[92],_mm_xor_si64(c2[56],_mm_xor_si64(c2[80],_mm_xor_si64(c2[44],_mm_xor_si64(c2[80],_mm_xor_si64(c2[8],_mm_xor_si64(c2[68],_mm_xor_si64(c2[94],_mm_xor_si64(c2[58],_mm_xor_si64(c2[10],_mm_xor_si64(c2[34],_mm_xor_si64(c2[94],_mm_xor_si64(c2[96],_mm_xor_si64(c2[60],_mm_xor_si64(c2[60],_mm_xor_si64(c2[24],_mm_xor_si64(c2[24],_mm_xor_si64(c2[48],_mm_xor_si64(c2[12],_mm_xor_si64(c2[86],_mm_xor_si64(c2[50],_mm_xor_si64(c2[86],_mm_xor_si64(c2[14],_mm_xor_si64(c2[74],_mm_xor_si64(c2[40],_mm_xor_si64(c2[100],_mm_xor_si64(c2[40],_mm_xor_si64(c2[100],_mm_xor_si64(c2[40],_mm_xor_si64(c2[64],_mm_xor_si64(c2[28],_mm_xor_si64(c2[102],_mm_xor_si64(c2[66],_mm_xor_si64(c2[90],_mm_xor_si64(c2[54],_mm_xor_si64(c2[18],_mm_xor_si64(c2[42],c2[102]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 41
     d2[41]=_mm_xor_si64(c2[84],_mm_xor_si64(c2[72],_mm_xor_si64(c2[48],_mm_xor_si64(c2[72],_mm_xor_si64(c2[38],_mm_xor_si64(c2[26],_mm_xor_si64(c2[86],_mm_xor_si64(c2[62],_mm_xor_si64(c2[14],_mm_xor_si64(c2[28],_mm_xor_si64(c2[16],_mm_xor_si64(c2[88],_mm_xor_si64(c2[6],_mm_xor_si64(c2[90],_mm_xor_si64(c2[42],_mm_xor_si64(c2[18],_mm_xor_si64(c2[32],_mm_xor_si64(c2[20],_mm_xor_si64(c2[44],_mm_xor_si64(c2[34],_mm_xor_si64(c2[70],_mm_xor_si64(c2[70],_mm_xor_si64(c2[48],_mm_xor_si64(c2[36],_mm_xor_si64(c2[96],_mm_xor_si64(c2[84],_mm_xor_si64(c2[26],_mm_xor_si64(c2[50],_mm_xor_si64(c2[76],_mm_xor_si64(c2[76],_mm_xor_si64(c2[100],_mm_xor_si64(c2[54],_mm_xor_si64(c2[42],_mm_xor_si64(c2[30],c2[78]))))))))))))))))))))))))))))))))));
  }
}
