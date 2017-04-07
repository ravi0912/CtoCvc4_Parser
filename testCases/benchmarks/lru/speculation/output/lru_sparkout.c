
extern int main(void);
extern void _main();

int main(void)
{
 int clk;
 int mru;
 int reset;
 int lru;
 int found;
 int eop;
 int breakLoop;
 long list;
 long temp_list;
 long temp;
 long temp1;
 short newGuy;
 short pushTo;
 short i;
 short j;
 short last;
 int sT0_15;
 int sT1_17;
 int sT2_19;
 int sT3_22;
 int sT4_27;
 int sT5_32;
 int sT6_32;
 int sT7_32;
 int sT8_32;
 int sT9_32;
 int sT10_32;
 int sT11_35;
 int sT12_35;
 long sT13_39;
 int sT14_42;
 int sT15_42;
 short sT16_45;
 int sT17_47;
 int sT18_51;
 int sT19_57;
 int sT20_59;
 int sT21_63;
 short sT22_64;
 int sT23_69;
 int sT24_73;
 int sT25_77;
 int sT26_81;
 int sT27_81;
 int sT28_93;
 int sT29_98;
 long sT30_100;
 int sT31_100;
 long sT32_100;
 long sT33_100;
 long sT34_100;
 long sT35_100;
 short sT36_64;
 int sT37_22;
 int sT38_63;
 short sT39_45;
 int sT40_32;
 int sT41_32;
 int sT42_51;
 int sT43_32;
 short sT44_35;
 long sT45_37;
 int sT46_59;
 int sT47_100;
 long sT48_100;
 long sT49_100;
 short sT50_81;
 long sT51_83;
 long sT52_100;
 long sT53_100;
 long sT54_100;
 long sT55_100;

 int returnVar_main;
  eop = 0;
  breakLoop = 0;
  returnVar_main = 0;
  do
   {
    sT0_15 = (clk != 1);
    if (sT0_15)
     {
      1;
     }      /* end of loop condition */
    else
      break;
   } while (1);

  do
   {
    sT36_64 = (last + 1);
    sT1_17 = (eop == 0);
    sT37_22 = (reset == 1);
    if (sT1_17)
     {
      do
       {
        sT2_19 = (clk != 1);
        if (sT2_19)
         {
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

      sT38_63 = (last < 7);
      eop = 0;
      breakLoop = 0;
      sT3_22 = sT37_22;
      1;
      if (sT37_22)
       {
        eop = 1;
        breakLoop = 1;
       }  /* end of if-else (sT37_22)*/
      sT4_27 = (eop == 0);
      if (sT4_27)
       {
        found = 0;
        newGuy = ((short)mru);
        i = ((short)0);
        do
         {
          sT39_45 = (i + 1);
          sT40_32 = (found == 0);
          sT6_32 = sT40_32;
          sT41_32 = (i < last);
          sT8_32 = sT41_32;
          sT9_32 = ((sT41_32) && (sT40_32));
          sT7_32 = last;
          sT43_32 = (breakLoop == 0);
          sT5_32 = sT43_32;
          sT42_51 = (reset == 1);
          sT10_32 = ((sT9_32) && (sT43_32));
          if (sT10_32)
           {
            temp = 0L;
            j = ((short)0);
            sT14_42 = ((short)mru);
            eop = 0;
            breakLoop = 0;
            sT18_51 = sT42_51;
            1;
            do
             {
              sT44_35 = (j + 1);
              sT12_35 = (j <= i);
              sT45_37 = (temp * 256L);
              sT11_35 = i;
              if (sT12_35)
               {
                temp = sT45_37;
                j = sT44_35;
               }                /* end of loop condition */
              else
                break;
             } while (1);

            sT13_39 = (temp + 8L);
            temp_list = (list % sT13_39);
            temp_list = (temp_list / temp);
            sT15_42 = (temp_list == ((short)mru));
            if (sT15_42)
             {
              found = 1;
             } /* sT15_42             */
            else
             {
              sT16_45 = sT39_45;
              i = sT39_45;
             }  /* end of if-else (sT15_42)*/
            do
             {
              sT17_47 = (clk != 1);
              if (sT17_47)
               {
                1;
               }                /* end of loop condition */
              else
                break;
             } while (1);

            if (sT42_51)
             {
              eop = 1;
              breakLoop = 1;
             }  /* end of if-else (sT42_51)*/
           }            /* end of loop condition */
          else
            break;
         } while (1);

        sT19_57 = (eop == 0);
        sT46_59 = (found == 1);
        if (sT19_57)
         {
          sT20_59 = sT46_59;
          eop = 0;
          sT24_73 = sT37_22;
          if (sT46_59)
           {
            pushTo = i;
           } /* sT46_59           */
          else
           {
            sT21_63 = sT38_63;
            if (sT38_63)
             {
              sT22_64 = sT36_64;
              pushTo = sT36_64;
             } /* sT38_63             */
            else
             {
              pushTo = last;
             }  /* end of if-else (sT38_63)*/
            last = pushTo;
           }  /* end of if-else (sT46_59)*/
          do
           {
            sT23_69 = (clk != 1);
            if (sT23_69)
             {
              1;
             }              /* end of loop condition */
            else
              break;
           } while (1);

          if (sT37_22)
           {
            eop = 1;
           }  /* end of if-else (sT37_22)*/
          sT47_100 = (last + 1);
          sT25_77 = (eop == 0);
          sT48_100 = (last * 256);
          if (sT25_77)
           {
            sT49_100 = (sT47_100 * 256);
            temp = 0L;
            j = ((short)0);
            eop = 0;
            sT28_93 = sT37_22;
            do
             {
              sT50_81 = (j + 1);
              sT27_81 = (j <= pushTo);
              sT51_83 = (temp * 256L);
              sT26_81 = pushTo;
              if (sT27_81)
               {
                temp = sT51_83;
                j = sT50_81;
               }                /* end of loop condition */
              else
                break;
             } while (1);

            temp_list = (list % temp);
            temp1 = (temp * 256L);
            list = (list / temp1);
            temp_list = (temp_list * 256L);
            list = (list * temp1);
            list = (list + temp_list);
            if (sT37_22)
             {
              eop = 1;
             }  /* end of if-else (sT37_22)*/
            sT29_98 = (eop == 0);
            sT52_100 = (list / 256L);
            if (sT29_98)
             {
              sT54_100 = (sT52_100 * 256L);
              sT53_100 = sT54_100;
              list = sT52_100;
              list = sT54_100;
              sT30_100 = ((short)mru);
              sT31_100 = sT47_100;
              sT32_100 = sT49_100;
              sT33_100 = sT49_100;
              sT34_100 = sT48_100;
              sT35_100 = sT48_100;
              list = (sT53_100 + ((short)mru));
              temp_list = (list % sT49_100);
              sT55_100 = (temp_list / sT48_100);
              temp_list = sT55_100;
              lru = ((int)sT55_100);
             }  /* end of if-else (sT29_98)*/
           }  /* end of if-else (sT25_77)*/
         }  /* end of if-else (sT19_57)*/
       }  /* end of if-else (sT4_27)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  return   0;

}

