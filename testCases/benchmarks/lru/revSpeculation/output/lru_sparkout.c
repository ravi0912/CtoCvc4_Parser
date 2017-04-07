
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
 int sT36_32;
 int sT37_32;
 int sT38_32;
 short sT39_45;
 short sT40_64;
 long sT41_100;
 long sT42_100;
 long sT43_100;

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
    sT1_17 = (eop == 0);
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

      sT3_22 = (reset == 1);
      eop = 0;
      breakLoop = 0;
      1;
      if (sT3_22)
       {
        eop = 1;
        breakLoop = 1;
       }  /* end of if-else (sT3_22)*/
      sT4_27 = (eop == 0);
      if (sT4_27)
       {
        found = 0;
        newGuy = ((short)mru);
        i = ((short)0);
        do
         {
          sT36_32 = (found == 0);
          sT6_32 = sT36_32;
          sT37_32 = (i < last);
          sT8_32 = sT37_32;
          sT9_32 = ((sT37_32) && (sT36_32));
          sT7_32 = last;
          sT38_32 = (breakLoop == 0);
          sT5_32 = sT38_32;
          sT10_32 = ((sT9_32) && (sT38_32));
          if (sT10_32)
           {
            sT18_51 = (reset == 1);
            temp = 0L;
            j = ((short)0);
            sT14_42 = ((short)mru);
            eop = 0;
            breakLoop = 0;
            1;
            do
             {
              sT12_35 = (j <= i);
              sT11_35 = i;
              if (sT12_35)
               {
                j = (j + 1);
                temp = (temp * 256L);
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
              sT39_45 = (i + 1);
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

            if (sT18_51)
             {
              eop = 1;
              breakLoop = 1;
             }  /* end of if-else (sT18_51)*/
           }            /* end of loop condition */
          else
            break;
         } while (1);

        sT19_57 = (eop == 0);
        if (sT19_57)
         {
          sT24_73 = (reset == 1);
          sT20_59 = (found == 1);
          eop = 0;
          if (sT20_59)
           {
            pushTo = i;
           } /* sT20_59           */
          else
           {
            sT21_63 = (last < 7);
            if (sT21_63)
             {
              sT40_64 = (last + 1);
              sT22_64 = sT40_64;
              pushTo = sT40_64;
             } /* sT21_63             */
            else
             {
              pushTo = last;
             }  /* end of if-else (sT21_63)*/
            last = pushTo;
           }  /* end of if-else (sT20_59)*/
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

          if (sT24_73)
           {
            eop = 1;
           }  /* end of if-else (sT24_73)*/
          sT25_77 = (eop == 0);
          if (sT25_77)
           {
            sT28_93 = (reset == 1);
            temp = 0L;
            j = ((short)0);
            eop = 0;
            do
             {
              sT27_81 = (j <= pushTo);
              sT26_81 = pushTo;
              if (sT27_81)
               {
                j = (j + 1);
                temp = (temp * 256L);
               }                /* end of loop condition */
              else
                break;
             } while (1);

            if (sT28_93)
             {
              temp_list = (list % temp);
              temp1 = (temp * 256L);
              eop = 1;
              list = (list / temp1);
              temp_list = (temp_list * 256L);
              list = (list * temp1);
              list = (list + temp_list);
             } /* sT28_93             */
            else
             {
              temp_list = (list % temp);
              temp1 = (temp * 256L);
              list = (list / temp1);
              temp_list = (temp_list * 256L);
              list = (list * temp1);
              list = (list + temp_list);
             }  /* end of if-else (sT28_93)*/
            sT29_98 = (eop == 0);
            if (sT29_98)
             {
              sT31_100 = (last + 1);
              list = (list / 256L);
              sT41_100 = (last * 256);
              sT34_100 = sT41_100;
              sT30_100 = ((short)mru);
              sT35_100 = sT41_100;
              list = (list * 256L);
              sT42_100 = (sT31_100 * 256);
              sT32_100 = sT42_100;
              sT33_100 = sT42_100;
              list = (list + ((short)mru));
              temp_list = (list % sT32_100);
              sT43_100 = (temp_list / sT34_100);
              temp_list = sT43_100;
              lru = ((int)sT43_100);
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

