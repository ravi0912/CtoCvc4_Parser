
extern int main(void);
extern void _main();

int main(void)
{
 unsigned short sign1;
 unsigned short sign2;
 unsigned short sign;
 unsigned short exponent1;
 unsigned short exponent2;
 unsigned short exponent;
 unsigned input1;
 unsigned input2;
 unsigned result;
 unsigned mantissa1;
 unsigned mantissa2;
 unsigned mantissa;
 unsigned actualMantissa;
 unsigned TWO_RAISED_23;
 unsigned TWO_RAISED_24;
 unsigned TWO_RAISED_31;
 long mantissa_mult;
 long TWO_RAISED_46;
 short option;
 short diff;
 short value;
 int sT0_44;
 unsigned sT1_50;
 unsigned short sT2_50;
 int sT3_72;
 unsigned sT4_80;
 unsigned short sT5_80;
 int sT6_100;
 int sT7_100;
 int sT8_100;
 int sT9_105;
 short sT10_105;
 int sT11_106;
 int sT12_109;
 int sT13_117;
 int sT14_119;
 int sT15_139;
 int sT16_143;
 int sT17_149;
 int sT18_160;
 unsigned sT19_193;
 short sT20_193;
 int sT21_195;
 unsigned sT22_197;
 int sT23_197;
 int sT24_197;
 int sT25_197;
 int sT26_197;
 int sT27_206;
 int sT28_206;
 int sT29_206;
 int sT30_221;
 int sT31_223;
 int sT32_223;
 int sT33_228;
 int sT34_228;
 unsigned short sT35_228;
 long sT36_228;
 long sT37_228;
 short sT38_228;
 int sT39_256;
 long sT40_258;
 int sT41_258;
 int sT42_258;
 int sT43_258;
 int sT44_258;
 int sT45_265;
 int sT46_265;
 int sT47_265;
 unsigned long sT48_272;
 unsigned long sT49_272;
 unsigned long sT50_272;
 unsigned sT51_272;
 int sT52_279;
 int sT53_281;
 int sT54_281;
 int sT55_297;
 short sT56_297;
 int sT57_298;
 int sT58_301;
 int sT59_309;
 int sT60_311;
 int sT61_330;
 unsigned sT62_331;
 unsigned sT63_331;
 unsigned sT64_331;
 unsigned sT65_342;
 unsigned short sT66_342;
 unsigned sT67_358;
 unsigned sT68_358;
 unsigned sT69_358;
 unsigned sT70_358;

 int returnVar_main;
  sT6_100 = (option == 2);
  sT7_100 = (option == 1);
  actualMantissa = 0U;
  sT0_44 = (input1 < 0);
  if (sT0_44)
   {
    sign1 = ((unsigned short)1U);
   } /* sT0_44   */
  else
   {
    sign1 = ((unsigned short)0U);
   }  /* end of if-else (sT0_44)*/
  mantissa1 = (input1 % TWO_RAISED_23);
  sT3_72 = (input2 < 0);
  sT1_50 = (input1 * 2U);
  if (sT3_72)
   {
    sign2 = ((unsigned short)1U);
    mantissa1 = (mantissa1 + TWO_RAISED_23);
    sT2_50 = (sT1_50 / TWO_RAISED_24);
    exponent1 = sT2_50;
   } /* sT3_72   */
  else
   {
    sign2 = ((unsigned short)0U);
    mantissa1 = (mantissa1 + TWO_RAISED_23);
    sT2_50 = (sT1_50 / TWO_RAISED_24);
    exponent1 = sT2_50;
   }  /* end of if-else (sT3_72)*/
  mantissa2 = (input2 % TWO_RAISED_23);
  sT4_80 = (input2 * 2U);
  sT8_100 = ((sT7_100) || (sT6_100));
  if (sT8_100)
   {
    mantissa2 = (mantissa2 + TWO_RAISED_23);
    sT5_80 = (sT4_80 / TWO_RAISED_24);
    exponent2 = sT5_80;
    sT9_105 = sT5_80;
    sT10_105 = (exponent1 - sT5_80);
    diff = sT10_105;
    sT11_106 = (sT10_105 > 0);
    if (sT11_106)
     {
      do
       {
        sT12_109 = (diff > 0);
        if (sT12_109)
         {
          diff = (diff - 1);
          mantissa2 = (mantissa2 / 2U);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

      exponent = exponent1;
     } /* sT11_106     */
    else
     {
      sT13_117 = (sT10_105 < 0);
      if (sT13_117)
       {
        do
         {
          sT14_119 = (diff < 0);
          if (sT14_119)
           {
            diff = (diff + 1);
            mantissa1 = (mantissa1 / 2U);
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

        exponent = sT5_80;
       } /* sT13_117       */
      else
       {
        exponent = exponent1;
       }  /* end of if-else (sT13_117)*/
     }  /* end of if-else (sT11_106)*/
    sT15_139 = (sign1 == 1);
    if (sT15_139)
     {
      mantissa1 = (-mantissa1);
     }  /* end of if-else (sT15_139)*/
    sT16_143 = (sign2 == 1);
    if (sT16_143)
     {
      mantissa2 = (-mantissa2);
     }  /* end of if-else (sT16_143)*/
    sT17_149 = (option == 1);
    if (sT17_149)
     {
      mantissa = (mantissa1 + mantissa2);
     } /* sT17_149     */
    else
     {
      mantissa = (mantissa1 - mantissa2);
     }  /* end of if-else (sT17_149)*/
    sT18_160 = (mantissa < 0);
    sign = ((unsigned short)0U);
    if (sT18_160)
     {
      mantissa = (-mantissa);
      sign = ((unsigned short)1U);
     }  /* end of if-else (sT18_160)*/
    sT19_193 = (mantissa / TWO_RAISED_23);
    sT20_193 = (sT19_193 % 4U);
    value = sT20_193;
    sT21_195 = (sT20_193 == 0);
    if (sT21_195)
     {
      do
       {
        sT22_197 = (mantissa / TWO_RAISED_23);
        sT25_197 = (exponent != 0);
        sT23_197 = (sT22_197 % 4U);
        sT24_197 = (sT23_197 != 1U);
        sT26_197 = ((sT25_197) && (sT24_197));
        if (sT26_197)
         {
          exponent = (exponent - 1);
          mantissa = (mantissa * 2U);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT21_195)*/
    sT27_206 = (sT20_193 == 3);
    sT28_206 = (sT20_193 == 2);
    sT29_206 = ((sT28_206) || (sT27_206));
    if (sT29_206)
     {
      exponent = (exponent + 1);
      mantissa = (mantissa / 2U);
     }  /* end of if-else (sT29_206)*/
   } /* sT8_100   */
  else
   {
    mantissa2 = (mantissa2 + TWO_RAISED_23);
    sT5_80 = (sT4_80 / TWO_RAISED_24);
    exponent2 = sT5_80;
   }  /* end of if-else (sT8_100)*/
  sT30_221 = (option == 3);
  if (sT30_221)
   {
    sT31_223 = sign2;
    sT32_223 = (sign1 == sign2);
    if (sT32_223)
     {
      sign = ((unsigned short)0U);
     } /* sT32_223     */
    else
     {
      sign = ((unsigned short)1U);
     }  /* end of if-else (sT32_223)*/
    sT33_228 = exponent2;
    sT36_228 = mantissa2;
    sT34_228 = (exponent1 + exponent2);
    mantissa_mult = (mantissa1 * mantissa2);
    sT35_228 = (sT34_228 - 127);
    sT37_228 = (mantissa_mult / TWO_RAISED_46);
    exponent = sT35_228;
    sT38_228 = (sT37_228 % 4L);
    value = sT38_228;
    sT39_256 = (sT38_228 == 0);
    if (sT39_256)
     {
      do
       {
        sT40_258 = (mantissa_mult / TWO_RAISED_46);
        sT43_258 = (exponent != 0);
        sT41_258 = (sT40_258 % 4L);
        sT42_258 = (sT41_258 != 1L);
        sT44_258 = ((sT43_258) && (sT42_258));
        if (sT44_258)
         {
          exponent = (exponent - 1);
          mantissa_mult = (mantissa_mult * 2L);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     }  /* end of if-else (sT39_256)*/
    sT45_265 = (sT38_228 == 3);
    sT46_265 = (sT38_228 == 2);
    sT47_265 = ((sT46_265) || (sT45_265));
    if (sT47_265)
     {
      exponent = (exponent + 1);
      mantissa_mult = (mantissa_mult / 2L);
     }  /* end of if-else (sT47_265)*/
    sT48_272 = TWO_RAISED_23;
    sT49_272 = TWO_RAISED_23;
    sT50_272 = (mantissa_mult / TWO_RAISED_23);
    sT51_272 = (sT50_272 % TWO_RAISED_23);
    mantissa = sT51_272;
   }  /* end of if-else (sT30_221)*/
  sT52_279 = (option == 4);
  if (sT52_279)
   {
    sT53_281 = sign2;
    sT54_281 = (sign1 == sign2);
    if (sT54_281)
     {
      sign = ((unsigned short)0U);
     } /* sT54_281     */
    else
     {
      sign = ((unsigned short)1U);
     }  /* end of if-else (sT54_281)*/
    sT55_297 = exponent2;
    sT56_297 = (exponent1 - exponent2);
    diff = sT56_297;
    sT57_298 = (sT56_297 > 0);
    if (sT57_298)
     {
      do
       {
        sT58_301 = (diff > 0);
        if (sT58_301)
         {
          diff = (diff - 1);
          mantissa2 = (mantissa2 / 2U);
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

     } /* sT57_298     */
    else
     {
      sT59_309 = (sT56_297 < 0);
      if (sT59_309)
       {
        do
         {
          sT60_311 = (diff < 0);
          if (sT60_311)
           {
            diff = (diff + 1);
            mantissa1 = (mantissa1 / 2U);
            1;
           }            /* end of loop condition */
          else
            break;
         } while (1);

       }  /* end of if-else (sT59_309)*/
     }  /* end of if-else (sT57_298)*/
    mantissa = (mantissa1 / mantissa2);
    exponent = ((unsigned short)0U);
    do
     {
      sT61_330 = (mantissa != 1U);
      if (sT61_330)
       {
        exponent = (exponent + 1);
        sT63_331 = (mantissa % 2U);
        sT62_331 = (actualMantissa / 2U);
        1;
        sT64_331 = (sT63_331 * TWO_RAISED_31);
        mantissa = (mantissa / 2U);
        actualMantissa = (sT64_331 + sT62_331);
       }        /* end of loop condition */
      else
        break;
     } while (1);

    sT66_342 = (exponent + 127);
    sT65_342 = (actualMantissa / 512U);
    mantissa = (TWO_RAISED_23 + sT65_342);
    exponent = sT66_342;
   }  /* end of if-else (sT52_279)*/
  sT68_358 = (exponent * TWO_RAISED_23);
  returnVar_main = 0;
  sT69_358 = (sign * TWO_RAISED_31);
  sT70_358 = (sT69_358 + sT68_358);
  sT67_358 = (mantissa % TWO_RAISED_23);
  result = (sT70_358 + sT67_358);
  return   0;

}

