
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
 unsigned sT77_38;
 unsigned sT78_38;
 unsigned sT79_38;
 unsigned sT80_38;
 unsigned sT81_53;
 int sT82_66;
 int sT83_77;
 unsigned sT84_38;
 short sT85_71;
 unsigned sT86_71;
 short sT87_81;
 unsigned sT88_81;
 unsigned sT89_96;
 unsigned sT90_102;
 unsigned sT91_106;
 unsigned sT92_113;
 unsigned short sT93_123;
 unsigned sT94_123;
 int sT95_121;
 unsigned short sT96_129;
 unsigned sT97_129;
 int sT98_144;
 long sT99_144;
 int sT100_179;
 unsigned short sT101_144;
 unsigned short sT102_152;
 long sT103_152;
 int sT104_150;
 unsigned short sT105_158;
 long sT106_158;
 unsigned sT107_163;
 int sT108_190;
 int sT109_172;
 short sT110_184;
 unsigned sT111_184;
 short sT112_194;
 unsigned sT113_194;
 unsigned short sT114_206;
 unsigned sT115_206;
 unsigned sT116_206;
 unsigned sT117_206;
 unsigned short sT118_212;
 unsigned sT119_220;

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
    sT74_65 = (sT2_38 - sT5_53);
    sT75_178 = (sT2_38 - sT5_53);
    sT76_90 = ((unsigned short)1U);
    sT30_137 = (option == 3);
    sT77_38 = (number1 % 8388608U);
    mantissa2 = (number2 % 8388608U);
   } /* sT0_32   */
  else
   {
    sT74_65 = (sT2_38 - sT5_53);
    sT75_178 = (sT2_38 - sT5_53);
    sT76_90 = ((unsigned short)0U);
    sT30_137 = (option == 3);
    sT77_38 = (number1 % 8388608U);
    mantissa2 = (number2 % 8388608U);
    sign1 = ((unsigned short)0U);
   }  /* end of if-else (sT0_32)*/
  if (sT3_47)
   {
    sT79_38 = (sT77_38 + 8388608U);
    sT78_38 = sT79_38;
    mantissa1 = sT77_38;
    mantissa1 = sT79_38;
    sign2 = ((unsigned short)1U);
    sT81_53 = (mantissa2 + 8388608U);
    sT82_66 = (sT74_65 > 0);
    sT83_77 = (sT74_65 < 0);
   } /* sT3_47   */
  else
   {
    sT84_38 = (sT77_38 + 8388608U);
    sT80_38 = sT84_38;
    sT81_53 = (mantissa2 + 8388608U);
    sT82_66 = (sT74_65 > 0);
    sT83_77 = (sT74_65 < 0);
    mantissa1 = sT77_38;
    mantissa1 = sT84_38;
    sign2 = ((unsigned short)0U);
   }  /* end of if-else (sT3_47)*/
  if (sT8_60)
   {
    if (sT82_66)
     {
      mantissa2 = sT81_53;
      sT9_65 = sT5_53;
      sT10_65 = sT74_65;
      diff = sT74_65;
      sT11_66 = sT82_66;
      do
       {
        sT85_71 = (diff - 1);
        sT12_69 = (diff > 0);
        sT86_71 = (mantissa2 / 2U);
        if (sT12_69)
         {
          mantissa2 = sT86_71;
          diff = sT85_71;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

      exponent = sT2_38;
     } /* sT82_66     */
    else
     {
      if (sT83_77)
       {
        mantissa2 = sT81_53;
        sT9_65 = sT5_53;
        sT10_65 = sT74_65;
        diff = sT74_65;
        sT11_66 = sT82_66;
        sT13_77 = sT83_77;
        do
         {
          sT87_81 = (diff + 1);
          sT14_79 = (diff < 0);
          sT88_81 = (mantissa1 / 2U);
          if (sT14_79)
           {
            mantissa1 = sT88_81;
            diff = sT87_81;
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

        exponent = sT5_53;
       } /* sT83_77       */
      else
       {
        mantissa2 = sT81_53;
        sT9_65 = sT5_53;
        sT10_65 = sT74_65;
        diff = sT74_65;
        sT11_66 = sT82_66;
        sT13_77 = sT83_77;
        exponent = sT2_38;
       }  /* end of if-else (sT83_77)*/
     }  /* end of if-else (sT82_66)*/
    if (sT76_90)
     {
      mantissa1 = (-mantissa1);
      sT15_90 = sT76_90;
      sT89_96 = (-mantissa2);
      sT16_94 = (sign2 == 1);
      sT17_100 = sT7_60;
      sign = ((unsigned short)0U);
     } /* sT76_90     */
    else
     {
      sT89_96 = (-mantissa2);
      sT16_94 = (sign2 == 1);
      sT15_90 = sT76_90;
      sT17_100 = sT7_60;
      sign = ((unsigned short)0U);
     }  /* end of if-else (sT76_90)*/
    if (sT16_94)
     {
      mantissa2 = sT89_96;
      sT90_102 = (mantissa1 + sT89_96);
      sT91_106 = (mantissa1 - sT89_96);
     } /* sT16_94     */
    else
     {
      sT90_102 = (mantissa1 + mantissa2);
      sT91_106 = (mantissa1 - mantissa2);
     }  /* end of if-else (sT16_94)*/
    if (sT7_60)
     {
      mantissa = sT90_102;
      sT92_113 = (-sT90_102);
      sT18_111 = (sT90_102 < 0U);
     } /* sT7_60     */
    else
     {
      sT92_113 = (-sT91_106);
      sT18_111 = (sT91_106 < 0U);
      mantissa = sT91_106;
     }  /* end of if-else (sT7_60)*/
    if (sT18_111)
     {
      sign = ((unsigned short)1U);
      mantissa = sT92_113;
      sT19_119 = (sT92_113 / 8388608U);
     } /* sT18_111     */
    else
     {
      sT19_119 = (mantissa / 8388608U);
     }  /* end of if-else (sT18_111)*/
    sT20_119 = (sT19_119 % 4U);
    sT21_119 = (sT20_119 == 0U);
    if (sT21_119)
     {
      do
       {
        sT93_123 = (exponent - 1);
        sT25_121 = (exponent != 0);
        sT22_121 = (mantissa / 8388608U);
        sT94_123 = (mantissa * 2U);
        sT23_121 = (sT22_121 % 4U);
        sT95_121 = (sT23_121 != 1U);
        sT24_121 = sT95_121;
        sT26_121 = ((sT25_121) && (sT95_121));
        if (sT26_121)
         {
          mantissa = sT94_123;
          exponent = sT93_123;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT21_119)*/
    sT96_129 = (exponent + 1);
    sT27_127 = (mantissa / 8388608U);
    sT97_129 = (mantissa / 2U);
    sT28_127 = (sT27_127 % 4U);
    sT29_127 = (sT28_127 == 3U);
    if (sT29_127)
     {
      mantissa = sT97_129;
      exponent = sT96_129;
      sT98_144 = (sT2_38 + sT5_53);
      sT99_144 = (mantissa1 * mantissa2);
      sT50_170 = (option == 4);
      sT100_179 = (sT75_178 > 0);
     } /* sT29_127     */
    else
     {
      sT98_144 = (sT2_38 + sT5_53);
      sT99_144 = (mantissa1 * mantissa2);
      sT50_170 = (option == 4);
      sT100_179 = (sT75_178 > 0);
     }  /* end of if-else (sT29_127)*/
   } /* sT8_60   */
  else
   {
    sT98_144 = (sT2_38 + sT5_53);
    sT99_144 = (mantissa1 * sT81_53);
    sT50_170 = (option == 4);
    sT100_179 = (sT75_178 > 0);
    mantissa2 = sT81_53;
   }  /* end of if-else (sT8_60)*/
  if (sT30_137)
   {
    sT101_144 = (sT98_144 - 127);
    sT35_144 = sT101_144;
    sT32_139 = (sign1 == sign2);
    sT31_139 = sign2;
    sT33_144 = sT5_53;
    sT34_144 = sT98_144;
    exponent = sT101_144;
    if (sT32_139)
     {
      sign = ((unsigned short)0U);
      sT37_148 = (sT99_144 / 703687446L);
      sT36_144 = sT99_144;
      mantissa_mult = sT99_144;
     } /* sT32_139     */
    else
     {
      sT37_148 = (sT99_144 / 703687446L);
      sign = ((unsigned short)1U);
      sT36_144 = sT99_144;
      mantissa_mult = sT99_144;
     }  /* end of if-else (sT32_139)*/
    sT38_148 = (sT37_148 % 4L);
    sT39_148 = (sT38_148 == 0L);
    if (sT39_148)
     {
      do
       {
        sT102_152 = (exponent - 1);
        sT43_150 = (exponent != 0);
        sT40_150 = (mantissa_mult / 703687446L);
        sT103_152 = (mantissa_mult * 2L);
        sT41_150 = (sT40_150 % 4L);
        sT104_150 = (sT41_150 != 1L);
        sT42_150 = sT104_150;
        sT44_150 = ((sT43_150) && (sT104_150));
        if (sT44_150)
         {
          mantissa_mult = sT103_152;
          exponent = sT102_152;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT39_148)*/
    sT105_158 = (exponent + 1);
    sT45_156 = (mantissa_mult / 703687446L);
    sT106_158 = (mantissa_mult / 2L);
    sT46_156 = (sT45_156 % 4L);
    sT47_156 = (sT46_156 == 3L);
    if (sT47_156)
     {
      mantissa_mult = sT106_158;
      exponent = sT105_158;
      sT48_163 = (sT106_158 / 8388608L);
      sT108_190 = (sT75_178 < 0);
      sT109_172 = (sign1 == sign2);
     } /* sT47_156     */
    else
     {
      sT48_163 = (mantissa_mult / 8388608L);
      sT108_190 = (sT75_178 < 0);
      sT109_172 = (sign1 == sign2);
     }  /* end of if-else (sT47_156)*/
    sT107_163 = (sT48_163 % 8388608L);
    sT49_163 = sT107_163;
    mantissa = sT107_163;
   } /* sT30_137   */
  else
   {
    sT108_190 = (sT75_178 < 0);
    sT109_172 = (sign1 == sign2);
   }  /* end of if-else (sT30_137)*/
  if (sT50_170)
   {
    if (sT109_172)
     {
      sT51_172 = sign2;
      sT52_172 = sT109_172;
      sign = ((unsigned short)0U);
      exponent = ((unsigned short)0U);
      actualMantissa = 0U;
     } /* sT109_172     */
    else
     {
      sT51_172 = sign2;
      sT52_172 = sT109_172;
      sign = ((unsigned short)1U);
      exponent = ((unsigned short)0U);
      actualMantissa = 0U;
     }  /* end of if-else (sT109_172)*/
    if (sT100_179)
     {
      sT53_178 = sT5_53;
      sT54_178 = sT75_178;
      diff = sT75_178;
      sT55_179 = sT100_179;
      do
       {
        sT110_184 = (diff - 1);
        sT56_182 = (diff > 0);
        sT111_184 = (mantissa2 / 2U);
        if (sT56_182)
         {
          mantissa2 = sT111_184;
          diff = sT110_184;
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     } /* sT100_179     */
    else
     {
      if (sT108_190)
       {
        sT53_178 = sT5_53;
        sT54_178 = sT75_178;
        diff = sT75_178;
        sT55_179 = sT100_179;
        sT57_190 = sT108_190;
        do
         {
          sT112_194 = (diff + 1);
          sT58_192 = (diff < 0);
          sT113_194 = (mantissa1 / 2U);
          if (sT58_192)
           {
            mantissa1 = sT113_194;
            diff = sT112_194;
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

       } /* sT108_190       */
      else
       {
        sT53_178 = sT5_53;
        sT54_178 = sT75_178;
        diff = sT75_178;
        sT55_179 = sT100_179;
        sT57_190 = sT108_190;
       }  /* end of if-else (sT108_190)*/
     }  /* end of if-else (sT100_179)*/
    mantissa = (mantissa1 / mantissa2);
    do
     {
      sT114_206 = (exponent + 1);
      sT115_206 = (actualMantissa / 2U);
      sT59_205 = (mantissa != 1U);
      sT116_206 = (mantissa % 2U);
      sT117_206 = (mantissa / 2U);
      if (sT59_205)
       {
        sT62_206 = (sT116_206 * 2147483U);
        sT60_206 = sT115_206;
        sT61_206 = sT116_206;
        mantissa = sT117_206;
        exponent = sT114_206;
        1;
        actualMantissa = (sT62_206 + sT115_206);
       }        /* end of loop condition */
      else
        break;
     } while (1);

    sT118_212 = (exponent + 127);
    sT64_212 = sT118_212;
    sT63_212 = (actualMantissa / 512U);
    exponent = sT118_212;
    mantissa = (8388608U + sT63_212);
   }  /* end of if-else (sT50_170)*/
  sT119_220 = (exponent * 8388608);
  sT66_220 = sT119_220;
  sT68_220 = (sign * 2147483U);
  sT67_220 = sT119_220;
  sT69_220 = (sT68_220 + sT66_220);
  sT65_220 = (mantissa % 8388608U);
  result = (sT69_220 + sT65_220);
  return   0;

}

