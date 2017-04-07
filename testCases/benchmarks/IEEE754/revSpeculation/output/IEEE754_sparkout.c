
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
 int sT75_121;
 long sT76_144;
 unsigned short sT77_144;
 int sT78_150;
 unsigned sT79_163;
 short sT80_178;
 unsigned short sT81_212;
 unsigned sT82_220;

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
  if (sT3_47)
   {
    mantissa1 = (number1 % 8388608U);
    sign2 = ((unsigned short)1U);
    mantissa1 = (mantissa1 + 8388608U);
   } /* sT3_47   */
  else
   {
    mantissa1 = (number1 % 8388608U);
    sign2 = ((unsigned short)0U);
    mantissa1 = (mantissa1 + 8388608U);
   }  /* end of if-else (sT3_47)*/
  if (sT8_60)
   {
    sT74_65 = (sT2_38 - sT5_53);
    sT10_65 = sT74_65;
    sT15_90 = (sign1 == 1);
    sT16_94 = (sign2 == 1);
    mantissa2 = (number2 % 8388608U);
    sT9_65 = sT5_53;
    diff = sT74_65;
    sign = ((unsigned short)0U);
    mantissa2 = (mantissa2 + 8388608U);
    sT11_66 = (sT10_65 > 0);
    sT17_100 = (option == 1);
    if (sT11_66)
     {
      do
       {
        sT12_69 = (diff > 0);
        if (sT12_69)
         {
          diff = (diff - 1);
          mantissa2 = (mantissa2 / 2U);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

      exponent = sT2_38;
     } /* sT11_66     */
    else
     {
      sT13_77 = (sT10_65 < 0);
      if (sT13_77)
       {
        do
         {
          sT14_79 = (diff < 0);
          if (sT14_79)
           {
            diff = (diff + 1);
            mantissa1 = (mantissa1 / 2U);
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

        exponent = sT5_53;
       } /* sT13_77       */
      else
       {
        exponent = sT2_38;
       }  /* end of if-else (sT13_77)*/
     }  /* end of if-else (sT11_66)*/
    if (sT15_90)
     {
      mantissa1 = (-mantissa1);
     }  /* end of if-else (sT15_90)*/
    if (sT16_94)
     {
      mantissa2 = (-mantissa2);
     }  /* end of if-else (sT16_94)*/
    if (sT17_100)
     {
      mantissa = (mantissa1 + mantissa2);
     } /* sT17_100     */
    else
     {
      mantissa = (mantissa1 - mantissa2);
     }  /* end of if-else (sT17_100)*/
    sT18_111 = (mantissa < 0U);
    if (sT18_111)
     {
      mantissa = (-mantissa);
      sign = ((unsigned short)1U);
     }  /* end of if-else (sT18_111)*/
    sT19_119 = (mantissa / 8388608U);
    sT20_119 = (sT19_119 % 4U);
    sT21_119 = (sT20_119 == 0U);
    if (sT21_119)
     {
      do
       {
        sT25_121 = (exponent != 0);
        sT22_121 = (mantissa / 8388608U);
        sT23_121 = (sT22_121 % 4U);
        sT75_121 = (sT23_121 != 1U);
        sT24_121 = sT75_121;
        sT26_121 = ((sT25_121) && (sT75_121));
        if (sT26_121)
         {
          exponent = (exponent - 1);
          mantissa = (mantissa * 2U);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT21_119)*/
    sT27_127 = (mantissa / 8388608U);
    sT28_127 = (sT27_127 % 4U);
    sT29_127 = (sT28_127 == 3U);
    if (sT29_127)
     {
      exponent = (exponent + 1);
      mantissa = (mantissa / 2U);
     }  /* end of if-else (sT29_127)*/
   } /* sT8_60   */
  else
   {
    mantissa2 = (number2 % 8388608U);
    mantissa2 = (mantissa2 + 8388608U);
   }  /* end of if-else (sT8_60)*/
  sT30_137 = (option == 3);
  sT50_170 = (option == 4);
  if (sT30_137)
   {
    sT34_144 = (sT2_38 + sT5_53);
    sT76_144 = (mantissa1 * mantissa2);
    sT36_144 = sT76_144;
    sT32_139 = (sign1 == sign2);
    sT31_139 = sign2;
    sT33_144 = sT5_53;
    mantissa_mult = sT76_144;
    if (sT32_139)
     {
      sign = ((unsigned short)0U);
     } /* sT32_139     */
    else
     {
      sign = ((unsigned short)1U);
     }  /* end of if-else (sT32_139)*/
    sT77_144 = (sT34_144 - 127);
    sT35_144 = sT77_144;
    sT37_148 = (sT36_144 / 703687446L);
    exponent = sT77_144;
    sT38_148 = (sT37_148 % 4L);
    sT39_148 = (sT38_148 == 0L);
    if (sT39_148)
     {
      do
       {
        sT43_150 = (exponent != 0);
        sT40_150 = (mantissa_mult / 703687446L);
        sT41_150 = (sT40_150 % 4L);
        sT78_150 = (sT41_150 != 1L);
        sT42_150 = sT78_150;
        sT44_150 = ((sT43_150) && (sT78_150));
        if (sT44_150)
         {
          exponent = (exponent - 1);
          mantissa_mult = (mantissa_mult * 2L);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT39_148)*/
    sT45_156 = (mantissa_mult / 703687446L);
    sT46_156 = (sT45_156 % 4L);
    sT47_156 = (sT46_156 == 3L);
    if (sT47_156)
     {
      exponent = (exponent + 1);
      mantissa_mult = (mantissa_mult / 2L);
     }  /* end of if-else (sT47_156)*/
    sT48_163 = (mantissa_mult / 8388608L);
    sT79_163 = (sT48_163 % 8388608L);
    sT49_163 = sT79_163;
    mantissa = sT79_163;
   }  /* end of if-else (sT30_137)*/
  if (sT50_170)
   {
    sT80_178 = (sT2_38 - sT5_53);
    sT54_178 = sT80_178;
    sT52_172 = (sign1 == sign2);
    sT51_172 = sign2;
    sT53_178 = sT5_53;
    diff = sT80_178;
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
    sT55_179 = (sT54_178 > 0);
    if (sT55_179)
     {
      do
       {
        sT56_182 = (diff > 0);
        if (sT56_182)
         {
          diff = (diff - 1);
          mantissa2 = (mantissa2 / 2U);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     } /* sT55_179     */
    else
     {
      sT57_190 = (sT54_178 < 0);
      if (sT57_190)
       {
        do
         {
          sT58_192 = (diff < 0);
          if (sT58_192)
           {
            diff = (diff + 1);
            mantissa1 = (mantissa1 / 2U);
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

       }  /* end of if-else (sT57_190)*/
     }  /* end of if-else (sT55_179)*/
    mantissa = (mantissa1 / mantissa2);
    do
     {
      sT59_205 = (mantissa != 1U);
      if (sT59_205)
       {
        exponent = (exponent + 1);
        sT61_206 = (mantissa % 2U);
        sT60_206 = (actualMantissa / 2U);
        1;
        sT62_206 = (sT61_206 * 2147483U);
        mantissa = (mantissa / 2U);
        actualMantissa = (sT62_206 + sT60_206);
       }        /* end of loop condition */
      else
        break;
     } while (1);

    sT81_212 = (exponent + 127);
    sT64_212 = sT81_212;
    sT63_212 = (actualMantissa / 512U);
    exponent = sT81_212;
    mantissa = (8388608U + sT63_212);
   }  /* end of if-else (sT50_170)*/
  sT82_220 = (exponent * 8388608);
  sT66_220 = sT82_220;
  sT68_220 = (sign * 2147483U);
  sT67_220 = sT82_220;
  sT69_220 = (sT68_220 + sT66_220);
  sT65_220 = (mantissa % 8388608U);
  result = (sT69_220 + sT65_220);
  return   0;

}

