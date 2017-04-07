
extern int main(void);
extern void _main();

int main(void)
{
 int s;
 int i;
 int n;
 int a;
 int b;
 int sout;
 int sT0_6;
 int sT1_8;
 int sT2_8;
 int sT3_10;
 int sT4_14;
 int sT5_9;
 int sT6_6;
 int sT7_8;
 int sT8_12;
 int sT9_15;
 int sT10_11;

 int returnVar_main;
  s = 0;
  i = 0;
  returnVar_main = 0;
  do
   {
    sT5_9 = (s + a);
    sT6_6 = (i + 1);
    sT0_6 = (i <= 15);
    sT7_8 = (b % 2);
    sT8_12 = (a * 2);
    if (sT0_6)
     {
      sT9_15 = (sT8_12 - n);
      sT2_8 = (sT7_8 == 1);
      sT4_14 = (sT8_12 >= n);
      b = (b / 2);
      sT1_8 = sT7_8;
      a = sT8_12;
      i = sT6_6;
      if (sT2_8)
       {
        s = sT5_9;
       }  /* end of if-else (sT2_8)*/
      sT10_11 = (s - n);
      sT3_10 = (s >= n);
      if (sT3_10)
       {
        s = sT10_11;
       }  /* end of if-else (sT3_10)*/
      if (sT4_14)
       {
        a = sT9_15;
       }  /* end of if-else (sT4_14)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  sout = s;
  return   0;

}

