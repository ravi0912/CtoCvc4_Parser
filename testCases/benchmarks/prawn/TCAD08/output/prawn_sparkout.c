
extern int main(void);
extern void _main();

int main(void)
{
 int databus_i;
 int interrupt;
 int reset;
 int read_mem;
 int write_mem;
 int databus_o;
 int adbus;
 int inta;
 int pc;
 int ac;
 int byte1;
 int byte2;
 int byte3;
 int ibyte1;
 int i;
 int v;
 int c;
 int n;
 int z;
 int i_status;
 int byte1_temp;
 int flag;
 int temp;
 int itemp;
 int iac;
 int idbus;
 int icarry;
 int sT0_15;
 int sT1_36;
 int sT2_36;
 int sT3_36;
 int sT4_41;
 int sT5_41;
 int sT6_41;
 int sT7_41;
 int sT8_41;
 int sT9_41;
 int sT10_41;
 int sT11_41;
 int sT12_41;
 int sT13_41;
 int sT14_41;
 int sT15_48;
 int sT16_54;
 int sT17_59;
 int sT18_66;
 int sT19_66;
 int sT20_66;
 int sT21_66;
 int sT22_66;
 int sT23_66;
 int sT24_69;
 int sT25_69;
 int sT26_69;
 int sT27_69;
 int sT28_69;
 int sT29_69;
 int sT30_69;
 int sT31_69;
 int sT32_69;
 int sT33_69;
 int sT34_69;
 int sT35_81;
 int sT36_81;
 int sT37_81;
 int sT38_89;
 int sT39_89;
 int sT40_89;
 int sT41_89;
 int sT42_89;
 int sT43_89;
 int sT44_89;
 int sT45_92;
 int sT46_92;
 int sT47_97;
 int sT48_97;
 int sT49_97;
 int sT50_97;
 int sT51_116;
 int sT52_116;
 int sT53_122;
 int sT54_122;
 int sT55_122;
 int sT56_133;
 int sT57_133;
 int sT58_141;
 int sT59_141;
 int sT60_141;
 int sT61_141;
 int sT62_169;
 int sT63_169;
 int sT64_191;
 int sT65_195;
 int sT66_198;
 int sT67_204;
 int sT68_208;
 int sT69_212;
 int sT70_216;
 int sT71_218;
 int sT72_221;
 int sT73_229;
 int sT74_238;
 int sT75_240;
 int sT76_240;
 int sT77_240;
 int sT78_241;
 int sT79_251;
 int sT80_253;
 int sT81_253;
 int sT82_253;
 int sT83_254;
 int sT84_264;
 int sT85_266;
 int sT86_266;
 int sT87_266;
 int sT88_267;
 int sT89_289;
 int sT90_295;
 int sT91_300;
 int sT92_305;
 int sT93_305;
 int sT94_305;
 int sT95_305;
 int sT96_305;
 int sT97_305;
 int sT98_319;
 int sT99_344;
 int sT100_370;
 int sT101_371;
 int sT102_371;
 int sT103_373;
 int sT104_373;
 int sT105_376;
 int sT106_376;
 int sT107_380;
 int sT108_380;
 int sT109_380;
 int sT110_380;
 int sT111_380;
 int sT112_380;
 int sT113_380;
 int sT114_380;
 int sT115_380;
 int sT116_380;
 int sT117_380;
 int sT118_380;
 int sT119_380;
 int sT120_380;
 int sT121_380;
 int sT122_380;
 int sT123_380;
 int sT124_380;
 int sT125_380;
 int sT126_380;
 int sT127_380;
 int sT128_380;
 int sT129_380;
 int sT130_380;
 int sT131_380;
 int sT132_380;
 int sT133_380;
 int sT134_380;
 int sT135_380;
 int sT136_380;
 int sT137_380;
 int sT138_380;
 int sT139_380;
 int sT140_380;
 int sT141_380;
 int sT142_380;
 int sT143_380;
 int sT144_380;
 int sT145_380;
 int sT146_380;
 int sT147_380;
 int sT148_380;
 int sT149_380;
 int sT150_380;
 int sT151_380;
 int sT152_380;
 int sT153_380;
 int sT154_380;
 int sT155_380;
 int sT156_380;
 int sT157_380;
 int sT158_380;
 int sT159_380;
 int sT160_380;
 int sT161_380;
 int sT162_380;
 int sT163_380;
 int sT164_380;
 int sT165_380;
 int sT166_380;
 int sT167_380;
 int sT168_380;
 int sT169_380;
 int sT170_380;
 int sT171_380;
 int sT172_380;
 int sT173_380;
 int sT174_380;
 int sT175_380;
 int sT176_380;
 int sT177_380;
 int sT178_380;
 int sT179_380;
 int sT180_380;
 int sT181_380;
 int sT182_380;
 int sT183_380;
 int sT184_380;
 int sT185_380;
 int sT186_380;
 int sT187_380;
 int sT188_380;
 int sT189_380;
 int sT190_380;
 int sT191_380;
 int sT192_380;
 int sT193_380;
 int sT194_380;
 int sT195_380;
 int sT196_403;
 int sT197_403;
 int sT198_403;
 int sT199_405;
 int sT200_405;
 int sT201_405;
 int sT202_405;
 int sT203_405;
 int sT204_413;
 int sT205_413;
 int sT206_419;
 int sT207_421;
 int sT208_421;
 int sT209_423;
 int sT210_423;
 int sT211_430;
 int sT212_430;
 int sT213_433;
 int sT214_435;
 int sT215_437;
 int sT216_441;
 int sT217_445;
 int sT218_445;
 int sT219_445;
 int sT220_451;
 int sT221_455;
 int sT222_459;
 int sT223_459;
 int sT224_459;
 int sT225_466;
 int sT226_470;

 int returnVar_main;
  sT0_15 = (reset == 1);
  if (sT0_15)
   {
    pc = 0;
    databus_o = 0;
    adbus = 0;
    read_mem = 0;
    write_mem = 0;
    inta = 0;
    i = 0;
    v = 0;
    c = 0;
    z = 0;
    n = 0;
   } /* sT0_15   */
  else
   {
    sT1_36 = (i == 1);
    sT2_36 = (interrupt == 1);
    sT3_36 = ((sT2_36) && (sT1_36));
    if (sT3_36)
     {
      i_status = 1;
     } /* sT3_36     */
    else
     {
      i_status = 0;
     }  /* end of if-else (sT3_36)*/
    sT15_48 = (i_status == 1);
    sT8_41 = (v % 2);
    sT10_41 = (i % 2);
    adbus = pc;
    if (sT15_48)
     {
      sT6_41 = (c % 2);
      sT9_41 = (sT8_41 * 8);
      inta = 1;
      sT11_41 = (sT10_41 * 16);
      sT7_41 = (sT6_41 * 4);
      sT12_41 = (sT11_41 + sT9_41);
      sT4_41 = (z % 2);
      sT13_41 = (sT12_41 + sT7_41);
      sT5_41 = (sT4_41 * 2);
      sT14_41 = (sT13_41 + sT5_41);
      flag = (sT14_41 + n);
     } /* sT15_48     */
    else
     {
      sT6_41 = (c % 2);
      sT9_41 = (sT8_41 * 8);
      read_mem = 1;
      sT11_41 = (sT10_41 * 16);
      sT7_41 = (sT6_41 * 4);
      sT12_41 = (sT11_41 + sT9_41);
      sT4_41 = (z % 2);
      sT13_41 = (sT12_41 + sT7_41);
      sT5_41 = (sT4_41 * 2);
      sT14_41 = (sT13_41 + sT5_41);
      flag = (sT14_41 + n);
     }  /* end of if-else (sT15_48)*/
    sT16_54 = (i_status == 1);
    byte1 = databus_i;
    if (sT16_54)
     {
      inta = 0;
     } /* sT16_54     */
    else
     {
      read_mem = 0;
     }  /* end of if-else (sT16_54)*/
    sT17_59 = (i_status == 0);
    if (sT17_59)
     {
      pc = (pc + 1);
     }  /* end of if-else (sT17_59)*/
    sT19_66 = (databus_i == 223);
    sT18_66 = (i_status == 0);
    sT20_66 = (databus_i / 32);
    sT21_66 = (sT20_66 == 14);
    sT22_66 = ((sT21_66) || (sT19_66));
    sT23_66 = ((sT22_66) && (sT18_66));
    if (sT23_66)
     {
      sT28_69 = (databus_i == 223);
      sT29_69 = (databus_i % 16);
      sT26_69 = (databus_i / 16);
      sT27_69 = (sT26_69 == 3);
      sT30_69 = (sT29_69 / 4);
      sT24_69 = (databus_i / 8);
      sT31_69 = (sT30_69 == 3);
      sT25_69 = (sT24_69 == 6);
      sT32_69 = ((sT31_69) || (sT28_69));
      sT33_69 = ((sT32_69) || (sT27_69));
      sT34_69 = ((sT33_69) || (sT25_69));
      if (sT34_69)
       {
        sT35_81 = (databus_i % 4);
        adbus = 4095;
        read_mem = 1;
        byte3 = databus_i;
        read_mem = 0;
        sT36_81 = (sT35_81 / 2);
        sT37_81 = (sT36_81 == 1);
        if (sT37_81)
         {
          adbus = (3840 + databus_i);
          sT42_89 = (databus_i == 223);
          sT40_89 = (databus_i % 16);
          read_mem = 1;
          sT41_89 = (sT40_89 == 3);
          sT39_89 = (sT40_89 == 6);
          sT38_89 = sT40_89;
          sT43_89 = ((sT42_89) || (sT41_89));
          sT44_89 = ((sT43_89) || (sT39_89));
          if (sT44_89)
           {
            sT45_92 = (databus_i % 16);
            sT46_92 = (sT45_92 == 6);
            if (sT46_92)
             {
              byte3 = (databus_i + 1);
              flag = (databus_i % 32);
              read_mem = 0;
              read_mem = 1;
              adbus = (3840 + byte3);
              sT47_97 = (flag % 32);
              sT48_97 = (flag % 16);
              sT49_97 = (flag % 8);
              sT50_97 = (flag % 4);
              i = (sT47_97 / 16);
              v = (sT48_97 / 8);
              c = (sT49_97 / 4);
              z = (sT50_97 / 2);
              n = (flag % 2);
             }  /* end of if-else (sT46_92)*/
            sT51_116 = (databus_i % 16);
            pc = databus_i;
            sT52_116 = (sT51_116 != 3);
            if (sT52_116)
             {
              byte3 = (byte3 + 1);
              sT54_122 = (databus_i % 16);
              sT53_122 = (databus_i % 256);
              read_mem = 0;
              read_mem = 1;
              adbus = (3840 + byte3);
              sT55_122 = (sT54_122 * 256);
              pc = (sT55_122 + sT53_122);
             }  /* end of if-else (sT52_116)*/
           } /* sT44_89           */
          else
           {
            sT56_133 = (databus_i % 2);
            sT57_133 = (sT56_133 == 0);
            if (sT57_133)
             {
              ac = databus_i;
             } /* sT57_133             */
            else
             {
              flag = (databus_i % 16);
              sT58_141 = (flag % 32);
              sT59_141 = (flag % 16);
              sT60_141 = (flag % 8);
              sT61_141 = (flag % 4);
              i = (sT58_141 / 16);
              v = (sT59_141 / 8);
              c = (sT60_141 / 4);
              z = (sT61_141 / 2);
              n = (flag % 2);
             }  /* end of if-else (sT57_133)*/
           }  /* end of if-else (sT44_89)*/
          byte3 = (byte3 + 1);
          read_mem = 0;
         } /* sT37_81         */
        else
         {
          byte3 = (databus_i - 1);
          sT62_169 = (databus_i % 2);
          adbus = (3840 + byte3);
          sT63_169 = (sT62_169 == 0);
          if (sT63_169)
           {
            databus_o = ac;
           } /* sT63_169           */
          else
           {
            databus_o = flag;
           }  /* end of if-else (sT63_169)*/
          write_mem = 1;
          write_mem = 0;
         }  /* end of if-else (sT37_81)*/
       } /* sT34_69       */
      else
       {
        sT64_191 = (databus_i == 1);
        if (sT64_191)
         {
          ac = 0;
         }  /* end of if-else (sT64_191)*/
        sT65_195 = (databus_i == 2);
        if (sT65_195)
         {
          ac = (256 - ac);
          sT66_198 = (ac == 0);
          if (sT66_198)
           {
            z = 1;
           } /* sT66_198           */
          else
           {
            z = 0;
           }  /* end of if-else (sT66_198)*/
          n = (ac / 128);
         }  /* end of if-else (sT65_195)*/
        sT67_204 = (databus_i == 4);
        if (sT67_204)
         {
          c = (1 - c);
         }  /* end of if-else (sT67_204)*/
        sT68_208 = (databus_i == 5);
        if (sT68_208)
         {
          i = 1;
         }  /* end of if-else (sT68_208)*/
        sT69_212 = (databus_i == 7);
        if (sT69_212)
         {
          i = 0;
         }  /* end of if-else (sT69_212)*/
        sT70_216 = (databus_i == 8);
        if (sT70_216)
         {
          sT71_218 = (ac % 128);
          c = (ac / 128);
          ac = (sT71_218 * 2);
          n = (ac / 128);
          sT72_221 = (c != n);
          if (sT72_221)
           {
            v = 1;
           } /* sT72_221           */
          else
           {
            v = 0;
           }  /* end of if-else (sT72_221)*/
          sT73_229 = (ac == 0);
          if (sT73_229)
           {
            z = 1;
           } /* sT73_229           */
          else
           {
            z = 0;
           }  /* end of if-else (sT73_229)*/
         }  /* end of if-else (sT70_216)*/
        sT74_238 = (databus_i == 9);
        if (sT74_238)
         {
          sT76_240 = (ac / 128);
          sT75_240 = (ac / 2);
          sT77_240 = (sT76_240 * 128);
          ac = (sT77_240 + sT75_240);
          sT78_241 = (ac == 0);
          if (sT78_241)
           {
            z = 1;
           } /* sT78_241           */
          else
           {
            z = 0;
           }  /* end of if-else (sT78_241)*/
          n = (ac / 128);
         }  /* end of if-else (sT74_238)*/
        sT79_251 = (databus_i == 10);
        if (sT79_251)
         {
          sT81_253 = (ac % 128);
          sT80_253 = (ac / 128);
          sT82_253 = (sT81_253 * 2);
          ac = (sT82_253 + sT80_253);
          sT83_254 = (ac == 0);
          if (sT83_254)
           {
            z = 1;
           } /* sT83_254           */
          else
           {
            z = 0;
           }  /* end of if-else (sT83_254)*/
          n = (ac / 128);
         }  /* end of if-else (sT79_251)*/
        sT84_264 = (databus_i == 11);
        if (sT84_264)
         {
          sT86_266 = (ac % 2);
          sT85_266 = (ac / 2);
          sT87_266 = (sT86_266 * 128);
          ac = (sT87_266 + sT85_266);
          sT88_267 = (ac == 0);
          if (sT88_267)
           {
            z = 1;
           } /* sT88_267           */
          else
           {
            z = 0;
           }  /* end of if-else (sT88_267)*/
         }  /* end of if-else (sT84_264)*/
       }  /* end of if-else (sT34_69)*/
     } /* sT23_66     */
    else
     {
      sT89_289 = (i_status == 1);
      adbus = pc;
      if (sT89_289)
       {
        inta = 1;
       } /* sT89_289       */
      else
       {
        read_mem = 1;
       }  /* end of if-else (sT89_289)*/
      sT90_295 = (i_status == 1);
      byte2 = databus_i;
      if (sT90_295)
       {
        inta = 0;
       } /* sT90_295       */
      else
       {
        read_mem = 0;
       }  /* end of if-else (sT90_295)*/
      sT91_300 = (i_status == 0);
      if (sT91_300)
       {
        pc = (pc + 1);
       }  /* end of if-else (sT91_300)*/
      sT93_305 = (databus_i == 252);
      sT92_305 = (i_status == 1);
      sT94_305 = (databus_i / 16);
      sT95_305 = (sT94_305 == 12);
      sT96_305 = ((sT95_305) || (sT93_305));
      sT97_305 = ((sT96_305) || (sT92_305));
      if (sT97_305)
       {
        sT98_319 = (databus_i != 252);
        adbus = 4095;
        read_mem = 1;
        byte3 = databus_i;
        read_mem = 0;
        if (sT98_319)
         {
          byte3 = (databus_i - 1);
          databus_o = (pc / 256);
          write_mem = 1;
          write_mem = 0;
          adbus = (3840 + byte3);
          byte3 = (byte3 - 1);
         } /* sT98_319         */
        else
         {
          byte3 = (databus_i - 1);
         }  /* end of if-else (sT98_319)*/
        adbus = (3840 + byte3);
        sT99_344 = (i_status == 1);
        databus_o = (pc % 256);
        write_mem = 1;
        write_mem = 0;
        if (sT99_344)
         {
          byte3 = (byte3 - 1);
          databus_o = flag;
          write_mem = 1;
          write_mem = 0;
          i = 0;
          adbus = (3840 + byte3);
         }  /* end of if-else (sT99_344)*/
        sT100_370 = (databus_i != 252);
        databus_o = byte3;
        adbus = 4095;
        write_mem = 1;
        write_mem = 0;
        if (sT100_370)
         {
          sT101_371 = (databus_i % 16);
          sT102_371 = (sT101_371 * 256);
          pc = (sT102_371 + databus_i);
         } /* sT100_370         */
        else
         {
          sT103_373 = (pc / 256);
          sT104_373 = (sT103_373 * 256);
          pc = (sT104_373 + databus_i);
         }  /* end of if-else (sT100_370)*/
       } /* sT97_305       */
      else
       {
        sT105_376 = (databus_i / 16);
        sT106_376 = (sT105_376 == 15);
        if (sT106_376)
         {
          sT178_380 = (n == 1);
          sT175_380 = (n == 0);
          byte1_temp = (databus_i % 16);
          sT179_380 = (byte1_temp == 0);
          sT176_380 = (byte1_temp == 1);
          sT108_380 = sT178_380;
          sT111_380 = sT175_380;
          sT119_380 = sT175_380;
          sT122_380 = sT178_380;
          sT130_380 = sT178_380;
          sT133_380 = sT175_380;
          sT139_380 = sT175_380;
          sT142_380 = sT178_380;
          sT181_380 = (byte1_temp == 13);
          sT172_380 = (z == 1);
          sT180_380 = ((sT179_380) && (sT178_380));
          sT177_380 = ((sT176_380) && (sT175_380));
          sT173_380 = (byte1_temp == 2);
          sT169_380 = (z == 0);
          sT182_380 = ((sT181_380) || (sT180_380));
          sT125_380 = sT172_380;
          sT153_380 = sT172_380;
          sT170_380 = (byte1_temp == 3);
          sT166_380 = (c == 1);
          sT174_380 = ((sT173_380) && (sT172_380));
          sT183_380 = ((sT182_380) || (sT177_380));
          sT114_380 = sT169_380;
          sT158_380 = sT169_380;
          sT167_380 = (byte1_temp == 4);
          sT159_380 = (c == 0);
          sT171_380 = ((sT170_380) && (sT169_380));
          sT184_380 = ((sT183_380) || (sT174_380));
          sT154_380 = sT166_380;
          sT160_380 = (byte1_temp == 6);
          sT164_380 = (byte1_temp == 5);
          sT168_380 = ((sT167_380) && (sT166_380));
          sT185_380 = ((sT184_380) || (sT171_380));
          sT163_380 = sT159_380;
          sT155_380 = (byte1_temp == 7);
          sT141_380 = (v == 0);
          sT161_380 = ((sT160_380) && (sT159_380));
          sT165_380 = ((sT164_380) && (sT159_380));
          sT186_380 = ((sT185_380) || (sT168_380));
          sT150_380 = (v == 1);
          sT151_380 = (byte1_temp == 8);
          sT156_380 = ((sT155_380) && (sT166_380));
          sT162_380 = ((sT161_380) && (sT169_380));
          sT187_380 = ((sT186_380) || (sT165_380));
          sT143_380 = ((sT178_380) && (sT141_380));
          sT110_380 = sT141_380;
          sT121_380 = sT141_380;
          sT132_380 = sT141_380;
          sT147_380 = sT141_380;
          sT144_380 = (byte1_temp == 10);
          sT148_380 = (byte1_temp == 9);
          sT157_380 = ((sT156_380) && (sT172_380));
          sT188_380 = ((sT187_380) || (sT162_380));
          sT152_380 = ((sT151_380) && (sT150_380));
          sT120_380 = ((sT175_380) && (sT150_380));
          sT107_380 = sT150_380;
          sT118_380 = sT150_380;
          sT123_380 = sT143_380;
          sT129_380 = sT150_380;
          sT138_380 = sT150_380;
          sT135_380 = (byte1_temp == 11);
          sT127_380 = (byte1_temp == 14);
          sT189_380 = ((sT188_380) || (sT157_380));
          sT134_380 = ((sT175_380) && (sT141_380));
          sT140_380 = ((sT175_380) || (sT150_380));
          sT145_380 = ((sT144_380) && (sT143_380));
          sT116_380 = (byte1_temp == 15);
          sT149_380 = ((sT148_380) && (sT141_380));
          sT190_380 = ((sT189_380) || (sT152_380));
          sT124_380 = ((sT143_380) || (sT120_380));
          sT109_380 = ((sT178_380) && (sT150_380));
          sT112_380 = sT134_380;
          sT131_380 = ((sT178_380) || (sT150_380));
          sT136_380 = ((sT135_380) && (sT134_380));
          sT146_380 = ((sT145_380) || (sT140_380));
          sT191_380 = ((sT190_380) || (sT149_380));
          sT113_380 = ((sT134_380) || (sT109_380));
          sT126_380 = ((sT172_380) || (sT124_380));
          sT137_380 = ((sT136_380) || (sT131_380));
          sT192_380 = ((sT191_380) || (sT146_380));
          sT115_380 = ((sT169_380) || (sT113_380));
          sT128_380 = ((sT127_380) && (sT126_380));
          sT193_380 = ((sT192_380) || (sT137_380));
          sT117_380 = ((sT116_380) && (sT115_380));
          sT194_380 = ((sT193_380) || (sT128_380));
          sT195_380 = ((sT194_380) || (sT117_380));
          if (sT195_380)
           {
            pc = databus_i;
           }  /* end of if-else (sT195_380)*/
         } /* sT106_376         */
        else
         {
          sT196_403 = (databus_i % 32);
          sT197_403 = (sT196_403 / 16);
          sT198_403 = (sT197_403 == 1);
          if (sT198_403)
           {
            sT200_405 = (databus_i % 16);
            sT199_405 = (adbus % 256);
            read_mem = 1;
            byte2 = databus_i;
            read_mem = 0;
            sT201_405 = (sT200_405 * 256);
            adbus = (sT201_405 + sT199_405);
            sT202_405 = (adbus / 256);
            sT203_405 = (sT202_405 * 256);
            adbus = (sT203_405 + databus_i);
           }  /* end of if-else (sT198_403)*/
          sT204_413 = (databus_i / 32);
          sT205_413 = (sT204_413 == 4);
          if (sT205_413)
           {
            sT206_419 = (databus_i % 16);
            pc = (sT206_419 + byte2);
           } /* sT205_413           */
          else
           {
            sT207_421 = (databus_i / 32);
            sT208_421 = (sT207_421 == 5);
            if (sT208_421)
             {
              sT209_423 = (databus_i % 16);
              write_mem = 1;
              write_mem = 0;
              sT210_423 = (sT209_423 * 256);
              adbus = (sT210_423 + byte2);
              databus_o = adbus;
             } /* sT208_421             */
            else
             {
              ibyte1 = (databus_i / 32);
              sT211_430 = (databus_i % 16);
              read_mem = 1;
              sT213_433 = (ibyte1 == 0);
              sT212_430 = (sT211_430 * 256);
              if (sT213_433)
               {
                adbus = (sT212_430 + byte2);
                ac = databus_i;
               } /* sT213_433               */
              else
               {
                adbus = (sT212_430 + byte2);
               }  /* end of if-else (sT213_433)*/
              sT214_435 = (ibyte1 == 1);
              if (sT214_435)
               {
                ac = (ac & databus_i);
               }  /* end of if-else (sT214_435)*/
              sT215_437 = (ibyte1 == 2);
              if (sT215_437)
               {
                sT216_441 = (c == 1);
                iac = ac;
                idbus = databus_i;
                if (sT216_441)
                 {
                  icarry = 1;
                 } /* sT216_441                 */
                else
                 {
                  icarry = 0;
                 }  /* end of if-else (sT216_441)*/
                sT217_445 = (ac + databus_i);
                itemp = (sT217_445 + icarry);
                temp = itemp;
                sT218_445 = (itemp % 256);
                ac = (itemp % 128);
                c = (sT218_445 / 256);
                sT219_445 = (itemp % 512);
                v = (sT219_445 * 512);
               }  /* end of if-else (sT215_437)*/
              sT220_451 = (ibyte1 == 3);
              if (sT220_451)
               {
                sT221_455 = (c == 1);
                iac = ac;
                idbus = databus_i;
                if (sT221_455)
                 {
                  icarry = 1;
                 } /* sT221_455                 */
                else
                 {
                  icarry = 0;
                 }  /* end of if-else (sT221_455)*/
                sT222_459 = (ac - databus_i);
                itemp = (sT222_459 - icarry);
                temp = itemp;
                ac = (itemp % 128);
                sT223_459 = (itemp % 256);
                sT224_459 = (itemp % 512);
                c = (sT223_459 / 256);
                v = (sT224_459 * 512);
               }  /* end of if-else (sT220_451)*/
              sT225_466 = (ac == 0);
              if (sT225_466)
               {
                z = 1;
               } /* sT225_466               */
              else
               {
                z = 0;
               }  /* end of if-else (sT225_466)*/
              sT226_470 = (ac % 128);
              read_mem = 0;
              n = (sT226_470 * 128);
             }  /* end of if-else (sT208_421)*/
           }  /* end of if-else (sT205_413)*/
         }  /* end of if-else (sT106_376)*/
       }  /* end of if-else (sT97_305)*/
     }  /* end of if-else (sT23_66)*/
   }  /* end of if-else (sT0_15)*/
  returnVar_main = 0;
  return   0;

}

