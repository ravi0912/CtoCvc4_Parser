
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
 int sT4_10;

 int returnVar_main;
  sum = 1;
  i = 2;
  returnVar_main = 0;
  do
   {
    sT0_6 = (i < n);
    if (sT0_6)
     {
      sT4_10 = (i + 1);
      sT1_8 = (n % i);
      1;
      sT2_8 = (sT1_8 == 1);
      if (sT2_8)
       {
        sum = (sum + i);
        i = sT4_10;
       } /* sT2_8       */
      else
       {
        i = sT4_10;
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

