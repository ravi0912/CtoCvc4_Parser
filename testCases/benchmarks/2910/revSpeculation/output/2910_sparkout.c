
extern int main(void);
extern void _main();

int main(void)
{
 int I;
 int RLD_BAR;
 int OEbar;
 int clk;
 int D;
 int E;
 int Y;
 int PL_BAR;
 int VECT_BAR;
 int MAP_BAR;
 int FULL_BAR;
 int FAIL;
 int SP;
 int STACK_SP;
 int RE;
 int uPC;
 int Y_temp;
 int sT0_7;
 int sT1_9;
 int sT2_14;
 int sT3_17;
 int sT4_27;
 int sT5_29;
 int sT6_31;
 int sT7_38;
 int sT8_45;
 int sT9_48;
 int sT10_55;
 int sT11_57;
 int sT12_61;
 int sT13_68;
 int sT14_71;
 int sT15_71;
 int sT16_71;
 int sT17_73;
 int sT18_81;
 int sT19_83;
 int sT20_87;
 int sT21_89;
 int sT22_97;
 int sT23_99;
 int sT24_103;
 int sT25_110;
 int sT26_111;
 int sT27_115;
 int sT28_122;
 int sT29_124;
 int sT30_127;
 int sT31_131;
 int sT32_134;
 int sT33_141;
 int sT34_143;
 int sT35_146;
 int sT36_151;
 int sT37_158;
 int sT38_160;
 int sT39_163;
 int sT40_168;
 int sT41_176;
 int sT42_178;
 int sT43_181;
 int sT44_186;
 int sT45_193;
 int sT46_202;
 int sT47_204;
 int sT48_206;
 int sT49_211;
 int sT50_218;
 int sT51_221;
 int sT52_228;
 int sT53_230;
 int sT54_232;
 int sT55_236;
 int sT56_241;
 int sT57_244;
 int sT58_248;
 int sT59_253;
 int sT60_262;
 int sT61_218;
 int sT62_71;

 int returnVar_main;
  do
   {
    sT0_7 = (clk == 0);
    if (sT0_7)
     {
      1;
     }      /* end of loop condition */
    else
      break;
   } while (1);

  sT2_14 = (I == 0);
  sT4_27 = (I == 1);
  returnVar_main = 0;
  sT13_68 = (I == 4);
  sT8_45 = (I == 2);
  sT10_55 = (I == 3);
  sT18_81 = (I == 5);
  sT22_97 = (I == 6);
  sT25_110 = (I == 7);
  sT28_122 = (I == 8);
  sT37_158 = (I == 10);
  sT41_176 = (I == 11);
  sT33_141 = (I == 9);
  sT61_218 = (I == 15);
  sT50_218 = sT61_218;
  sT46_202 = (I == 13);
  sT52_228 = sT61_218;
  sT45_193 = (I == 12);
  sT1_9 = (SP == 5);
  if (sT1_9)
   {
    FULL_BAR = 0;
   } /* sT1_9   */
  else
   {
    FULL_BAR = 1;
   }  /* end of if-else (sT1_9)*/
  if (sT2_14)
   {
    sT3_17 = (RLD_BAR == 0);
    Y_temp = 0;
    SP = 0;
    uPC = 0;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT3_17)
     {
      RE = D;
     }  /* end of if-else (sT3_17)*/
   }  /* end of if-else (sT2_14)*/
  if (sT4_27)
   {
    sT6_31 = (SP != 5);
    sT7_38 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    sT5_29 = (FAIL == 0);
    if (sT5_29)
     {
      Y_temp = D;
     }  /* end of if-else (sT5_29)*/
    if (sT6_31)
     {
      SP = (SP + 1);
      STACK_SP = uPC;
     } /* sT6_31     */
    else
     {
      Y_temp = uPC;
     }  /* end of if-else (sT6_31)*/
    if (sT7_38)
     {
      RE = D;
     }  /* end of if-else (sT7_38)*/
    uPC = Y_temp;
   }  /* end of if-else (sT4_27)*/
  if (sT8_45)
   {
    sT9_48 = (RLD_BAR == 0);
    Y_temp = D;
    uPC = D;
    MAP_BAR = 0;
    VECT_BAR = 1;
    PL_BAR = 1;
    if (sT9_48)
     {
      RE = D;
     }  /* end of if-else (sT9_48)*/
   }  /* end of if-else (sT8_45)*/
  if (sT10_55)
   {
    sT12_61 = (RLD_BAR == 0);
    sT11_57 = (FAIL == 1);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT11_57)
     {
      Y_temp = uPC;
     } /* sT11_57     */
    else
     {
      Y_temp = D;
     }  /* end of if-else (sT11_57)*/
    if (sT12_61)
     {
      RE = D;
     }  /* end of if-else (sT12_61)*/
    uPC = Y_temp;
   }  /* end of if-else (sT10_55)*/
  if (sT13_68)
   {
    sT17_73 = (SP <= 5);
    sT14_71 = (RLD_BAR == 0);
    Y_temp = uPC;
    STACK_SP = uPC;
    uPC = Y_temp;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    sT62_71 = (FAIL == 0);
    sT15_71 = sT62_71;
    sT16_71 = ((sT62_71) || (sT14_71));
    if (sT16_71)
     {
      E = D;
     }  /* end of if-else (sT16_71)*/
    if (sT17_73)
     {
      SP = (SP + 1);
     }  /* end of if-else (sT17_73)*/
   }  /* end of if-else (sT13_68)*/
  if (sT18_81)
   {
    sT20_87 = (RLD_BAR == 0);
    sT21_89 = (SP <= 5);
    STACK_SP = uPC;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    sT19_83 = (FAIL == 1);
    if (sT19_83)
     {
      Y_temp = RE;
     } /* sT19_83     */
    else
     {
      Y_temp = D;
     }  /* end of if-else (sT19_83)*/
    if (sT20_87)
     {
      RE = D;
     }  /* end of if-else (sT20_87)*/
    if (sT21_89)
     {
      SP = (SP + 1);
     }  /* end of if-else (sT21_89)*/
    uPC = Y_temp;
   }  /* end of if-else (sT18_81)*/
  if (sT22_97)
   {
    sT24_103 = (RLD_BAR == 0);
    sT23_99 = (FAIL == 1);
    MAP_BAR = 1;
    VECT_BAR = 0;
    PL_BAR = 1;
    if (sT23_99)
     {
      Y_temp = uPC;
     } /* sT23_99     */
    else
     {
      Y_temp = D;
     }  /* end of if-else (sT23_99)*/
    if (sT24_103)
     {
      RE = D;
     }  /* end of if-else (sT24_103)*/
    uPC = Y_temp;
   }  /* end of if-else (sT22_97)*/
  if (sT25_110)
   {
    sT27_115 = (RLD_BAR == 0);
    sT26_111 = (FAIL == 1);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT26_111)
     {
      Y_temp = RE;
     } /* sT26_111     */
    else
     {
      Y_temp = D;
     }  /* end of if-else (sT26_111)*/
    if (sT27_115)
     {
      RE = D;
     }  /* end of if-else (sT27_115)*/
    uPC = Y_temp;
   }  /* end of if-else (sT25_110)*/
  if (sT28_122)
   {
    sT29_124 = (RE == 0);
    sT32_134 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT29_124)
     {
      sT30_127 = (SP <= 0);
      sT31_131 = (RLD_BAR == 1);
      Y_temp = uPC;
      if (sT30_127)
       {
        SP = (SP - 1);
       } /* sT30_127       */
      else
       {
        Y_temp = STACK_SP;
       }  /* end of if-else (sT30_127)*/
      if (sT31_131)
       {
        RE = (RE - 1);
       }  /* end of if-else (sT31_131)*/
     }  /* end of if-else (sT29_124)*/
    if (sT32_134)
     {
      RE = D;
     }  /* end of if-else (sT32_134)*/
    uPC = Y_temp;
   }  /* end of if-else (sT28_122)*/
  if (sT33_141)
   {
    sT34_143 = (RE <= 0);
    sT36_151 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT34_143)
     {
      sT35_146 = (RLD_BAR == 1);
      Y_temp = D;
      if (sT35_146)
       {
        RE = (RE - 1);
       }  /* end of if-else (sT35_146)*/
     } /* sT34_143     */
    else
     {
      Y_temp = uPC;
     }  /* end of if-else (sT34_143)*/
    if (sT36_151)
     {
      RE = D;
     }  /* end of if-else (sT36_151)*/
    uPC = Y_temp;
   }  /* end of if-else (sT33_141)*/
  if (sT37_158)
   {
    sT38_160 = (FAIL == 0);
    sT40_168 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT38_160)
     {
      sT39_163 = (SP <= 0);
      Y_temp = STACK_SP;
      if (sT39_163)
       {
        SP = (SP - 1);
       } /* sT39_163       */
      else
       {
        Y_temp = uPC;
       }  /* end of if-else (sT39_163)*/
     }  /* end of if-else (sT38_160)*/
    if (sT40_168)
     {
      RE = D;
     }  /* end of if-else (sT40_168)*/
    uPC = Y_temp;
   }  /* end of if-else (sT37_158)*/
  if (sT41_176)
   {
    sT42_178 = (FAIL == 0);
    sT44_186 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT42_178)
     {
      sT43_181 = (SP != 0);
      Y_temp = D;
      if (sT43_181)
       {
        SP = (SP - 1);
       }  /* end of if-else (sT43_181)*/
     } /* sT42_178     */
    else
     {
      Y_temp = uPC;
     }  /* end of if-else (sT42_178)*/
    if (sT44_186)
     {
      RE = D;
     }  /* end of if-else (sT44_186)*/
    uPC = Y_temp;
   }  /* end of if-else (sT41_176)*/
  if (sT45_193)
   {
    Y_temp = uPC;
    RE = D;
    uPC = Y_temp;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
   }  /* end of if-else (sT45_193)*/
  if (sT46_202)
   {
    sT47_204 = (FAIL == 0);
    sT49_211 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT47_204)
     {
      sT48_206 = (SP != 0);
      Y_temp = uPC;
      if (sT48_206)
       {
        SP = (SP - 1);
       } /* sT48_206       */
      else
       {
        Y_temp = STACK_SP;
       }  /* end of if-else (sT48_206)*/
     }  /* end of if-else (sT47_204)*/
    if (sT49_211)
     {
      RE = D;
     }  /* end of if-else (sT49_211)*/
    uPC = Y_temp;
   }  /* end of if-else (sT46_202)*/
  if (sT50_218)
   {
    sT51_221 = 0;
    Y_temp = uPC;
    RLD_BAR = 0;
    uPC = Y_temp;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT51_221)
     {
      RE = D;
     }  /* end of if-else (sT51_221)*/
   }  /* end of if-else (sT50_218)*/
  if (sT50_218)
   {
    sT53_230 = (RE == 0);
    sT59_253 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT53_230)
     {
      sT54_232 = (FAIL == 1);
      sT55_236 = (SP != 0);
      if (sT54_232)
       {
        Y_temp = D;
       } /* sT54_232       */
      else
       {
        Y_temp = uPC;
       }  /* end of if-else (sT54_232)*/
      if (sT55_236)
       {
        SP = (SP - 1);
       }  /* end of if-else (sT55_236)*/
     } /* sT53_230     */
    else
     {
      sT56_241 = (FAIL == 0);
      sT57_244 = (SP != 0);
      if (sT56_241)
       {
        Y_temp = uPC;
       }  /* end of if-else (sT56_241)*/
      if (sT57_244)
       {
        SP = (SP - 1);
       } /* sT57_244       */
      else
       {
        Y_temp = STACK_SP;
       }  /* end of if-else (sT57_244)*/
      sT58_248 = (RLD_BAR == 1);
      if (sT58_248)
       {
        RE = (RE - 1);
       }  /* end of if-else (sT58_248)*/
     }  /* end of if-else (sT53_230)*/
    if (sT59_253)
     {
      RE = D;
     }  /* end of if-else (sT59_253)*/
    uPC = Y_temp;
   }  /* end of if-else (sT50_218)*/
  sT60_262 = (OEbar == 0);
  if (sT60_262)
   {
    Y = Y_temp;
   } /* sT60_262   */
  else
   {
    Y = (-1);
   }  /* end of if-else (sT60_262)*/
  return   0;

}

