int main(void)
{
 int a1;
 int a2;
 int a3;
 int a4;
 int a5;
 int a6;
 int a7;
 int a8;
 int a12_t;
 int a34_t;
 int a56_t;
 int a78_t;
 int a14_t;
 int a58_t;
 int a18_t;
 bool sT0_13;
 bool sT1_16;
 bool sT2_19;
 bool sT3_22;
 bool sT4_25;
 bool sT5_28;
 bool sT6_31;

sT0_13 = (a1 < a2);
sT1_16 = (a3 < a4);
sT2_19 = (a5 < a6);
sT3_22 = (a7 < a8);
if (sT0_13){
  a12_t = a1;
}else{
  a12_t = a2;
}  
if(sT1_16){
  a34_t = a3;
  sT4_25 = (a12_t < a3);
}else{
  sT4_25 = (a12_t < a4);
  a34_t = a4;
}  
if(sT2_19){
  a56_t = a5;
}else{
  a56_t = a6;
}
if(sT3_22){
  a78_t = a7;
  sT5_28 = (a56_t < a7);
}else{
  sT5_28 = (a56_t < a8);
  a78_t = a8;
} 
if(sT4_25){
  a14_t = a12_t;
}else{
  a14_t = a34_t;
}  
if(sT5_28){
  a58_t = a56_t;
  sT6_31 = (a14_t < a56_t);
}else{
  sT6_31 = (a14_t < a78_t);
  a58_t = a78_t;
}
if(sT6_31){
  a18_t = a14_t;
}else{
  a18_t = a58_t;
}  
return   a18_t;

}

