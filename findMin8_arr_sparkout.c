int main(void)
{
 int a[8];
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

sT0_13 = (a[0] < a[1]);
sT1_16 = (a[2] < a[3]);
sT2_19 = (a[4] < a[5]);
sT3_22 = (a[6] < a[7]);
if (sT0_13){
  a12_t = a[0];
}else{
  a12_t = a[1];
}  
if(sT1_16){
  a34_t = a[2];
  sT4_25 = (a12_t < a[2]);
}else{
  sT4_25 = (a12_t < a[3]);
  a34_t = a[3];
}  
if(sT2_19){
  a56_t = a[4];
}else{
  a56_t = a[5];
}
if(sT3_22){
  a78_t = a[6];
  sT5_28 = (a56_t < a[6]);
}else{
  sT5_28 = (a56_t < a[7]);
  a78_t = a[7];
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

