
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
 int sT8_20;
 int sT9_22;
 int sT10_19;
 int sT11_8;
 int sT12_17;
 int sT13_17;
 int sT14_11;
 int sT15_11;
 int sT16_11;
 int sT17_18;
 int sT18_24;

 int returnVar_main;
  res = 1;
  i = 0;
  returnVar_main = 0;
  do
   {
    sT8_20 = (y1 - y2);
    sT9_22 = (y2 - y1);
    sT0_6 = (y1 != y2);
    sT10_19 = (y1 > y2);
    sT11_8 = (y1 % 2);
    sT12_17 = (y2 % 2);
    if (sT0_6)
     {
      i = (i + 1);
      sT2_8 = (sT11_8 == 0);
      sT13_17 = (sT12_17 == 0);
      sT14_11 = (res * 2);
      sT15_11 = (y1 / 2);
      sT1_8 = sT11_8;
      if (sT2_8)
       {
        sT16_11 = (y2 / 2);
        sT3_9 = sT12_17;
        sT4_9 = sT13_17;
        if (sT13_17)
         {
          res = sT14_11;
          y1 = sT15_11;
          y2 = sT16_11;
         } /* sT13_17         */
        else
         {
          y1 = sT15_11;
         }  /* end of if-else (sT13_17)*/
       } /* sT2_8       */
      else
       {
        sT17_18 = (y2 / 2);
        sT5_17 = sT12_17;
        sT6_17 = sT13_17;
        if (sT13_17)
         {
          y2 = sT17_18;
         } /* sT13_17         */
        else
         {
          sT7_19 = sT10_19;
          if (sT10_19)
           {
            y1 = sT8_20;
           } /* sT10_19           */
          else
           {
            y2 = sT9_22;
           }  /* end of if-else (sT10_19)*/
         }  /* end of if-else (sT13_17)*/
       }  /* end of if-else (sT2_8)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  sT18_24 = (res * y1);
  res = sT18_24;
  yout = sT18_24;
  return   0;

}

