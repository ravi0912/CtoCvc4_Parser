
extern int main(void);
extern void _main();

int main(void)
{
 int y1;
 int y2;
 int res;
 int yout;
 int i;
 int sT0_6;
 int sT1_8;
 int sT2_8;
 int sT3_9;
 int sT4_9;
 int sT5_17;
 int sT6_17;
 int sT7_19;

 int returnVar_main;
  res = 1;
  i = 0;
  returnVar_main = 0;
  do
   {
    sT0_6 = (y1 != y2);
    if (sT0_6)
     {
      i = (i + 1);
      sT1_8 = (y1 % 2);
      sT2_8 = (sT1_8 == 0);
      if (sT2_8)
       {
        sT3_9 = (y2 % 2);
        sT4_9 = (sT3_9 == 0);
        if (sT4_9)
         {
          res = (res * 2);
          y1 = (y1 / 2);
          y2 = (y2 / 2);
         } /* sT4_9         */
        else
         {
          y1 = (y1 / 2);
         }  /* end of if-else (sT4_9)*/
       } /* sT2_8       */
      else
       {
        sT5_17 = (y2 % 2);
        sT6_17 = (sT5_17 == 0);
        if (sT6_17)
         {
          y2 = (y2 / 2);
         } /* sT6_17         */
        else
         {
          sT7_19 = (y1 > y2);
          if (sT7_19)
           {
            y1 = (y1 - y2);
           } /* sT7_19           */
          else
           {
            y2 = (y2 - y1);
           }  /* end of if-else (sT7_19)*/
         }  /* end of if-else (sT6_17)*/
       }  /* end of if-else (sT2_8)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  res = (res * y1);
  yout = res;
  return   0;

}

