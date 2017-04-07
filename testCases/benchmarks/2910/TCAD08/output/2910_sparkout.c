
extern int main(void);
extern void _main();

int main(void)
{
 int I;
 int RLD_BAR;
 int OEbar;
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
 int sT1_11;
 int sT2_14;
 int sT3_22;
 int sT4_24;
 int sT5_26;
 int sT6_33;
 int sT7_40;
 int sT8_43;
 int sT9_50;
 int sT10_52;
 int sT11_56;
 int sT12_63;
 int sT13_66;
 int sT14_66;
 int sT15_66;
 int sT16_68;
 int sT17_76;
 int sT18_78;
 int sT19_82;
 int sT20_84;
 int sT21_92;
 int sT22_94;
 int sT23_98;
 int sT24_105;
 int sT25_106;
 int sT26_110;
 int sT27_117;
 int sT28_119;
 int sT29_122;
 int sT30_126;
 int sT31_129;
 int sT32_136;
 int sT33_138;
 int sT34_141;
 int sT35_146;
 int sT36_153;
 int sT37_155;
 int sT38_158;
 int sT39_163;
 int sT40_171;
 int sT41_173;
 int sT42_176;
 int sT43_181;
 int sT44_188;
 int sT45_197;
 int sT46_199;
 int sT47_201;
 int sT48_206;
 int sT49_213;
 int sT50_216;
 int sT51_223;
 int sT52_225;
 int sT53_227;
 int sT54_231;
 int sT55_236;
 int sT56_239;
 int sT57_243;
 int sT58_248;
 int sT59_257;
 int sT60_213;
 int sT61_14;
 int sT62_24;
 int sT63_14;
 int sT64_24;
 int sT65_14;
 int sT66_24;
 int sT67_66;
 int sT68_52;
 int sT69_216;
 int sT70_28;
 int sT71_68;
 int sT72_257;
 int sT73_69;
 int sT74_70;
 int sT75_85;
 int sT76_86;
 int sT77_127;
 int sT78_232;
 int sT79_240;
 int sT80_244;

 int returnVar_main;
  sT1_11 = (I == 0);
  sT3_22 = (I == 1);
  returnVar_main = 0;
  sT12_63 = (I == 4);
  sT7_40 = (I == 2);
  sT9_50 = (I == 3);
  sT17_76 = (I == 5);
  sT21_92 = (I == 6);
  sT24_105 = (I == 7);
  sT27_117 = (I == 8);
  sT36_153 = (I == 10);
  sT40_171 = (I == 11);
  sT32_136 = (I == 9);
  sT60_213 = (I == 15);
  sT49_213 = sT60_213;
  sT45_197 = (I == 13);
  sT51_223 = sT60_213;
  sT44_188 = (I == 12);
  sT0_7 = (SP == 5);
  if (sT0_7)
   {
    FULL_BAR = 0;
    sT63_14 = (RLD_BAR == 0);
    sT61_14 = sT63_14;
    sT64_24 = (FAIL == 0);
    sT62_24 = sT64_24;
    sT67_66 = ((sT64_24) || (sT63_14));
   } /* sT0_7   */
  else
   {
    sT65_14 = (RLD_BAR == 0);
    sT61_14 = sT65_14;
    sT66_24 = (FAIL == 0);
    sT62_24 = sT66_24;
    sT67_66 = ((sT66_24) || (sT65_14));
    FULL_BAR = 1;
   }  /* end of if-else (sT0_7)*/
  if (sT1_11)
   {
    if (sT61_14)
     {
      Y_temp = 0;
      sT2_14 = sT61_14;
      RE = D;
      SP = 0;
      uPC = 0;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
      sT68_52 = (FAIL == 1);
      sT69_216 = 0;
     } /* sT61_14     */
    else
     {
      Y_temp = 0;
      sT2_14 = sT61_14;
      SP = 0;
      uPC = 0;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
      sT68_52 = (FAIL == 1);
      sT69_216 = 0;
     }  /* end of if-else (sT61_14)*/
   } /* sT1_11   */
  else
   {
    sT68_52 = (FAIL == 1);
    sT69_216 = 0;
   }  /* end of if-else (sT1_11)*/
  if (sT3_22)
   {
    if (sT62_24)
     {
      sT4_24 = sT62_24;
      Y_temp = D;
      sT70_28 = (SP + 1);
      sT5_26 = (SP <= 5);
      sT6_33 = sT61_14;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT62_24     */
    else
     {
      sT70_28 = (SP + 1);
      sT5_26 = (SP <= 5);
      sT4_24 = sT62_24;
      sT6_33 = sT61_14;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_24)*/
    if (sT5_26)
     {
      SP = sT70_28;
      STACK_SP = uPC;
      uPC = Y_temp;
     } /* sT5_26     */
    else
     {
      Y_temp = uPC;
      uPC = Y_temp;
     }  /* end of if-else (sT5_26)*/
    if (sT61_14)
     {
      RE = D;
      sT71_68 = (SP <= 5);
      sT72_257 = (OEbar == 0);
     } /* sT61_14     */
    else
     {
      sT71_68 = (SP <= 5);
      sT72_257 = (OEbar == 0);
     }  /* end of if-else (sT61_14)*/
   } /* sT3_22   */
  else
   {
    sT71_68 = (SP <= 5);
    sT72_257 = (OEbar == 0);
   }  /* end of if-else (sT3_22)*/
  if (sT7_40)
   {
    if (sT61_14)
     {
      Y_temp = D;
      sT8_43 = sT61_14;
      RE = D;
      uPC = D;
      MAP_BAR = 0;
      VECT_BAR = 1;
      PL_BAR = 1;
     } /* sT61_14     */
    else
     {
      Y_temp = D;
      sT8_43 = sT61_14;
      uPC = Y_temp;
      MAP_BAR = 0;
      VECT_BAR = 1;
      PL_BAR = 1;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT7_40)*/
  if (sT9_50)
   {
    if (sT68_52)
     {
      sT10_52 = sT68_52;
      Y_temp = uPC;
      uPC = uPC;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT68_52     */
    else
     {
      sT10_52 = sT68_52;
      Y_temp = D;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT68_52)*/
    if (sT61_14)
     {
      sT11_56 = sT61_14;
      RE = D;
     } /* sT61_14     */
    else
     {
      sT11_56 = sT61_14;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT9_50)*/
  if (sT12_63)
   {
    if (sT67_66)
     {
      Y_temp = uPC;
      sT13_66 = sT61_14;
      sT14_66 = sT62_24;
      sT15_66 = sT67_66;
      E = D;
      sT73_69 = (SP + 1);
      sT16_68 = sT71_68;
      STACK_SP = uPC;
      sT74_70 = uPC;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT67_66     */
    else
     {
      sT73_69 = (SP + 1);
      Y_temp = uPC;
      sT13_66 = sT61_14;
      sT14_66 = sT62_24;
      sT15_66 = sT67_66;
      sT16_68 = sT71_68;
      STACK_SP = uPC;
      sT74_70 = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT67_66)*/
    if (sT71_68)
     {
      SP = sT73_69;
     }  /* end of if-else (sT71_68)*/
    uPC = sT74_70;
   }  /* end of if-else (sT12_63)*/
  if (sT17_76)
   {
    if (sT68_52)
     {
      sT18_78 = sT68_52;
      Y_temp = RE;
      sT75_85 = (SP + 1);
      sT20_84 = (SP <= 5);
      STACK_SP = uPC;
      sT76_86 = RE;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT68_52     */
    else
     {
      sT75_85 = (SP + 1);
      sT20_84 = (SP <= 5);
      sT18_78 = sT68_52;
      Y_temp = D;
      STACK_SP = uPC;
      sT76_86 = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT68_52)*/
    if (sT61_14)
     {
      sT19_82 = sT61_14;
      RE = D;
     } /* sT61_14     */
    else
     {
      sT19_82 = sT61_14;
     }  /* end of if-else (sT61_14)*/
    if (sT20_84)
     {
      SP = sT75_85;
     }  /* end of if-else (sT20_84)*/
    uPC = sT76_86;
   }  /* end of if-else (sT17_76)*/
  if (sT21_92)
   {
    if (sT68_52)
     {
      sT22_94 = sT68_52;
      Y_temp = uPC;
      uPC = uPC;
      MAP_BAR = 1;
      VECT_BAR = 0;
      PL_BAR = 1;
     } /* sT68_52     */
    else
     {
      sT22_94 = sT68_52;
      Y_temp = D;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 0;
      PL_BAR = 1;
     }  /* end of if-else (sT68_52)*/
    if (sT61_14)
     {
      sT23_98 = sT61_14;
      RE = D;
     } /* sT61_14     */
    else
     {
      sT23_98 = sT61_14;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT21_92)*/
  if (sT24_105)
   {
    if (sT68_52)
     {
      sT25_106 = sT68_52;
      Y_temp = RE;
      uPC = RE;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT68_52     */
    else
     {
      sT25_106 = sT68_52;
      Y_temp = D;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT68_52)*/
    if (sT61_14)
     {
      sT26_110 = sT61_14;
      RE = D;
     } /* sT61_14     */
    else
     {
      sT26_110 = sT61_14;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT24_105)*/
  if (sT27_117)
   {
    sT28_119 = (RE == 0);
    sT31_129 = sT61_14;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT28_119)
     {
      sT29_122 = (SP <= 0);
      sT30_126 = (RLD_BAR == 1);
      Y_temp = uPC;
      if (sT29_122)
       {
        SP = (SP - 1);
        sT77_127 = (RE - 1);
       } /* sT29_122       */
      else
       {
        sT77_127 = (RE - 1);
        Y_temp = STACK_SP;
       }  /* end of if-else (sT29_122)*/
      if (sT30_126)
       {
        RE = sT77_127;
        uPC = Y_temp;
       } /* sT30_126       */
      else
       {
        uPC = Y_temp;
       }  /* end of if-else (sT30_126)*/
     } /* sT28_119     */
    else
     {
      uPC = Y_temp;
     }  /* end of if-else (sT28_119)*/
    if (sT61_14)
     {
      RE = D;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT27_117)*/
  if (sT32_136)
   {
    sT33_138 = (RE <= 0);
    sT35_146 = sT61_14;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT33_138)
     {
      sT34_141 = (RLD_BAR == 1);
      Y_temp = D;
      if (sT34_141)
       {
        RE = (RE - 1);
        uPC = Y_temp;
       } /* sT34_141       */
      else
       {
        uPC = Y_temp;
       }  /* end of if-else (sT34_141)*/
     } /* sT33_138     */
    else
     {
      Y_temp = uPC;
      uPC = Y_temp;
     }  /* end of if-else (sT33_138)*/
    if (sT61_14)
     {
      RE = D;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT32_136)*/
  if (sT36_153)
   {
    if (sT62_24)
     {
      sT38_158 = (SP <= 0);
      sT37_155 = sT62_24;
      Y_temp = STACK_SP;
      if (sT38_158)
       {
        SP = (SP - 1);
        uPC = Y_temp;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       } /* sT38_158       */
      else
       {
        Y_temp = uPC;
        uPC = uPC;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       }  /* end of if-else (sT38_158)*/
     } /* sT62_24     */
    else
     {
      sT37_155 = sT62_24;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_24)*/
    if (sT61_14)
     {
      sT39_163 = sT61_14;
      RE = D;
     } /* sT61_14     */
    else
     {
      sT39_163 = sT61_14;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT36_153)*/
  if (sT40_171)
   {
    if (sT62_24)
     {
      sT42_176 = (SP != 0);
      sT41_173 = sT62_24;
      Y_temp = D;
      if (sT42_176)
       {
        SP = (SP - 1);
        uPC = Y_temp;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       } /* sT42_176       */
      else
       {
        uPC = Y_temp;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       }  /* end of if-else (sT42_176)*/
     } /* sT62_24     */
    else
     {
      sT41_173 = sT62_24;
      Y_temp = uPC;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_24)*/
    if (sT61_14)
     {
      sT43_181 = sT61_14;
      RE = D;
     } /* sT61_14     */
    else
     {
      sT43_181 = sT61_14;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT40_171)*/
  if (sT44_188)
   {
    Y_temp = uPC;
    RE = D;
    uPC = Y_temp;
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    sT59_257 = sT72_257;
   } /* sT44_188   */
  else
   {
    sT59_257 = sT72_257;
   }  /* end of if-else (sT44_188)*/
  if (sT45_197)
   {
    if (sT62_24)
     {
      sT47_201 = (SP != 0);
      sT46_199 = sT62_24;
      Y_temp = uPC;
      if (sT47_201)
       {
        SP = (SP - 1);
        uPC = Y_temp;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       } /* sT47_201       */
      else
       {
        Y_temp = STACK_SP;
        uPC = STACK_SP;
        MAP_BAR = 1;
        VECT_BAR = 1;
        PL_BAR = 0;
       }  /* end of if-else (sT47_201)*/
     } /* sT62_24     */
    else
     {
      sT46_199 = sT62_24;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT62_24)*/
    if (sT61_14)
     {
      sT48_206 = sT61_14;
      RE = D;
     } /* sT61_14     */
    else
     {
      sT48_206 = sT61_14;
     }  /* end of if-else (sT61_14)*/
   }  /* end of if-else (sT45_197)*/
  if (sT49_213)
   {
    if (sT69_216)
     {
      Y_temp = uPC;
      RLD_BAR = 0;
      sT50_216 = sT69_216;
      RE = D;
      uPC = uPC;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     } /* sT69_216     */
    else
     {
      Y_temp = uPC;
      RLD_BAR = 0;
      sT50_216 = sT69_216;
      uPC = Y_temp;
      MAP_BAR = 1;
      VECT_BAR = 1;
      PL_BAR = 0;
     }  /* end of if-else (sT69_216)*/
   }  /* end of if-else (sT49_213)*/
  if (sT49_213)
   {
    sT52_225 = (RE == 0);
    sT58_248 = (RLD_BAR == 0);
    MAP_BAR = 1;
    VECT_BAR = 1;
    PL_BAR = 0;
    if (sT52_225)
     {
      sT53_227 = (FAIL == 1);
      sT54_231 = (SP != 0);
      if (sT53_227)
       {
        Y_temp = D;
        sT78_232 = (SP - 1);
       } /* sT53_227       */
      else
       {
        sT78_232 = (SP - 1);
        Y_temp = uPC;
       }  /* end of if-else (sT53_227)*/
      if (sT54_231)
       {
        SP = sT78_232;
        uPC = Y_temp;
       } /* sT54_231       */
      else
       {
        uPC = Y_temp;
       }  /* end of if-else (sT54_231)*/
     } /* sT52_225     */
    else
     {
      sT55_236 = (FAIL == 0);
      sT56_239 = (SP != 0);
      if (sT55_236)
       {
        Y_temp = uPC;
        sT79_240 = (SP - 1);
        sT80_244 = (RE - 1);
        sT57_243 = (RLD_BAR == 1);
       } /* sT55_236       */
      else
       {
        sT79_240 = (SP - 1);
        sT80_244 = (RE - 1);
        sT57_243 = (RLD_BAR == 1);
       }  /* end of if-else (sT55_236)*/
      if (sT56_239)
       {
        SP = sT79_240;
        uPC = Y_temp;
       } /* sT56_239       */
      else
       {
        Y_temp = STACK_SP;
        uPC = Y_temp;
       }  /* end of if-else (sT56_239)*/
      if (sT57_243)
       {
        RE = sT80_244;
       }  /* end of if-else (sT57_243)*/
     }  /* end of if-else (sT52_225)*/
    if (sT58_248)
     {
      RE = D;
     }  /* end of if-else (sT58_248)*/
   }  /* end of if-else (sT49_213)*/
  if (sT72_257)
   {
    Y = Y_temp;
   } /* sT72_257   */
  else
   {
    Y = (-1);
   }  /* end of if-else (sT72_257)*/
  return   0;

}

