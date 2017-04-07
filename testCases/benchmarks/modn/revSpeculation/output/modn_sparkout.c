
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
 int sT5_12;

 int returnVar_main;
  s = 0;
  i = 0;
  returnVar_main = 0;
  do
   {
    sT0_6 = (i <= 15);
    if (sT0_6)
     {
      i = (i + 1);
      sT1_8 = (b % 2);
      sT5_12 = (a * 2);
      sT2_8 = (sT1_8 == 1);
      sT4_14 = (sT5_12 >= n);
      b = (b / 2);
      if (sT2_8)
       {
        s = (s + a);
       }  /* end of if-else (sT2_8)*/
      sT3_10 = (s >= n);
      a = sT5_12;
      if (sT3_10)
       {
        s = (s - n);
       }  /* end of if-else (sT3_10)*/
      if (sT4_14)
       {
        a = (sT5_12 - n);
       }  /* end of if-else (sT4_14)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  sout = s;
  return   0;

}

