
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
 int sT61_17;
 int sT62_29;
 int sT63_29;
 int sT64_71;
 int sT65_57;
 int sT66_131;
 int sT67_218;
 int sT68_221;
 int sT69_33;
 int sT70_74;
 int sT71_73;
 int sT72_75;
 int sT73_90;
 int sT74_91;
 int sT75_128;
 int sT76_127;
 int sT77_132;
 int sT78_164;
 int sT79_163;
 int sT80_147;
 int sT81_182;
 int sT82_181;
 int sT83_207;
 int sT84_206;
 int sT85_237;
 int sT86_244;
 int sT87_249;
 int sT88_248;

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
  sT61_17 = (RLD_BAR == 0);
  sT28_122 = (I == 8);
  sT63_29 = (FAIL == 0);
  sT62_29 = sT63_29;
  sT37_158 = (I == 10);
  sT64_71 = ((sT63_29) || (sT61_17));
  sT65_57 = (FAIL == 1);
  sT66_131 = (RLD_BAR == 1);
  sT41_176 = (I == 11);
  sT33_141 = (I == 9);
  sT67_218 = (I == 15);
  sT50_218 = sT67_218;
  sT46_202 = (I == 13);
  sT52_228 = sT67_218;
  sT45_193 = (I == 12);
  sT68_221 = 0;
  sT1_9 = (SP == 5);
  sT60_262 = (OEbar == 0);
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
    if (sT61_17)
     {
      Y_temp = 0;
      sT3_17 = sT61_17;
      RE = D;
      SP = 0;
      uPC = 0;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT61_17     */
    else
     {
      Y_temp = 0;
      sT3_17 = sT61_17;
      SP = 0;
      uPC = 0;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT61_17)*/
   }  /* end of if-else (sT2_14)*/
  if (sT4_27)
   {
    if (sT62_29)
     {
      sT5_29 = sT62_29;
      Y_temp = D;
      sT69_33 = (SP + 1);
      sT6_31 = (SP != 5);
      sT7_38 = sT61_17;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT62_29     */
    else
     {
      sT69_33 = (SP + 1);
      sT6_31 = (SP != 5);
      sT5_29 = sT62_29;
      sT7_38 = sT61_17;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_29)*/
    if (sT6_31)
     {
      SP = sT69_33;
      STACK_SP = uPC;
      uPC = Y_temp;
     } /* sT6_31     */
    else
     {
      Y_temp = uPC;
      uPC = Y_temp;
     }  /* end of if-else (sT6_31)*/
    if (sT61_17)
     {
      RE = D;
      sT70_74 = (SP + 1);
      sT71_73 = (SP <= 5);
     } /* sT61_17     */
    else
     {
      sT70_74 = (SP + 1);
      sT71_73 = (SP <= 5);
     }  /* end of if-else (sT61_17)*/
   } /* sT4_27   */
  else
   {
    sT70_74 = (SP + 1);
    sT71_73 = (SP <= 5);
   }  /* end of if-else (sT4_27)*/
  if (sT8_45)
   {
    if (sT61_17)
     {
      Y_temp = D;
      sT9_48 = sT61_17;
      RE = D;
      uPC = D;
      MAP_BAR = 0;
      VECT_BAR = 1;
      PL_BAR = 1;
     } /* sT61_17     */
    else
     {
      Y_temp = D;
      sT9_48 = sT61_17;
      uPC = Y_temp;
      MAP_BAR = 0;
      VECT_BAR = 1;
      PL_BAR = 1;
     }  /* end of if-else (sT61_17)*/
   }  /* end of if-else (sT8_45)*/
  if (sT10_55)
   {
    if (sT65_57)
     {
      sT11_57 = sT65_57;
      Y_temp = uPC;
      uPC = uPC;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT65_57     */
    else
     {
      sT11_57 = sT65_57;
      Y_temp = D;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT65_57)*/
    if (sT61_17)
     {
      sT12_61 = sT61_17;
      RE = D;
     } /* sT61_17     */
    else
     {
      sT12_61 = sT61_17;
     }  /* end of if-else (sT61_17)*/
   }  /* end of if-else (sT10_55)*/
  if (sT13_68)
   {
    if (sT64_71)
     {
      Y_temp = uPC;
      sT14_71 = sT61_17;
      sT15_71 = sT62_29;
      sT16_71 = sT64_71;
      E = D;
      sT17_73 = sT71_73;
      STACK_SP = uPC;
      sT72_75 = uPC;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT64_71     */
    else
     {
      Y_temp = uPC;
      sT14_71 = sT61_17;
      sT15_71 = sT62_29;
      sT16_71 = sT64_71;
      sT17_73 = sT71_73;
      STACK_SP = uPC;
      sT72_75 = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT64_71)*/
    if (sT71_73)
     {
      SP = sT70_74;
     }  /* end of if-else (sT71_73)*/
    uPC = sT72_75;
   }  /* end of if-else (sT13_68)*/
  if (sT18_81)
   {
    if (sT65_57)
     {
      sT19_83 = sT65_57;
      Y_temp = RE;
      sT73_90 = (SP + 1);
      sT21_89 = (SP <= 5);
      STACK_SP = uPC;
      sT74_91 = RE;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT65_57     */
    else
     {
      sT73_90 = (SP + 1);
      sT21_89 = (SP <= 5);
      sT19_83 = sT65_57;
      Y_temp = D;
      STACK_SP = uPC;
      sT74_91 = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT65_57)*/
    if (sT61_17)
     {
      sT20_87 = sT61_17;
      RE = D;
     } /* sT61_17     */
    else
     {
      sT20_87 = sT61_17;
     }  /* end of if-else (sT61_17)*/
    if (sT21_89)
     {
      SP = sT73_90;
     }  /* end of if-else (sT21_89)*/
    uPC = sT74_91;
   }  /* end of if-else (sT18_81)*/
  if (sT22_97)
   {
    if (sT65_57)
     {
      sT23_99 = sT65_57;
      Y_temp = uPC;
      uPC = uPC;
      MAP_BAR = 1;
      VECT_BAR = 0;
      PL_BAR = 1;
     } /* sT65_57     */
    else
     {
      sT23_99 = sT65_57;
      Y_temp = D;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 0;
      PL_BAR = 1;
     }  /* end of if-else (sT65_57)*/
    if (sT61_17)
     {
      sT24_103 = sT61_17;
      RE = D;
      sT75_128 = (SP - 1);
      sT76_127 = (SP <= 0);
     } /* sT61_17     */
    else
     {
      sT24_103 = sT61_17;
      sT75_128 = (SP - 1);
      sT76_127 = (SP <= 0);
     }  /* end of if-else (sT61_17)*/
   } /* sT22_97   */
  else
   {
    sT75_128 = (SP - 1);
    sT76_127 = (SP <= 0);
   }  /* end of if-else (sT22_97)*/
  if (sT25_110)
   {
    if (sT65_57)
     {
      sT26_111 = sT65_57;
      Y_temp = RE;
      uPC = RE;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT65_57     */
    else
     {
      sT26_111 = sT65_57;
      Y_temp = D;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT65_57)*/
    if (sT61_17)
     {
      sT27_115 = sT61_17;
      RE = D;
     } /* sT61_17     */
    else
     {
      sT27_115 = sT61_17;
     }  /* end of if-else (sT61_17)*/
   }  /* end of if-else (sT25_110)*/
  if (sT28_122)
   {
    sT77_132 = (RE - 1);
    sT29_124 = (RE == 0);
    sT32_134 = sT61_17;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT29_124)
     {
      if (sT76_127)
       {
        Y_temp = uPC;
        sT30_127 = sT76_127;
        SP = sT75_128;
        sT31_131 = sT66_131;
       } /* sT76_127       */
      else
       {
        Y_temp = uPC;
        sT30_127 = sT76_127;
        Y_temp = STACK_SP;
        sT31_131 = sT66_131;
       }  /* end of if-else (sT76_127)*/
      if (sT66_131)
       {
        RE = sT77_132;
        uPC = Y_temp;
       } /* sT66_131       */
      else
       {
        uPC = Y_temp;
       }  /* end of if-else (sT66_131)*/
     } /* sT29_124     */
    else
     {
      uPC = Y_temp;
     }  /* end of if-else (sT29_124)*/
    if (sT61_17)
     {
      RE = D;
      sT78_164 = (SP - 1);
      sT79_163 = (SP <= 0);
     } /* sT61_17     */
    else
     {
      sT78_164 = (SP - 1);
      sT79_163 = (SP <= 0);
     }  /* end of if-else (sT61_17)*/
   } /* sT28_122   */
  else
   {
    sT78_164 = (SP - 1);
    sT79_163 = (SP <= 0);
   }  /* end of if-else (sT28_122)*/
  if (sT33_141)
   {
    sT80_147 = (RE - 1);
    sT34_143 = (RE <= 0);
    sT36_151 = sT61_17;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT34_143)
     {
      if (sT66_131)
       {
        Y_temp = D;
        sT35_146 = sT66_131;
        RE = sT80_147;
        uPC = D;
       } /* sT66_131       */
      else
       {
        Y_temp = D;
        sT35_146 = sT66_131;
        uPC = D;
       }  /* end of if-else (sT66_131)*/
     } /* sT34_143     */
    else
     {
      Y_temp = uPC;
      uPC = Y_temp;
     }  /* end of if-else (sT34_143)*/
    if (sT61_17)
     {
      RE = D;
     }  /* end of if-else (sT61_17)*/
   }  /* end of if-else (sT33_141)*/
  if (sT37_158)
   {
    if (sT62_29)
     {
      if (sT79_163)
       {
        sT38_160 = sT62_29;
        Y_temp = STACK_SP;
        sT39_163 = sT79_163;
        SP = sT78_164;
        uPC = STACK_SP;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       } /* sT79_163       */
      else
       {
        sT38_160 = sT62_29;
        Y_temp = STACK_SP;
        sT39_163 = sT79_163;
        Y_temp = uPC;
        uPC = uPC;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       }  /* end of if-else (sT79_163)*/
     } /* sT62_29     */
    else
     {
      sT38_160 = sT62_29;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_29)*/
    if (sT61_17)
     {
      sT40_168 = sT61_17;
      RE = D;
      sT81_182 = (SP - 1);
      sT82_181 = (SP != 0);
     } /* sT61_17     */
    else
     {
      sT40_168 = sT61_17;
      sT81_182 = (SP - 1);
      sT82_181 = (SP != 0);
     }  /* end of if-else (sT61_17)*/
   } /* sT37_158   */
  else
   {
    sT81_182 = (SP - 1);
    sT82_181 = (SP != 0);
   }  /* end of if-else (sT37_158)*/
  if (sT41_176)
   {
    if (sT62_29)
     {
      if (sT82_181)
       {
        sT42_178 = sT62_29;
        Y_temp = D;
        sT43_181 = sT82_181;
        SP = sT81_182;
        uPC = D;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       } /* sT82_181       */
      else
       {
        sT42_178 = sT62_29;
        Y_temp = D;
        sT43_181 = sT82_181;
        uPC = D;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       }  /* end of if-else (sT82_181)*/
     } /* sT62_29     */
    else
     {
      sT42_178 = sT62_29;
      Y_temp = uPC;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_29)*/
    if (sT61_17)
     {
      sT44_186 = sT61_17;
      RE = D;
      sT83_207 = (SP - 1);
      sT84_206 = (SP != 0);
     } /* sT61_17     */
    else
     {
      sT44_186 = sT61_17;
      sT83_207 = (SP - 1);
      sT84_206 = (SP != 0);
     }  /* end of if-else (sT61_17)*/
   } /* sT41_176   */
  else
   {
    sT83_207 = (SP - 1);
    sT84_206 = (SP != 0);
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
    if (sT62_29)
     {
      if (sT84_206)
       {
        sT47_204 = sT62_29;
        Y_temp = uPC;
        sT48_206 = sT84_206;
        SP = sT83_207;
        uPC = uPC;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       } /* sT84_206       */
      else
       {
        sT47_204 = sT62_29;
        Y_temp = uPC;
        sT48_206 = sT84_206;
        Y_temp = STACK_SP;
        uPC = STACK_SP;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       }  /* end of if-else (sT84_206)*/
     } /* sT62_29     */
    else
     {
      sT47_204 = sT62_29;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_29)*/
    if (sT61_17)
     {
      sT49_211 = sT61_17;
      RE = D;
      sT85_237 = (SP - 1);
      sT86_244 = (SP != 0);
     } /* sT61_17     */
    else
     {
      sT49_211 = sT61_17;
      sT85_237 = (SP - 1);
      sT86_244 = (SP != 0);
     }  /* end of if-else (sT61_17)*/
   } /* sT46_202   */
  else
   {
    sT85_237 = (SP - 1);
    sT86_244 = (SP != 0);
   }  /* end of if-else (sT46_202)*/
  if (sT50_218)
   {
    if (sT68_221)
     {
      Y_temp = uPC;
      RLD_BAR = 0;
      sT51_221 = sT68_221;
      RE = D;
      uPC = uPC;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT68_221     */
    else
     {
      Y_temp = uPC;
      RLD_BAR = 0;
      sT51_221 = sT68_221;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT68_221)*/
   }  /* end of if-else (sT50_218)*/
  if (sT50_218)
   {
    sT87_249 = (RE - 1);
    sT53_230 = (RE == 0);
    sT88_248 = (RLD_BAR == 1);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT53_230)
     {
      if (sT65_57)
       {
        sT54_232 = sT65_57;
        Y_temp = D;
       } /* sT65_57       */
      else
       {
        sT54_232 = sT65_57;
        Y_temp = uPC;
       }  /* end of if-else (sT65_57)*/
      if (sT86_244)
       {
        sT55_236 = sT86_244;
        SP = sT85_237;
        sT59_253 = (RLD_BAR == 0);
        uPC = Y_temp;
       } /* sT86_244       */
      else
       {
        sT55_236 = sT86_244;
        sT59_253 = (RLD_BAR == 0);
        uPC = Y_temp;
       }  /* end of if-else (sT86_244)*/
     } /* sT53_230     */
    else
     {
      if (sT62_29)
       {
        sT56_241 = sT62_29;
        Y_temp = uPC;
        sT59_253 = (RLD_BAR == 0);
        sT58_248 = sT88_248;
       } /* sT62_29       */
      else
       {
        sT59_253 = (RLD_BAR == 0);
        sT56_241 = sT62_29;
        sT58_248 = sT88_248;
       }  /* end of if-else (sT62_29)*/
      if (sT86_244)
       {
        sT57_244 = sT86_244;
        SP = sT85_237;
        uPC = Y_temp;
       } /* sT86_244       */
      else
       {
        sT57_244 = sT86_244;
        Y_temp = STACK_SP;
        uPC = Y_temp;
       }  /* end of if-else (sT86_244)*/
      if (sT88_248)
       {
        RE = sT87_249;
       }  /* end of if-else (sT88_248)*/
     }  /* end of if-else (sT53_230)*/
    if (sT59_253)
     {
      RE = D;
     }  /* end of if-else (sT59_253)*/
   }  /* end of if-else (sT50_218)*/
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

