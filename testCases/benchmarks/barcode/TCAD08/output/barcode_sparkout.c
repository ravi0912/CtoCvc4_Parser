
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
 int sT31_32;
 int sT32_37;
 int sT33_47;
 int sT34_47;
 int sT35_53;
 int sT36_58;
 int sT37_87;
 int sT38_84;
 int sT39_71;
 int sT40_71;
 int sT41_121;
 int sT42_142;

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
        sT31_32 = (reset == 1);
        sT32_37 = (start == 1);
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

          if (sT31_32)
           {
            eop = 0;
            sT3_32 = sT31_32;
            eop = 1;
           }  /* end of if-else (sT31_32)*/
          if (sT32_37)
           {
            eop = 0;
            sT3_32 = sT31_32;
            sT4_37 = sT32_37;
           }*/
          sT5_44 = (eop == 1);
          do
           {
            sT33_47 = (white != 255);
            sT6_47 = sT33_47;
            sT34_47 = (actnum != num);
            sT7_47 = sT34_47;
            sT8_47 = ((sT34_47) && (sT33_47));
            if (sT8_47)
             {
              do
               {
                sT35_53 = (reset == 1);
                sT36_58 = (scan == 1);
                sT9_49 = 1;
                if (1)
                 {
                  do
                   {
                    sT10_51 = (clk != 1);
                    if (sT10_51)
                     {
                      1;
                     }                      /* end of loop condition */
                    else
                      break;
                   } while (1);

                  if (sT35_53)
                   {
                    eop = 0;
                    sT11_53 = sT35_53;
                    eop = 1;
                   }  /* end of if-else (sT35_53)*/
                  if (sT36_58)
                   {
                    eop = 0;
                    sT11_53 = sT35_53;
                    sT12_58 = sT36_58;
                   }*/
                  sT13_62 = (eop == 1);
                  flag = 0;
                  actnum = 0;
                  white = 0;
                  black = 0;
                  eoc = 0;
                  do
                   {
                    sT37_87 = (actnum + 1);
                    sT38_84 = (white + 1);
                    sT39_71 = (black != 255);
                    sT14_71 = sT39_71;
                    sT40_71 = (white != 255);
                    sT15_71 = sT40_71;
                    sT16_71 = ((sT40_71) || (sT39_71));
                    if (sT16_71)
                     {
                      black = (black + 1);
                      sT17_73 = (video == 0);
                      sT19_78 = (reset == 1);
                      1;
                      if (sT17_73)
                       {
                        do
                         {
                          sT18_75 = (clk != 1);
                          if (sT18_75)
                           {
                            1;
                           }                            /* end of loop condition */
                          else
                            break;
                         } while (1);

                        if (sT19_78)
                         {
                          eop = 0;
                          eop = 1;
                         } /* sT19_78                         */
                        else
                         {
                          sT20_85 = (flag == 1);
                          eop = 0;
                          white = sT38_84;
                          black = 0;
                          flag = 0;
                          data = sT38_84;
                         }  /* end of if-else (sT19_78)*/
                        if (sT20_85)
                         {
                          actnum = sT37_87;
                          memw = 0;
                          sT41_121 = (eop == 1);
                         } /* sT20_85                         */
                        else
                         {
                          memw = 1;
                          sT41_121 = (eop == 1);
                         }  /* end of if-else (sT20_85)*/
                       } /* sT17_73                       */
                      else
                       {
                        do
                         {
                          sT21_99 = (clk != 1);
                          if (sT21_99)
                           {
                            1;
                           }                            /* end of loop condition */
                          else
                            break;
                         } while (1);

                        if (sT19_78)
                         {
                          eop = 0;
                          sT22_102 = sT19_78;
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
 int sT31_32;
 int sT32_37;
 int sT33_47;
 int sT34_47;
 int sT35_53;
 int sT36_58;
 int sT37_87;
 int sT38_84;
 int sT39_71;
 int sT40_71;
 int sT41_121;
 int sT42_142;

                    }

                    return                     0;
                    do
                     {
                      sT27_137 = (start != 0);
                      sT42_142 = (reset == 1);
                      if (sT27_137)
                       {
                        do
                         {
                          sT28_139 = (clk != 1);
                          if (sT28_139)
                           {
                            1;
                           }                            /* end of loop condition */
                          else
                            break;
                         } while (1);

                        if (sT42_142)
                         {
                          eop = 0;
                          sT29_142 = sT42_142;
                          eop = 1;
                         } /* sT42_142                         */
                        else
                         {
                          sT30_147 = (start == 0);
                          sT29_142 = sT42_142;
                          1;
                         }  /* end of if-else (sT42_142)*/
                       }*/
                      1;
                     }                      /* end of loop condition */
                    else
                      break;
                   }                    /* end of loop condition */
                  else
                    break;
                 } while (1);

               }                /* end of loop condition */
              else
                break;
             } /* sT19_78             */
            else
             {
              sT23_109 = (flag == 0);
              sT41_121 = 0;
              eop = 0;
              sT22_102 = sT19_78;
              flag = 1;
              white = 0;
              data = black;
             }  /* end of if-else (sT19_78)*/
            if (sT23_109)
             {
              actnum = sT37_87;
              memw = 0;
             } /* sT23_109             */
            else
             {
              memw = 1;
             }  /* end of if-else (sT23_109)*/
           }  /* end of if-else (sT17_73)*/
          if (sT41_121)
           {
            sT24_121 = sT41_121;
           }*/
         } /* sT41_121         */
        else
         {
          sT24_121 = sT41_121;
          addr = actnum;
         }  /* end of if-else (sT41_121)*/
       }        /* end of loop condition */
      else
        break;
     } while (1);

   } /* sT36_58   */
  else
   {
    eop = 0;
    sT11_53 = sT35_53;
    sT12_58 = sT36_58;
    1;
   }  /* end of if-else (sT36_58)*/
 }  /* end of loop condition */
else
  break;
 } while (1);

 } while (1);

} /* sT32_37*/
else
 {
  eop = 0;
  sT3_32 = sT31_32;
  sT4_37 = sT32_37;
  1;
 }  /* end of if-else (sT32_37)*/
} /* end of loop condition */
else
  break;
 } while (1);

 } while (1);


}

