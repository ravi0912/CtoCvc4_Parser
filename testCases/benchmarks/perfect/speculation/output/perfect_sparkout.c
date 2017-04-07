
extern int main(void);
extern void _main();

int main(void)
{
 int sum;
 int i;
 int n;
 int out;
 int sT0_6;
 int sT1_8;
 int sT2_8;
 int sT3_13;
 int sT4_9;
 int sT5_10;
 int sT6_8;

 int returnVar_main;
  sum = 1;
  i = 2;
  returnVar_main = 0;
  do
   {
    sT4_9 = (sum + i);
    sT5_10 = (i + 1);
    sT6_8 = (n % i);
    sT0_6 = (i < n);
    if (sT0_6)
     {
      i = sT5_10;
      1;
      sT2_8 = (sT6_8 == 1);
      sT1_8 = sT6_8;
      if (sT2_8)
       {
        sum = sT4_9;
       }  /* end of if-else (sT2_8)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  sT3_13 = (sum == n);
  if (sT3_13)
   {
    out = 1;
   } /* sT3_13   */
  else
   {
    out = 0;
   }  /* end of if-else (sT3_13)*/
  return   0;

}

