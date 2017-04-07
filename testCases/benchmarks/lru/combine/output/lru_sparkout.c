
extern int main(void);
extern void _main();

int main(void)
{
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
 int sT0_17;
 int sT1_22;
 int sT2_27;
 int sT3_32;
 int sT4_32;
 int sT5_32;
 int sT6_32;
 int sT7_32;
 int sT8_32;
 int sT9_35;
 int sT10_35;
 long sT11_39;
 int sT12_42;
 int sT13_42;
 short sT14_45;
 int sT15_49;
 int sT16_55;
 int sT17_57;
 int sT18_61;
 short sT19_62;
 int sT20_69;
 int sT21_73;
 int sT22_77;
 int sT23_77;
 int sT24_89;
 int sT25_94;
 long sT26_96;
 int sT27_96;
 long sT28_96;
 long sT29_96;
 long sT30_96;
 long sT31_96;
 short sT32_62;
 int sT33_22;
 int sT34_61;
 short sT35_45;
 int sT36_32;
 int sT37_32;
 int sT38_32;
 short sT39_35;
 long sT40_37;
 int sT41_57;
 short sT42_77;
 long sT43_79;

 int returnVar_main;
  eop = 0;
  returnVar_main = 0;
  do
   {
    sT32_62 = (last + 1);
    sT0_17 = (eop == 0);
    sT33_22 = (reset == 1);
    if (sT0_17)
     {
      if (sT33_22)
       {
        eop = 0;
        eop = 1;
        breakLoop = 1;
        sT2_27 = 0;
        sT34_61 = (last < 7);
       } /* sT33_22       */
      else
       {
        sT2_27 = 1;
        sT34_61 = (last < 7);
        eop = 0;
        breakLoop = 0;
       }  /* end of if-else (sT33_22)*/
      if (sT2_27)
       {
        found = 0;
        i = ((short)0);
        do
         {
          sT35_45 = (i + 1);
          sT36_32 = (found == 0);
          sT37_32 = (i < last);
          sT7_32 = ((sT37_32) && (sT36_32));
          sT38_32 = (breakLoop == 0);
          sT8_32 = ((sT7_32) && (sT38_32));
          if (sT8_32)
           {
            temp = 0L;
            j = ((short)0);
            eop = 0;
            breakLoop = 0;
            do
             {
              sT39_35 = (j + 1);
              sT10_35 = (j <= i);
              sT40_37 = (temp * 256L);
              if (sT10_35)
               {
                temp = sT40_37;
                j = sT39_35;
               }                /* end of loop condition */
              else
                break;
             } while (1);

            sT11_39 = (temp + 8L);
            temp_list = (list % sT11_39);
            temp_list = (temp_list / temp);
            sT13_42 = (temp_list == ((short)mru));
            if (sT13_42)
             {
              found = 1;
             } /* sT13_42             */
            else
             {
              i = sT35_45;
             }  /* end of if-else (sT13_42)*/
            if (sT33_22)
             {
              eop = 1;
              breakLoop = 1;
             }  /* end of if-else (sT33_22)*/
           }            /* end of loop condition */
          else
            break;
         } while (1);

        sT16_55 = (eop == 0);
        sT41_57 = (found == 1);
        if (sT16_55)
         {
          if (sT41_57)
           {
            pushTo = i;
           } /* sT41_57           */
          else
           {
            if (sT34_61)
             {
              pushTo = sT32_62;
              last = sT32_62;
             } /* sT34_61             */
            else
             {
              pushTo = last;
              last = pushTo;
             }  /* end of if-else (sT34_61)*/
           }  /* end of if-else (sT41_57)*/
          if (sT33_22)
           {
            eop = 0;
            eop = 1;
            sT21_73 = 0;
           } /* sT33_22           */
          else
           {
            sT21_73 = 1;
            eop = 0;
           }  /* end of if-else (sT33_22)*/
          if (sT21_73)
           {
            temp = 0L;
            j = ((short)0);
            eop = 0;
            do
             {
              sT42_77 = (j + 1);
              sT23_77 = (j <= pushTo);
              sT43_79 = (temp * 256L);
              if (sT23_77)
               {
                temp = sT43_79;
                j = sT42_77;
               }                /* end of loop condition */
              else
                break;
             } while (1);

            if (sT33_22)
             {
              temp_list = (list % temp);
              temp1 = (temp * 256L);
              eop = 1;
              sT25_94 = 0;
              list = (list / temp1);
              temp_list = (temp_list * 256L);
              list = (list * temp1);
              list = (list + temp_list);
             } /* sT33_22             */
            else
             {
              temp_list = (list % temp);
              sT25_94 = (eop == 0);
              temp1 = (temp * 256L);
              list = (list / temp1);
              temp_list = (temp_list * 256L);
              list = (list * temp1);
              list = (list + temp_list);
             }  /* end of if-else (sT33_22)*/
            if (sT25_94)
             {
              list = (list / 256L);
              list = (list * 256L);
              list = (list + ((short)mru));
             }  /* end of if-else (sT25_94)*/
           }  /* end of if-else (sT21_73)*/
         }  /* end of if-else (sT16_55)*/
       }  /* end of if-else (sT2_27)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  return   0;

}

