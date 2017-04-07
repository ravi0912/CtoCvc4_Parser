
extern int main(void);
extern void _main();

int main(void)
{
 unsigned number1;
 unsigned number2;
 unsigned result;
 unsigned short sign1;
 unsigned short sign;
 unsigned short sign2;
 unsigned short exponent1;
 unsigned short exponent2;
 unsigned short exponent;
 unsigned mantissa1;
 unsigned mantissa2;
 unsigned mantissa;
 unsigned actualMantissa;
 long mantissa_mult;
 short option;
 short diff;
 int sT0_32;
 unsigned sT1_38;
 unsigned short sT2_38;
 int sT3_47;
 unsigned sT4_53;
 unsigned short sT5_53;
 int sT6_60;
 int sT7_60;
 int sT8_60;
 int sT9_65;
 short sT10_65;
 int sT11_66;
 int sT12_69;
 int sT13_77;
 int sT14_79;
 int sT15_90;
 int sT16_94;
 int sT17_100;
 int sT18_111;
 unsigned sT19_119;
 int sT20_119;
 int sT21_119;
 unsigned sT22_121;
 int sT23_121;
 int sT24_121;
 int sT25_121;
 int sT26_121;
 unsigned sT27_127;
 int sT28_127;
 int sT29_127;
 int sT30_137;
 int sT31_139;
 int sT32_139;
 int sT33_144;
 int sT34_144;
 unsigned short sT35_144;
 long sT36_144;
 long sT37_148;
 int sT38_148;
 int sT39_148;
 long sT40_150;
 int sT41_150;
 int sT42_150;
 int sT43_150;
 int sT44_150;
 long sT45_156;
 int sT46_156;
 int sT47_156;
 long sT48_163;
 unsigned sT49_163;
 int sT50_170;
 int sT51_172;
 int sT52_172;
 int sT53_178;
 short sT54_178;
 int sT55_179;
 int sT56_182;
 int sT57_190;
 int sT58_192;
 int sT59_205;
 unsigned sT60_206;
 unsigned sT61_206;
 unsigned sT62_206;
 unsigned sT63_212;
 unsigned short sT64_212;
 unsigned sT65_220;
 unsigned sT66_220;
 unsigned sT67_220;
 unsigned sT68_220;
 unsigned sT69_220;
 int sT70_60;
 int sT71_60;
 unsigned short sT72_38;
 unsigned short sT73_53;
 short sT74_65;
 short sT75_178;
 int sT76_90;
 int sT77_66;
 int sT78_77;
 short sT79_71;
 unsigned sT80_71;
 short sT81_81;
 unsigned sT82_81;
 unsigned sT83_113;
 unsigned short sT84_123;
 unsigned sT85_123;
 int sT86_121;
 unsigned short sT87_129;
 unsigned sT88_129;
 long sT89_144;
 unsigned short sT90_144;
 unsigned short sT91_152;
 long sT92_152;
 int sT93_150;
 unsigned short sT94_158;
 long sT95_158;
 unsigned sT96_163;
 int sT97_179;
 int sT98_190;
 short sT99_184;
 unsigned sT100_184;
 short sT101_194;
 unsigned sT102_194;
 unsigned short sT103_206;
 unsigned sT104_206;
 unsigned sT105_206;
 unsigned sT106_206;
 unsigned short sT107_212;
 unsigned sT108_220;

 int returnVar_main;
  sT70_60 = (option == 2);
  sT6_60 = sT70_60;
  sT71_60 = (option == 1);
  sT7_60 = sT71_60;
  sT1_38 = (number1 * 2U);
  sT4_53 = (number2 * 2U);
  sT8_60 = ((sT71_60) || (sT70_60));
  returnVar_main = 0;
  sT0_32 = (number1 < 0U);
  sT3_47 = (number2 < 0U);
  sT72_38 = (sT1_38 / 16777216U);
  sT2_38 = sT72_38;
  sT73_53 = (sT4_53 / 16777216U);
  sT5_53 = sT73_53;
  exponent1 = sT72_38;
  exponent2 = sT73_53;
  if (sT0_32)
   {
    sign1 = ((unsigned short)1U);
   } /* sT0_32   */
  else
   {
    sign1 = ((unsigned short)0U);
   }  /* end of if-else (sT0_32)*/
  sT74_65 = (sT2_38 - sT5_53);
  sT75_178 = (sT2_38 - sT5_53);
  sT76_90 = (sign1 == 1);
  sT30_137 = (option == 3);
  mantissa1 = (number1 % 8388608U);
  mantissa2 = (number2 % 8388608U);
  mantissa1 = (mantissa1 + 8388608U);
  mantissa2 = (mantissa2 + 8388608U);
  sT77_66 = (sT74_65 > 0);
  sT78_77 = (sT74_65 < 0);
  if (sT3_47)
   {
    sign2 = ((unsigned short)1U);
   } /* sT3_47   */
  else
   {
    sign2 = ((unsigned short)0U);
   }  /* end of if-else (sT3_47)*/
  if (sT8_60)
   {
    sT16_94 = (sign2 == 1);
    sT9_65 = sT5_53;
    sT10_65 = sT74_65;
    diff = sT74_65;
    sT11_66 = sT77_66;
    sT15_90 = sT76_90;
    sT17_100 = sT7_60;
    sign = ((unsigned short)0U);
    if (sT77_66)
     {
      do
       {
        sT79_71 = (diff - 1);
        sT12_69 = (diff > 0);
        sT80_71 = (mantissa2 / 2U);
        if (sT12_69)
         {
          mantissa2 = sT80_71;
          diff = sT79_71;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

      exponent = sT2_38;
     } /* sT77_66     */
    else
     {
      sT13_77 = sT78_77;
      if (sT78_77)
       {
        do
         {
          sT81_81 = (diff + 1);
          sT14_79 = (diff < 0);
          sT82_81 = (mantissa1 / 2U);
          if (sT14_79)
           {
            mantissa1 = sT82_81;
            diff = sT81_81;
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

        exponent = sT5_53;
       } /* sT78_77       */
      else
       {
        exponent = sT2_38;
       }  /* end of if-else (sT78_77)*/
     }  /* end of if-else (sT77_66)*/
    if (sT76_90)
     {
      mantissa1 = (-mantissa1);
     }  /* end of if-else (sT76_90)*/
    if (sT16_94)
     {
      mantissa2 = (-mantissa2);
     }  /* end of if-else (sT16_94)*/
    if (sT7_60)
     {
      mantissa = (mantissa1 + mantissa2);
     } /* sT7_60     */
    else
     {
      mantissa = (mantissa1 - mantissa2);
     }  /* end of if-else (sT7_60)*/
    sT83_113 = (-mantissa);
    sT18_111 = (mantissa < 0U);
    if (sT18_111)
     {
      sign = ((unsigned short)1U);
      mantissa = sT83_113;
     }  /* end of if-else (sT18_111)*/
    sT19_119 = (mantissa / 8388608U);
    sT20_119 = (sT19_119 % 4U);
    sT21_119 = (sT20_119 == 0U);
    if (sT21_119)
     {
      do
       {
        sT84_123 = (exponent - 1);
        sT25_121 = (exponent != 0);
        sT22_121 = (mantissa / 8388608U);
        sT85_123 = (mantissa * 2U);
        sT23_121 = (sT22_121 % 4U);
        sT86_121 = (sT23_121 != 1U);
        sT24_121 = sT86_121;
        sT26_121 = ((sT25_121) && (sT86_121));
        if (sT26_121)
         {
          mantissa = sT85_123;
          exponent = sT84_123;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT21_119)*/
    sT87_129 = (exponent + 1);
    sT27_127 = (mantissa / 8388608U);
    sT88_129 = (mantissa / 2U);
    sT28_127 = (sT27_127 % 4U);
    sT29_127 = (sT28_127 == 3U);
    if (sT29_127)
     {
      mantissa = sT88_129;
      exponent = sT87_129;
     }  /* end of if-else (sT29_127)*/
   }  /* end of if-else (sT8_60)*/
  if (sT30_137)
   {
    sT34_144 = (sT2_38 + sT5_53);
    sT89_144 = (mantissa1 * mantissa2);
    sT36_144 = sT89_144;
    sT32_139 = (sign1 == sign2);
    sT31_139 = sign2;
    sT33_144 = sT5_53;
    mantissa_mult = sT89_144;
    if (sT32_139)
     {
      sign = ((unsigned short)0U);
     } /* sT32_139     */
    else
     {
      sign = ((unsigned short)1U);
     }  /* end of if-else (sT32_139)*/
    sT90_144 = (sT34_144 - 127);
    sT35_144 = sT90_144;
    sT37_148 = (sT36_144 / 703687446L);
    exponent = sT90_144;
    sT38_148 = (sT37_148 % 4L);
    sT39_148 = (sT38_148 == 0L);
    if (sT39_148)
     {
      do
       {
        sT91_152 = (exponent - 1);
        sT43_150 = (exponent != 0);
        sT40_150 = (mantissa_mult / 703687446L);
        sT92_152 = (mantissa_mult * 2L);
        sT41_150 = (sT40_150 % 4L);
        sT93_150 = (sT41_150 != 1L);
        sT42_150 = sT93_150;
        sT44_150 = ((sT43_150) && (sT93_150));
        if (sT44_150)
         {
          mantissa_mult = sT92_152;
          exponent = sT91_152;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT39_148)*/
    sT94_158 = (exponent + 1);
    sT45_156 = (mantissa_mult / 703687446L);
    sT95_158 = (mantissa_mult / 2L);
    sT46_156 = (sT45_156 % 4L);
    sT47_156 = (sT46_156 == 3L);
    if (sT47_156)
     {
      mantissa_mult = sT95_158;
      exponent = sT94_158;
     }  /* end of if-else (sT47_156)*/
    sT48_163 = (mantissa_mult / 8388608L);
    sT96_163 = (sT48_163 % 8388608L);
    sT49_163 = sT96_163;
    mantissa = sT96_163;
   }  /* end of if-else (sT30_137)*/
  sT50_170 = (option == 4);
  sT97_179 = (sT75_178 > 0);
  if (sT50_170)
   {
    sT98_190 = (sT75_178 < 0);
    sT52_172 = (sign1 == sign2);
    sT51_172 = sign2;
    sT53_178 = sT5_53;
    sT54_178 = sT75_178;
    diff = sT75_178;
    sT55_179 = sT97_179;
    exponent = ((unsigned short)0U);
    actualMantissa = 0U;
    if (sT52_172)
     {
      sign = ((unsigned short)0U);
     } /* sT52_172     */
    else
     {
      sign = ((unsigned short)1U);
     }  /* end of if-else (sT52_172)*/
    if (sT97_179)
     {
      do
       {
        sT99_184 = (diff - 1);
        sT56_182 = (diff > 0);
        sT100_184 = (mantissa2 / 2U);
        if (sT56_182)
         {
          mantissa2 = sT100_184;
          diff = sT99_184;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     } /* sT97_179     */
    else
     {
      sT57_190 = sT98_190;
      if (sT98_190)
       {
        do
         {
          sT101_194 = (diff + 1);
          sT58_192 = (diff < 0);
          sT102_194 = (mantissa1 / 2U);
          if (sT58_192)
           {
            mantissa1 = sT102_194;
            diff = sT101_194;
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

       }  /* end of if-else (sT98_190)*/
     }  /* end of if-else (sT97_179)*/
    mantissa = (mantissa1 / mantissa2);
    do
     {
      sT103_206 = (exponent + 1);
      sT104_206 = (actualMantissa / 2U);
      sT59_205 = (mantissa != 1U);
      sT105_206 = (mantissa % 2U);
      sT106_206 = (mantissa / 2U);
      if (sT59_205)
       {
        sT62_206 = (sT105_206 * 2147483U);
        sT60_206 = sT104_206;
        sT61_206 = sT105_206;
        mantissa = sT106_206;
        exponent = sT103_206;
        1;
        actualMantissa = (sT62_206 + sT104_206);
       }        /* end of loop condition */
      else
        break;
     } while (1);

    sT107_212 = (exponent + 127);
    sT64_212 = sT107_212;
    sT63_212 = (actualMantissa / 512U);
    exponent = sT107_212;
    mantissa = (8388608U + sT63_212);
   }  /* end of if-else (sT50_170)*/
  sT108_220 = (exponent * 8388608);
  sT66_220 = sT108_220;
  sT68_220 = (sign * 2147483U);
  sT67_220 = sT108_220;
  sT69_220 = (sT68_220 + sT66_220);
  sT65_220 = (mantissa % 8388608U);
  result = (sT69_220 + sT65_220);
  return   0;

}

