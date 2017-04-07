
extern int main(void);
extern void _main();

int main(void)
{
 int reset;
 int clk;
 int scan;
 int video;
 int start;
 int num;
 int eoc;
 int memw;
 int data;
 int addr;
 int white;
 int black;
 int actnum;
 int flag;
 int wh;
 int bl;
 int eop;
 int sT0_26;
 int sT1_28;
 int sT2_30;
 int sT3_32;
 int sT4_37;
 int sT5_44;
 int sT6_47;
 int sT7_47;
 int sT8_47;
 int sT9_49;
 int sT10_51;
 int sT11_53;
 int sT12_58;
 int sT13_62;
 int sT14_71;
 int sT15_71;
 int sT16_71;
 int sT17_73;
 int sT18_75;
 int sT19_78;
 int sT20_85;
 int sT21_99;
 int sT22_102;
 int sT23_109;
 int sT24_121;
 int sT25_127;
 int sT26_131;
 int sT27_137;
 int sT28_139;
 int sT29_142;
 int sT30_147;
 int sT31_47;
 int sT32_47;
 int sT33_71;
 int sT34_71;
 int sT35_84;
 int sT36_108;

 int returnVar_main;
  wh = 0;
  bl = 1;
  eoc = 0;
  memw = 0;
  data = 0;
  addr = 0;
  eop = 0;
  returnVar_main = 0;
  do
   {
    sT0_26 = 1;
    if (1)
     {
      do
       {
        sT1_28 = 1;
        if (1)
         {
          do
           {
            sT2_30 = (clk != 1);
            if (sT2_30)
             {
              1;
             }              /* end of loop condition */
            else
              break;
           } while (1);

          sT3_32 = (reset == 1);
          sT4_37 = (start == 1);
          eop = 0;
          1;
          if (sT3_32)
           {
            eop = 1;
           }  /* end of if-else (sT3_32)*/
         }*/
        sT5_44 = (eop == 1);
        do
         {
          sT31_47 = (white != 255);
          sT6_47 = sT31_47;
          sT32_47 = (actnum != num);
          sT7_47 = sT32_47;
          sT8_47 = ((sT32_47) && (sT31_47));
          if (sT8_47)
           {
            do
             {
              sT9_49 = 1;
              if (1)
               {
                do
                 {
                  sT10_51 = (clk != 1);
                  if (sT10_51)
                   {
                    1;
                   }                    /* end of loop condition */
                  else
                    break;
                 } while (1);

                sT11_53 = (reset == 1);
                sT12_58 = (scan == 1);
                eop = 0;
                1;
                if (sT11_53)
                 {
                  eop = 1;
                 }  /* end of if-else (sT11_53)*/
               }*/
              sT13_62 = (eop == 1);
              flag = 0;
              actnum = 0;
              white = 0;
              black = 0;
              eoc = 0;
              do
               {
                sT33_71 = (black != 255);
                sT14_71 = sT33_71;
                sT34_71 = (white != 255);
                sT15_71 = sT34_71;
                sT16_71 = ((sT34_71) || (sT33_71));
                if (sT16_71)
                 {
                  sT17_73 = (video == 0);
                  1;
                  if (sT17_73)
                   {
                    do
                     {
                      sT18_75 = (clk != 1);
                      if (sT18_75)
                       {
                        1;
                       }                        /* end of loop condition */
                      else
                        break;
                     } while (1);

                    sT35_84 = (white + 1);
                    white = sT35_84;
                    sT19_78 = (reset == 1);
                    sT20_85 = (flag == 1);
                    eop = 0;
                    black = 0;
                    flag = 0;
                    data = sT35_84;
                    if (sT19_78)
                     {
                      eop = 1;
                     }  /* end of if-else (sT19_78)*/
                    if (sT20_85)
                     {
                      actnum = (actnum + 1);
                      memw = 0;
                     } /* sT20_85                     */
                    else
                     {
                      memw = 1;
                     }  /* end of if-else (sT20_85)*/
                   } /* sT17_73                   */
                  else
                   {
                    do
                     {
                      sT21_99 = (clk != 1);
                      if (sT21_99)
                       {
                        1;
                       }                        /* end of loop condition */
                      else
                        break;
                     } while (1);

                    sT36_108 = (black + 1);
                    black = sT36_108;
                    sT22_102 = (reset == 1);
                    sT23_109 = (flag == 0);
                    eop = 0;
                    flag = 1;
                    white = 0;
                    data = sT36_108;
                    if (sT22_102)
                     {
                      eop = 1;
                     }*/
                    sT25_127 = (eop == 1);
                    1;
                   }*/
                  sT26_131 = (eop == 1);
                  memw = 0;
                  eoc = 1;
                 }*/
                {
                   int reset;
 int clk;
 int scan;
 int video;
 int start;
 int num;
 int eoc;
 int memw;
 int data;
 int addr;
 int white;
 int black;
 int actnum;
 int flag;
 int wh;
 int bl;
 int eop;
 int sT0_26;
 int sT1_28;
 int sT2_30;
 int sT3_32;
 int sT4_37;
 int sT5_44;
 int sT6_47;
 int sT7_47;
 int sT8_47;
 int sT9_49;
 int sT10_51;
 int sT11_53;
 int sT12_58;
 int sT13_62;
 int sT14_71;
 int sT15_71;
 int sT16_71;
 int sT17_73;
 int sT18_75;
 int sT19_78;
 int sT20_85;
 int sT21_99;
 int sT22_102;
 int sT23_109;
 int sT24_121;
 int sT25_127;
 int sT26_131;
 int sT27_137;
 int sT28_139;
 int sT29_142;
 int sT30_147;
 int sT31_47;
 int sT32_47;
 int sT33_71;
 int sT34_71;
 int sT35_84;
 int sT36_108;

                }

                return                 0;
                do
                 {
                  sT27_137 = (start != 0);
                  if (sT27_137)
                   {
                    do
                     {
                      sT28_139 = (clk != 1);
                      if (sT28_139)
                       {
                        1;
                       }                        /* end of loop condition */
                      else
                        break;
                     } while (1);

                    sT29_142 = (reset == 1);
                    sT30_147 = (start == 0);
                    eop = 0;
                    1;
                    if (sT29_142)
                     {
                      eop = 1;
                     }  /* end of if-else (sT29_142)*/
                   }*/
                  1;
                 }                  /* end of loop condition */
                else
                  break;
               }                /* end of loop condition */
              else
                break;
             } while (1);

           }            /* end of loop condition */
          else
            break;
         }  /* end of if-else (sT22_102)*/
        if (sT23_109)
         {
          actnum = (actnum + 1);
          memw = 0;
         } /* sT23_109         */
        else
         {
          memw = 1;
         }  /* end of if-else (sT23_109)*/
       }  /* end of if-else (sT17_73)*/
      sT24_121 = (eop == 1);
      addr = actnum;
     }*/
   }    /* end of loop condition */
  else
    break;
 } while (1);

} /* end of loop condition */
else
  break;
 } while (1);

 } while (1);

} /* end of loop condition */
else
  break;
 } while (1);

 } while (1);


}

