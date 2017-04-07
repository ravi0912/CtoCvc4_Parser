
extern int main(void);
extern void _main();

int main(void)
{
 short clk;
 short reset;
 short a0_in;
 short a1_in;
 short a2_in;
 short p339_in;
 short p340_in;
 short p_in;
 short v_in;
 short dv_in;
 short host_out;
 long p;
 long v;
 long dv;
 long bv;
 long temp1;
 long temp2;
 long mult_fact;
 long mult_fact1;
 short a0;
 short a1;
 short a2;
 short h1;
 short h2;
 short h3;
 short h4;
 short h5;
 short h6;
 short h7;
 short h8;
 short h9;
 short s;
 short s1;
 short s2;
 short cv;
 short dp;
 short d;
 short i;
 short j;
 short k;
 int temp;
 int eop;
 int sT0_50;
 int sT1_52;
 long long sT2_54;
 long sT3_54;
 int sT4_71;
 int sT5_71;
 int sT6_71;
 int sT7_73;
 int sT8_75;
 int sT9_79;
 int sT10_82;
 int sT11_82;
 long sT12_86;
 long sT13_86;
 long sT14_86;
 long sT15_86;
 long sT16_86;
 long sT17_86;
 long sT18_86;
 long sT19_86;
 long sT20_86;
 long sT21_86;
 long sT22_86;
 long sT23_86;
 long sT24_86;
 long sT25_86;
 long sT26_86;
 int sT27_100;
 int sT28_104;
 int sT29_104;
 int sT30_104;
 int sT31_106;
 int sT32_108;
 int sT33_112;
 short sT34_114;
 short sT35_114;
 int sT36_118;
 int sT37_118;
 long sT38_122;
 long sT39_122;
 long sT40_122;
 long sT41_122;
 long sT42_122;
 int sT43_127;
 int sT44_127;
 long sT45_132;
 long sT46_132;
 long sT47_132;
 long sT48_132;
 long sT49_132;
 long sT50_132;
 short sT51_132;
 short sT52_132;
 int sT53_138;
 int sT54_138;
 long sT55_143;
 long sT56_143;
 long sT57_143;
 short sT58_143;
 short sT59_143;
 int sT60_143;
 short sT61_143;
 long sT62_143;
 long sT63_143;
 long sT64_143;
 short sT65_143;
 long sT66_143;
 long sT67_143;
 long sT68_143;
 short sT69_143;
 short sT70_143;
 short sT71_143;
 int sT72_143;
 short sT73_143;
 long sT74_143;
 long sT75_143;
 long sT76_143;
 long sT77_143;
 long sT78_143;
 long sT79_143;
 short sT80_143;
 short sT81_143;
 int sT82_143;
 short sT83_143;
 int sT84_143;
 short sT85_143;
 short sT86_143;
 long sT87_143;
 int sT88_143;
 long sT89_143;
 long sT90_143;
 long sT91_143;
 long sT92_143;
 long sT93_143;
 long sT94_143;
 long sT95_143;
 short sT96_143;
 long sT97_54;
 long long sT98_54;
 long sT99_54;
 long sT100_54;
 long sT101_54;
 short sT102_71;
 int sT103_71;
 int sT104_71;
 int sT105_82;
 long sT106_84;
 long sT107_86;
 short sT108_114;
 short sT109_114;
 int sT110_104;
 int sT111_104;
 int sT112_118;
 long sT113_120;
 long sT114_122;
 int sT115_127;
 long sT116_129;
 short sT117_132;
 short sT118_132;
 int sT119_138;
 long sT120_140;
 long sT121_143;
 long sT122_143;
 short sT123_143;
 short sT124_143;
 long sT125_143;
 short sT126_143;
 short sT127_143;
 short sT128_143;
 short sT129_143;
 short sT130_143;
 short sT131_143;
 short sT132_143;
 short sT133_143;
 short sT134_143;
 short sT135_143;
 short sT136_143;
 short sT137_143;

 int returnVar_main;
  a0 = ((short)0);
  a1 = ((short)0);
  a2 = ((short)0);
  h1 = ((short)0);
  h2 = ((short)0);
  h3 = ((short)0);
  h4 = ((short)0);
  h5 = ((short)0);
  h6 = ((short)0);
  h7 = ((short)0);
  h8 = ((short)0);
  h9 = ((short)0);
  s = ((short)0);
  s1 = ((short)0);
  s2 = ((short)0);
  cv = ((short)0);
  dp = ((short)0);
  d = ((short)0);
  i = ((short)0);
  j = ((short)0);
  k = ((short)0);
  v = 0L;
  p = 0L;
  dv = 0L;
  bv = 0L;
  eop = 0;
  returnVar_main = 0;
  do
   {
    sT0_50 = (eop == 0);
    sT97_54 = (((long)p339_in) * 256L);
    sT98_54 = (p340_in * 72057594037927936LL);
    if (sT0_50)
     {
      do
       {
        sT1_52 = (clk != 1);
        if (sT1_52)
         {
          1;
         }          /* end of loop condition */
        else
          break;
       } while (1);

      sT100_54 = (sT97_54 / 256L);
      sT99_54 = sT100_54;
      a0 = a0_in;
      a1 = a1_in;
      a2 = a2_in;
      p = ((long)p339_in);
      p = sT97_54;
      p = sT100_54;
      sT2_54 = sT98_54;
      s = ((short)0);
      cv = ((short)0);
      h7 = ((short)0);
      h6 = ((short)0);
      h4 = ((short)0);
      dp = ((short)0);
      host_out = ((short)0);
      i = ((short)0);
      eop = 0;
      1;
      sT101_54 = (sT99_54 + sT98_54);
      sT3_54 = sT101_54;
      p = sT101_54;
      do
       {
        sT102_71 = (i + 1);
        sT103_71 = (eop == 0);
        sT4_71 = sT103_71;
        sT104_71 = (i <= 6);
        sT5_71 = sT104_71;
        sT6_71 = ((sT104_71) && (sT103_71));
        if (sT6_71)
         {
          do
           {
            sT7_73 = (clk != 1);
            if (sT7_73)
             {
              1;
             }              /* end of loop condition */
            else
              break;
           } while (1);

          sT8_75 = (reset == 1);
          if (sT8_75)
           {
            eop = 1;
            sT9_79 = 1;
           } /* sT8_75           */
          else
           {
            sT9_79 = (eop == 1);
           }  /* end of if-else (sT8_75)*/
          if (sT9_79)
           {
            mult_fact = 1L;
            temp = 0;
            do
             {
              sT105_82 = (temp + 1);
              sT11_82 = (temp <= i);
              sT106_84 = (mult_fact * 256L);
              sT10_82 = i;
              if (sT11_82)
               {
                mult_fact = sT106_84;
                temp = sT105_82;
               }                /* end of loop condition */
              else
                break;
             } while (1);

            sT13_86 = (p_in * mult_fact);
            sT107_86 = (mult_fact * 256L);
            sT12_86 = sT107_86;
            sT14_86 = sT107_86;
            sT17_86 = sT107_86;
            sT19_86 = sT107_86;
            sT22_86 = sT107_86;
            sT24_86 = sT107_86;
            temp2 = (p / sT12_86);
            sT15_86 = (temp2 * sT12_86);
            sT16_86 = (sT15_86 + sT13_86);
            temp1 = (p % mult_fact);
            p = (sT16_86 + temp1);
            temp2 = (v / sT12_86);
            sT18_86 = (v_in * mult_fact);
            sT20_86 = (temp2 * sT12_86);
            sT21_86 = (sT20_86 + sT18_86);
            temp1 = (v % mult_fact);
            v = (sT21_86 + temp1);
            temp2 = (dv / sT12_86);
            sT23_86 = (dv_in * mult_fact);
            sT25_86 = (temp2 * sT12_86);
            sT26_86 = (sT25_86 + sT23_86);
            temp1 = (dv % mult_fact);
            dv = (sT26_86 + temp1);
           }  /* end of if-else (sT9_79)*/
          i = sT102_71;
         }          /* end of loop condition */
        else
          break;
       } while (1);

      sT27_100 = (eop == 0);
      if (sT27_100)
       {
        eop = 0;
        i = ((short)1);
        do
         {
          sT108_114 = (i + 1);
          sT109_114 = (i - 1);
          sT110_104 = (eop == 0);
          sT28_104 = sT110_104;
          sT111_104 = (i <= 6);
          sT29_104 = sT111_104;
          sT30_104 = ((sT111_104) && (sT110_104));
          if (sT30_104)
           {
            do
             {
              sT31_106 = (clk != 1);
              if (sT31_106)
               {
                1;
               }                /* end of loop condition */
              else
                break;
             } while (1);

            sT32_108 = (reset == 1);
            i = sT108_114;
            if (sT32_108)
             {
              eop = 1;
              sT33_112 = 0;
             } /* sT32_108             */
            else
             {
              sT33_112 = (eop == 0);
             }  /* end of if-else (sT32_108)*/
            if (sT33_112)
             {
              sT34_114 = sT108_114;
              j = sT108_114;
              sT35_114 = sT109_114;
              k = sT109_114;
              mult_fact = 1L;
              temp = 0;
              mult_fact1 = 1L;
              sT72_143 = a2_in;
              do
               {
                sT112_118 = (temp + 1);
                sT37_118 = (temp <= sT108_114);
                sT113_120 = (mult_fact * 256L);
                sT36_118 = sT108_114;
                if (sT37_118)
                 {
                  mult_fact = sT113_120;
                  temp = sT112_118;
                 }                  /* end of loop condition */
                else
                  break;
               } while (1);

              sT39_122 = (p_in * mult_fact);
              sT114_122 = (mult_fact * 256L);
              sT38_122 = sT114_122;
              sT40_122 = sT114_122;
              temp = 0;
              sT48_132 = sT114_122;
              temp2 = (p / sT38_122);
              sT41_122 = (temp2 * sT38_122);
              sT42_122 = (sT41_122 + sT39_122);
              temp1 = (p % mult_fact);
              p = (sT42_122 + temp1);
              do
               {
                sT115_127 = (temp + 1);
                sT44_127 = (temp <= sT109_114);
                sT116_129 = (mult_fact1 * 256L);
                sT43_127 = sT109_114;
                if (sT44_127)
                 {
                  mult_fact1 = sT116_129;
                  temp = sT115_127;
                 }                  /* end of loop condition */
                else
                  break;
               } while (1);

              sT49_132 = (p % sT38_122);
              sT45_132 = (mult_fact1 * 256L);
              temp = 0;
              sT46_132 = (p % sT45_132);
              sT50_132 = (sT49_132 / mult_fact);
              mult_fact = 1L;
              sT47_132 = (sT46_132 / mult_fact1);
              sT117_132 = (sT50_132 - sT47_132);
              sT51_132 = sT117_132;
              d = sT117_132;
              sT118_132 = (sT51_132 / 2);
              sT52_132 = sT118_132;
              dp = sT118_132;
              do
               {
                sT119_138 = (temp + 1);
                sT54_138 = (temp <= i);
                sT120_140 = (mult_fact * 256L);
                sT53_138 = i;
                if (sT54_138)
                 {
                  mult_fact = sT120_140;
                  temp = sT119_138;
                 }                  /* end of loop condition */
                else
                  break;
               } while (1);

              temp1 = (bv % mult_fact);
              sT121_143 = (mult_fact * 256L);
              sT55_143 = sT121_143;
              sT62_143 = sT121_143;
              sT66_143 = sT121_143;
              sT74_143 = sT121_143;
              sT76_143 = sT121_143;
              sT87_143 = sT121_143;
              sT91_143 = sT121_143;
              sT94_143 = sT121_143;
              sT122_143 = (v % sT55_143);
              sT56_143 = sT122_143;
              sT67_143 = sT122_143;
              sT57_143 = (a0_in * sT56_143);
              sT123_143 = (sT57_143 / mult_fact);
              sT58_143 = sT123_143;
              h1 = sT123_143;
              sT125_143 = (p % sT55_143);
              sT77_143 = sT125_143;
              sT124_143 = (sT58_143 / 16);
              sT59_143 = sT124_143;
              h2 = sT124_143;
              sT60_143 = sT124_143;
              sT63_143 = sT125_143;
              sT126_143 = (a1_in + sT59_143);
              sT61_143 = sT126_143;
              h3 = sT126_143;
              sT75_143 = (dv % sT55_143);
              sT78_143 = (sT77_143 / mult_fact);
              sT68_143 = (sT52_132 * sT56_143);
              sT64_143 = (sT61_143 * sT77_143);
              sT79_143 = (sT78_143 / sT75_143);
              sT127_143 = (sT64_143 / mult_fact);
              sT65_143 = sT127_143;
              h4 = sT127_143;
              sT128_143 = (sT68_143 / mult_fact);
              sT69_143 = sT128_143;
              sT129_143 = (sT65_143 / 4);
              sT71_143 = sT129_143;
              s2 = sT128_143;
              h5 = sT129_143;
              sT130_143 = (sT71_143 + a2_in);
              sT73_143 = sT130_143;
              cv = sT130_143;
              sT84_143 = sT130_143;
              sT132_143 = (sT79_143 / mult_fact);
              sT80_143 = sT132_143;
              sT131_143 = (sT69_143 / 4);
              sT70_143 = sT131_143;
              h7 = sT131_143;
              s1 = sT132_143;
              sT82_143 = sT131_143;
              temp2 = (bv / sT55_143);
              sT133_143 = (sT80_143 / 4);
              sT81_143 = sT133_143;
              h6 = sT133_143;
              sT88_143 = sT133_143;
              sT134_143 = (sT81_143 + sT70_143);
              sT83_143 = sT134_143;
              s = sT134_143;
              sT135_143 = (sT83_143 * sT73_143);
              sT85_143 = sT135_143;
              h8 = sT135_143;
              sT92_143 = (temp2 * sT55_143);
              sT136_143 = (sT85_143 / 2);
              sT86_143 = sT136_143;
              h9 = sT136_143;
              sT89_143 = (sT86_143 + sT81_143);
              sT90_143 = (sT89_143 * mult_fact);
              sT93_143 = (sT92_143 + sT90_143);
              bv = (sT93_143 + temp1);
              sT95_143 = (bv % sT55_143);
              sT137_143 = (sT95_143 / mult_fact);
              sT96_143 = sT137_143;
              host_out = sT137_143;
             }  /* end of if-else (sT33_112)*/
           }            /* end of loop condition */
          else
            break;
         } while (1);

       }  /* end of if-else (sT27_100)*/
     }      /* end of loop condition */
    else
      break;
   } while (1);

  return   0;

}

