
extern int main(void);
extern void _main();

int main(void)
{
 int a;
 int b;
 int c;
 int d;
 int x;
 int y;
 int sT0_7;
 int sT1_16;
 int sT2_9;
 int sT3_18;

 int returnVar_main;
  a = (b + c);
  sT2_9 = (d + 10);
  sT0_7 = (b > c);
  sT1_16 = (x < y);
  returnVar_main = 0;
  if (sT0_7)
   {
    c = (b - sT2_9);
    d = sT2_9;
    sT3_18 = (x + y);
   } /* sT0_7   */
  else
   {
    c = (a + d);
    sT3_18 = (x + y);
   }  /* end of if-else (sT0_7)*/
  if (sT1_16)
   {
    y = (sT3_18 - c);
    x = sT3_18;
   } /* sT1_16   */
  else
   {
    y = (sT3_18 + c);
    x = sT3_18;
   }  /* end of if-else (sT1_16)*/
  return   0;

}

