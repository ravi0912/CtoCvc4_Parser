
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
 int sT227_61;
 int sT228_311;
 int sT229_36;
 int sT230_66;
 int sT231_305;
 int sT232_97;
 int sT233_325;
 int sT234_69;
 int sT235_69;
 int sT236_36;
 int sT237_166;
 int sT238_86;
 int sT239_69;
 int sT240_81;
 int sT241_66;
 int sT242_66;
 int sT243_66;
 int sT244_97;
 int sT245_166;
 int sT246_305;
 int sT247_305;
 int sT248_81;
 int sT249_403;
 int sT250_305;
 int sT251_305;
 int sT252_305;
 int sT253_206;
 int sT254_325;
 int sT255_305;
 int sT256_69;
 int sT257_403;
 int sT258_305;
 int sT259_305;
 int sT260_69;
 int sT261_69;
 int sT262_69;
 int sT263_376;
 int sT264_69;
 int sT265_69;
 int sT266_69;
 int sT267_380;
 int sT268_69;
 int sT269_69;
 int sT270_380;
 int sT271_413;
 int sT272_133;
 int sT273_405;
 int sT274_380;
 int sT275_380;
 int sT276_371;
 int sT277_191;
 int sT278_380;
 int sT279_380;
 int sT280_380;
 int sT281_122;
 int sT282_380;
 int sT283_380;
 int sT284_380;
 int sT285_380;
 int sT286_380;
 int sT287_380;
 int sT288_380;
 int sT289_195;
 int sT290_380;
 int sT291_97;
 int sT292_97;
 int sT293_380;
 int sT294_421;
 int sT295_97;
 int sT296_97;
 int sT297_380;
 int sT298_380;
 int sT299_380;
 int sT300_380;
 int sT301_216;
 int sT302_238;
 int sT303_122;
 int sT304_122;
 int sT305_122;
 int sT306_89;
 int sT307_141;
 int sT308_141;
 int sT309_89;
 int sT310_89;
 int sT311_116;
 int sT312_141;
 int sT313_141;
 int sT314_89;
 int sT315_97;
 int sT316_97;
 int sT317_141;
 int sT318_141;
 int sT319_218;
 int sT320_218;
 int sT321_218;
 int sT322_302;
 int sT323_380;
 int sT324_380;
 int sT325_405;
 int sT326_380;
 int sT327_380;
 int sT328_380;
 int sT329_380;
 int sT330_380;
 int sT331_373;
 int sT332_319;
 int sT333_349;
 int sT334_373;
 int sT335_373;
 int sT336_405;
 int sT337_380;
 int sT338_380;
 int sT339_380;
 int sT340_380;
 int sT341_380;
 int sT342_380;
 int sT343_380;
 int sT344_380;
 int sT345_380;
 int sT346_380;
 int sT347_380;
 int sT348_380;
 int sT349_380;
 int sT350_380;
 int sT351_380;
 int sT352_380;
 int sT353_380;
 int sT354_380;
 int sT355_380;
 int sT356_380;
 int sT357_433;
 int sT358_435;
 int sT359_405;
 int sT360_437;
 int sT361_405;
 int sT362_405;
 int sT363_405;
 int sT364_423;
 int sT365_445;
 int sT366_459;

 int returnVar_main;
  sT227_61 = (pc + 1);
  sT228_311 = (databus_i - 1);
  sT0_15 = (reset == 1);
  sT229_36 = (i == 1);
  sT230_66 = (databus_i / 32);
  sT231_305 = (databus_i / 16);
  returnVar_main = 0;
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
    sT232_97 = (databus_i + 1);
    sT233_325 = (sT228_311 - 1);
    sT236_36 = (interrupt == 1);
    sT2_36 = sT236_36;
    sT19_66 = (databus_i == 223);
    sT234_69 = (databus_i % 16);
    sT235_69 = (databus_i / 8);
    sT3_36 = ((sT236_36) && (sT229_36));
    sT1_36 = sT229_36;
    adbus = pc;
    byte1 = databus_i;
    sT20_66 = sT230_66;
    if (sT3_36)
     {
      i_status = 1;
     } /* sT3_36     */
    else
     {
      i_status = 0;
     }  /* end of if-else (sT3_36)*/
    sT237_166 = (databus_i - 1);
    sT238_86 = (3840 + databus_i);
    sT241_66 = (sT230_66 == 14);
    sT21_66 = sT241_66;
    sT242_66 = (i_status == 0);
    sT18_66 = sT242_66;
    sT239_69 = (sT234_69 / 4);
    sT240_81 = (databus_i % 4);
    sT243_66 = ((sT241_66) || (sT19_66));
    sT22_66 = sT243_66;
    sT23_66 = ((sT243_66) && (sT242_66));
    sT17_59 = sT242_66;
    sT244_97 = (3840 + sT232_97);
    sT245_166 = (3840 + sT237_166);
    sT250_305 = (databus_i == 252);
    sT246_305 = sT250_305;
    sT251_305 = (sT231_305 == 12);
    sT247_305 = sT251_305;
    sT248_81 = (sT240_81 / 2);
    sT249_403 = (databus_i % 32);
    sT252_305 = ((sT251_305) || (sT250_305));
    sT253_206 = (1 - c);
    sT254_325 = (3840 + sT228_311);
    sT258_305 = (i_status == 1);
    sT255_305 = sT258_305;
    sT260_69 = (sT239_69 == 3);
    sT256_69 = sT260_69;
    sT257_403 = (sT249_403 / 16);
    sT8_41 = (v % 2);
    sT259_305 = ((sT252_305) || (sT258_305));
    sT261_69 = ((sT260_69) || (sT19_66));
    sT15_48 = sT258_305;
    sT16_54 = sT258_305;
    sT264_69 = (sT231_305 == 3);
    sT262_69 = sT264_69;
    sT263_376 = (sT231_305 == 15);
    sT10_41 = (i % 2);
    sT6_41 = (c % 2);
    sT265_69 = ((sT261_69) || (sT264_69));
    sT268_69 = (sT235_69 == 6);
    sT266_69 = sT268_69;
    sT267_380 = (n == 1);
    sT9_41 = (sT8_41 * 8);
    sT11_41 = (sT10_41 * 16);
    sT269_69 = ((sT265_69) || (sT268_69));
    sT12_41 = (sT11_41 + sT9_41);
    sT274_380 = (sT234_69 == 0);
    sT270_380 = sT274_380;
    sT271_413 = (sT230_66 == 4);
    sT272_133 = (databus_i % 2);
    sT273_405 = (sT234_69 * 256);
    sT275_380 = ((sT274_380) && (sT267_380));
    sT276_371 = (sT273_405 + databus_i);
    sT277_191 = (databus_i == 1);
    sT278_380 = (n == 0);
    sT7_41 = (sT6_41 * 4);
    sT4_41 = (z % 2);
    sT13_41 = (sT12_41 + sT7_41);
    sT282_380 = (sT234_69 == 1);
    sT279_380 = sT282_380;
    sT284_380 = (sT234_69 == 13);
    sT280_380 = sT284_380;
    sT5_41 = (sT4_41 * 2);
    sT281_122 = (databus_i % 16);
    sT286_380 = ((sT282_380) && (sT278_380));
    sT283_380 = sT286_380;
    sT287_380 = ((sT284_380) || (sT275_380));
    sT285_380 = sT287_380;
    sT288_380 = ((sT287_380) || (sT286_380));
    sT14_41 = (sT13_41 + sT5_41);
    sT289_195 = (databus_i == 2);
    sT290_380 = (z == 1);
    sT291_97 = (sT249_403 % 32);
    sT292_97 = (sT249_403 % 16);
    flag = (sT14_41 + n);
    sT297_380 = (sT234_69 == 2);
    sT293_380 = sT297_380;
    sT294_421 = (sT230_66 == 5);
    sT295_97 = (sT249_403 % 8);
    sT296_97 = (sT249_403 % 4);
    sT299_380 = ((sT297_380) && (sT290_380));
    sT298_380 = sT299_380;
    sT300_380 = ((sT288_380) || (sT299_380));
    if (sT255_305)
     {
      inta = 1;
     } /* sT255_305     */
    else
     {
      read_mem = 1;
     }  /* end of if-else (sT255_305)*/
    if (sT255_305)
     {
      inta = 0;
     } /* sT255_305     */
    else
     {
      read_mem = 0;
     }  /* end of if-else (sT255_305)*/
    if (sT18_66)
     {
      pc = sT227_61;
     }  /* end of if-else (sT18_66)*/
    if (sT23_66)
     {
      sT301_216 = (databus_i == 8);
      sT302_238 = (databus_i == 9);
      sT303_122 = (databus_i % 256);
      sT304_122 = (sT281_122 * 256);
      sT24_69 = sT235_69;
      sT25_69 = sT266_69;
      sT26_69 = sT231_305;
      sT27_69 = sT262_69;
      sT28_69 = sT19_66;
      sT29_69 = sT234_69;
      sT30_69 = sT239_69;
      sT31_69 = sT256_69;
      sT32_69 = sT261_69;
      sT33_69 = sT265_69;
      sT34_69 = sT269_69;
      if (sT269_69)
       {
        sT305_122 = (sT304_122 + sT303_122);
        sT37_81 = (sT248_81 == 1);
        sT309_89 = (sT234_69 == 3);
        sT306_89 = sT309_89;
        sT307_141 = (sT281_122 % 32);
        sT308_141 = (sT281_122 % 16);
        sT310_89 = ((sT19_66) || (sT309_89));
        adbus = 4095;
        read_mem = 1;
        byte3 = databus_i;
        read_mem = 0;
        sT35_81 = sT240_81;
        sT36_81 = sT248_81;
        if (sT37_81)
         {
          sT314_89 = (sT234_69 == 6);
          sT39_89 = sT314_89;
          sT311_116 = (sT234_69 != 3);
          sT312_141 = (sT281_122 % 8);
          sT313_141 = (sT281_122 % 4);
          sT44_89 = ((sT310_89) || (sT314_89));
          adbus = sT238_86;
          read_mem = 1;
          sT38_89 = sT234_69;
          sT40_89 = sT234_69;
          sT41_89 = sT306_89;
          sT42_89 = sT19_66;
          sT43_89 = sT310_89;
          if (sT44_89)
           {
            sT315_97 = (sT291_97 / 16);
            sT316_97 = (sT292_97 / 8);
            sT45_92 = sT234_69;
            sT46_92 = sT39_89;
            pc = databus_i;
            sT51_116 = sT234_69;
            sT52_116 = sT311_116;
            if (sT39_89)
             {
              c = (sT295_97 / 4);
              z = (sT296_97 / 2);
              flag = sT249_403;
              sT47_97 = sT291_97;
              i = sT315_97;
              sT48_97 = sT292_97;
              v = sT316_97;
              sT49_97 = sT295_97;
              sT50_97 = sT296_97;
              read_mem = 0;
              byte3 = sT232_97;
              adbus = sT244_97;
              read_mem = 1;
              n = (sT249_403 % 2);
             }  /* end of if-else (sT39_89)*/
            if (sT311_116)
             {
              byte3 = (byte3 + 1);
              read_mem = 0;
              read_mem = 1;
              sT53_122 = sT303_122;
              sT54_122 = sT281_122;
              sT55_122 = sT304_122;
              pc = sT305_122;
              adbus = (3840 + byte3);
             }  /* end of if-else (sT311_116)*/
           } /* sT44_89           */
          else
           {
            sT57_133 = (sT272_133 == 0);
            sT317_141 = (sT307_141 / 16);
            sT318_141 = (sT308_141 / 8);
            sT56_133 = sT272_133;
            if (sT57_133)
             {
              ac = databus_i;
             } /* sT57_133             */
            else
             {
              c = (sT312_141 / 4);
              z = (sT313_141 / 2);
              flag = sT281_122;
              sT58_141 = sT307_141;
              i = sT317_141;
              sT59_141 = sT308_141;
              v = sT318_141;
              sT60_141 = sT312_141;
              sT61_141 = sT313_141;
              n = (sT281_122 % 2);
             }  /* end of if-else (sT57_133)*/
           }  /* end of if-else (sT44_89)*/
          byte3 = (byte3 + 1);
          read_mem = 0;
         } /* sT37_81         */
        else
         {
          sT63_169 = (sT272_133 == 0);
          byte3 = sT237_166;
          adbus = sT245_166;
          sT62_169 = sT272_133;
          write_mem = 1;
          write_mem = 0;
          if (sT63_169)
           {
            databus_o = ac;
           } /* sT63_169           */
          else
           {
            databus_o = flag;
           }  /* end of if-else (sT63_169)*/
         }  /* end of if-else (sT37_81)*/
       } /* sT269_69       */
      else
       {
        sT79_251 = (databus_i == 10);
        sT84_264 = (databus_i == 11);
        sT64_191 = sT277_191;
        sT65_195 = sT289_195;
        sT70_216 = sT301_216;
        sT74_238 = sT302_238;
        if (sT277_191)
         {
          ac = 0;
         }  /* end of if-else (sT277_191)*/
        if (sT289_195)
         {
          ac = (256 - ac);
          sT66_198 = (ac == 0);
          n = (ac / 128);
          if (sT66_198)
           {
            z = 1;
           } /* sT66_198           */
          else
           {
            z = 0;
           }  /* end of if-else (sT66_198)*/
         }  /* end of if-else (sT289_195)*/
        sT67_204 = (databus_i == 4);
        sT68_208 = (databus_i == 5);
        sT319_218 = (ac % 128);
        sT320_218 = (ac / 128);
        if (sT67_204)
         {
          c = sT253_206;
         }  /* end of if-else (sT67_204)*/
        if (sT68_208)
         {
          i = 1;
         }  /* end of if-else (sT68_208)*/
        sT69_212 = (databus_i == 7);
        sT321_218 = (sT319_218 * 2);
        if (sT69_212)
         {
          i = 0;
         }  /* end of if-else (sT69_212)*/
        if (sT301_216)
         {
          sT73_229 = (sT321_218 == 0);
          n = (sT321_218 / 128);
          c = sT320_218;
          sT71_218 = sT319_218;
          ac = sT321_218;
          sT72_221 = (sT320_218 != n);
          if (sT72_221)
           {
            v = 1;
           } /* sT72_221           */
          else
           {
            v = 0;
           }  /* end of if-else (sT72_221)*/
          if (sT73_229)
           {
            z = 1;
           } /* sT73_229           */
          else
           {
            z = 0;
           }  /* end of if-else (sT73_229)*/
         }  /* end of if-else (sT301_216)*/
        if (sT302_238)
         {
          sT76_240 = (ac / 128);
          sT75_240 = (ac / 2);
          sT77_240 = (sT76_240 * 128);
          ac = (sT77_240 + sT75_240);
          sT78_241 = (ac == 0);
          n = (ac / 128);
          if (sT78_241)
           {
            z = 1;
           } /* sT78_241           */
          else
           {
            z = 0;
           }  /* end of if-else (sT78_241)*/
         }  /* end of if-else (sT302_238)*/
        if (sT79_251)
         {
          sT81_253 = (ac % 128);
          sT80_253 = (ac / 128);
          sT82_253 = (sT81_253 * 2);
          ac = (sT82_253 + sT80_253);
          sT83_254 = (ac == 0);
          n = (ac / 128);
          if (sT83_254)
           {
            z = 1;
           } /* sT83_254           */
          else
           {
            z = 0;
           }  /* end of if-else (sT83_254)*/
         }  /* end of if-else (sT79_251)*/
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
       }  /* end of if-else (sT269_69)*/
     } /* sT23_66     */
    else
     {
      sT322_302 = (pc + 1);
      sT326_380 = (z == 0);
      sT323_380 = sT326_380;
      sT327_380 = (sT234_69 == 3);
      sT324_380 = sT327_380;
      sT325_405 = (pc % 256);
      sT329_380 = ((sT327_380) && (sT326_380));
      sT328_380 = sT329_380;
      sT330_380 = ((sT300_380) || (sT329_380));
      adbus = pc;
      sT89_289 = sT255_305;
      byte2 = databus_i;
      sT90_295 = sT255_305;
      sT91_300 = sT18_66;
      sT92_305 = sT255_305;
      sT93_305 = sT246_305;
      sT94_305 = sT231_305;
      sT95_305 = sT247_305;
      sT96_305 = sT252_305;
      sT97_305 = sT259_305;
      if (sT255_305)
       {
        inta = 1;
       } /* sT255_305       */
      else
       {
        read_mem = 1;
       }  /* end of if-else (sT255_305)*/
      if (sT255_305)
       {
        inta = 0;
       } /* sT255_305       */
      else
       {
        read_mem = 0;
       }  /* end of if-else (sT255_305)*/
      if (sT18_66)
       {
        pc = sT322_302;
       }  /* end of if-else (sT18_66)*/
      if (sT259_305)
       {
        sT332_319 = (databus_i != 252);
        sT98_319 = sT332_319;
        sT331_373 = (pc / 256);
        databus_o = (pc % 256);
        adbus = 4095;
        read_mem = 1;
        byte3 = databus_i;
        read_mem = 0;
        byte3 = sT228_311;
        sT99_344 = sT255_305;
        sT100_370 = sT332_319;
        if (sT98_319)
         {
          adbus = sT254_325;
          databus_o = sT331_373;
          write_mem = 1;
          write_mem = 0;
          byte3 = sT233_325;
         }  /* end of if-else (sT98_319)*/
        sT333_349 = (byte3 - 1);
        adbus = (3840 + byte3);
        sT334_373 = (sT331_373 * 256);
        write_mem = 1;
        write_mem = 0;
        if (sT255_305)
         {
          adbus = (3840 + sT333_349);
          byte3 = sT333_349;
          databus_o = flag;
          write_mem = 1;
          write_mem = 0;
          i = 0;
         }  /* end of if-else (sT255_305)*/
        sT335_373 = (sT334_373 + databus_i);
        databus_o = byte3;
        adbus = 4095;
        write_mem = 1;
        write_mem = 0;
        if (sT98_319)
         {
          sT101_371 = sT234_69;
          sT102_371 = sT273_405;
          pc = sT276_371;
         } /* sT98_319         */
        else
         {
          sT103_373 = sT331_373;
          sT104_373 = sT334_373;
          pc = sT335_373;
         }  /* end of if-else (sT98_319)*/
       } /* sT259_305       */
      else
       {
        sT336_405 = (sT273_405 + sT325_405);
        sT337_380 = (c == 1);
        sT166_380 = sT337_380;
        sT338_380 = (sT234_69 == 4);
        sT167_380 = sT338_380;
        sT339_380 = ((sT338_380) && (sT337_380));
        sT168_380 = sT339_380;
        sT186_380 = ((sT330_380) || (sT339_380));
        sT105_376 = sT231_305;
        sT106_376 = sT263_376;
        if (sT263_376)
         {
          sT340_380 = (c == 0);
          sT159_380 = sT340_380;
          sT341_380 = (sT234_69 == 6);
          sT160_380 = sT341_380;
          sT342_380 = ((sT341_380) && (sT340_380));
          sT161_380 = sT342_380;
          sT162_380 = ((sT342_380) && (sT323_380));
          byte1_temp = sT234_69;
          sT108_380 = sT267_380;
          sT111_380 = sT278_380;
          sT114_380 = sT323_380;
          sT119_380 = sT278_380;
          sT122_380 = sT267_380;
          sT125_380 = sT290_380;
          sT130_380 = sT267_380;
          sT133_380 = sT278_380;
          sT139_380 = sT278_380;
          sT142_380 = sT267_380;
          sT153_380 = sT290_380;
          sT154_380 = sT166_380;
          sT158_380 = sT323_380;
          sT163_380 = sT340_380;
          sT169_380 = sT323_380;
          sT170_380 = sT324_380;
          sT171_380 = sT328_380;
          sT172_380 = sT290_380;
          sT173_380 = sT293_380;
          sT174_380 = sT298_380;
          sT175_380 = sT278_380;
          sT176_380 = sT279_380;
          sT177_380 = sT283_380;
          sT178_380 = sT267_380;
          sT179_380 = sT270_380;
          sT180_380 = sT275_380;
          sT181_380 = sT280_380;
          sT182_380 = sT285_380;
          sT183_380 = sT288_380;
          sT184_380 = sT300_380;
          sT185_380 = sT330_380;
          sT343_380 = (sT234_69 == 5);
          sT164_380 = sT343_380;
          sT344_380 = (sT234_69 == 7);
          sT155_380 = sT344_380;
          sT345_380 = ((sT343_380) && (sT159_380));
          sT165_380 = sT345_380;
          sT346_380 = ((sT344_380) && (sT166_380));
          sT156_380 = sT346_380;
          sT187_380 = ((sT186_380) || (sT345_380));
          sT157_380 = ((sT346_380) && (sT290_380));
          sT347_380 = (v == 0);
          sT141_380 = sT347_380;
          sT349_380 = (v == 1);
          sT150_380 = sT349_380;
          sT348_380 = ((sT187_380) || (sT162_380));
          sT188_380 = sT348_380;
          sT350_380 = ((sT267_380) && (sT347_380));
          sT143_380 = sT350_380;
          sT189_380 = ((sT348_380) || (sT157_380));
          sT120_380 = ((sT278_380) && (sT349_380));
          sT107_380 = sT349_380;
          sT110_380 = sT347_380;
          sT118_380 = sT349_380;
          sT121_380 = sT347_380;
          sT123_380 = sT350_380;
          sT129_380 = sT349_380;
          sT132_380 = sT347_380;
          sT138_380 = sT349_380;
          sT147_380 = sT347_380;
          sT351_380 = (sT234_69 == 8);
          sT151_380 = sT351_380;
          sT352_380 = (sT234_69 == 10);
          sT144_380 = sT352_380;
          sT152_380 = ((sT351_380) && (sT150_380));
          sT353_380 = ((sT278_380) && (sT141_380));
          sT134_380 = sT353_380;
          sT140_380 = ((sT278_380) || (sT150_380));
          sT145_380 = ((sT352_380) && (sT143_380));
          sT112_380 = sT353_380;
          sT354_380 = (sT234_69 == 9);
          sT148_380 = sT354_380;
          sT135_380 = (sT234_69 == 11);
          sT149_380 = ((sT354_380) && (sT141_380));
          sT190_380 = ((sT189_380) || (sT152_380));
          sT109_380 = ((sT267_380) && (sT150_380));
          sT124_380 = ((sT143_380) || (sT120_380));
          sT127_380 = (sT234_69 == 14);
          sT116_380 = (sT234_69 == 15);
          sT131_380 = ((sT267_380) || (sT150_380));
          sT136_380 = ((sT135_380) && (sT134_380));
          sT146_380 = ((sT145_380) || (sT140_380));
          sT191_380 = ((sT190_380) || (sT149_380));
          sT113_380 = ((sT134_380) || (sT109_380));
          sT126_380 = ((sT290_380) || (sT124_380));
          sT137_380 = ((sT136_380) || (sT131_380));
          sT192_380 = ((sT191_380) || (sT146_380));
          sT355_380 = ((sT323_380) || (sT113_380));
          sT115_380 = sT355_380;
          sT128_380 = ((sT127_380) && (sT126_380));
          sT193_380 = ((sT192_380) || (sT137_380));
          sT117_380 = ((sT116_380) && (sT355_380));
          sT356_380 = ((sT193_380) || (sT128_380));
          sT194_380 = sT356_380;
          sT195_380 = ((sT356_380) || (sT117_380));
          if (sT195_380)
           {
            pc = databus_i;
           }  /* end of if-else (sT195_380)*/
         } /* sT263_376         */
        else
         {
          sT357_433 = (sT230_66 == 0);
          sT358_435 = (sT230_66 == 1);
          sT359_405 = (sT336_405 / 256);
          sT196_403 = sT249_403;
          sT197_403 = sT257_403;
          sT204_413 = sT230_66;
          sT205_413 = sT271_413;
          sT360_437 = (sT230_66 == 2);
          sT198_403 = (sT257_403 == 1);
          sT361_405 = (sT359_405 * 256);
          if (sT198_403)
           {
            sT363_405 = (sT361_405 + databus_i);
            sT362_405 = sT363_405;
            sT199_405 = sT325_405;
            sT200_405 = sT234_69;
            sT201_405 = sT273_405;
            adbus = sT336_405;
            sT202_405 = sT359_405;
            sT203_405 = sT361_405;
            adbus = sT363_405;
            read_mem = 1;
            byte2 = databus_i;
            read_mem = 0;
           }  /* end of if-else (sT198_403)*/
          if (sT271_413)
           {
            pc = (sT234_69 + byte2);
            sT206_419 = sT234_69;
           } /* sT271_413           */
          else
           {
            sT364_423 = (sT273_405 + byte2);
            sT220_451 = (sT230_66 == 3);
            sT207_421 = sT230_66;
            sT208_421 = sT294_421;
            if (sT294_421)
             {
              sT209_423 = sT234_69;
              sT210_423 = sT273_405;
              adbus = sT364_423;
              databus_o = sT364_423;
              write_mem = 1;
              write_mem = 0;
             } /* sT294_421             */
            else
             {
              sT211_430 = sT234_69;
              sT212_430 = sT273_405;
              adbus = sT364_423;
              read_mem = 1;
              ibyte1 = sT230_66;
              sT213_433 = sT357_433;
              sT214_435 = sT358_435;
              sT215_437 = sT360_437;
              read_mem = 0;
              if (sT357_433)
               {
                ac = databus_i;
               }  /* end of if-else (sT357_433)*/
              if (sT358_435)
               {
                ac = (ac & databus_i);
               }  /* end of if-else (sT358_435)*/
              if (sT360_437)
               {
                sT217_445 = (ac + databus_i);
                iac = ac;
                idbus = databus_i;
                sT216_441 = sT166_380;
                if (sT166_380)
                 {
                  icarry = 1;
                 } /* sT166_380                 */
                else
                 {
                  icarry = 0;
                 }  /* end of if-else (sT166_380)*/
                sT365_445 = (sT217_445 + icarry);
                itemp = sT365_445;
                temp = sT365_445;
                sT218_445 = (itemp % 256);
                ac = (itemp % 128);
                c = (sT218_445 / 256);
                sT219_445 = (itemp % 512);
                v = (sT219_445 * 512);
               }  /* end of if-else (sT360_437)*/
              if (sT220_451)
               {
                sT222_459 = (ac - databus_i);
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
                sT366_459 = (sT222_459 - icarry);
                itemp = sT366_459;
                temp = sT366_459;
                ac = (itemp % 128);
                sT223_459 = (itemp % 256);
                sT224_459 = (itemp % 512);
                c = (sT223_459 / 256);
                v = (sT224_459 * 512);
               }  /* end of if-else (sT220_451)*/
              sT225_466 = (ac == 0);
              sT226_470 = (ac % 128);
              if (sT225_466)
               {
                z = 1;
               } /* sT225_466               */
              else
               {
                z = 0;
               }  /* end of if-else (sT225_466)*/
              n = (sT226_470 * 128);
             }  /* end of if-else (sT294_421)*/
           }  /* end of if-else (sT271_413)*/
         }  /* end of if-else (sT263_376)*/
       }  /* end of if-else (sT259_305)*/
     }  /* end of if-else (sT23_66)*/
   }  /* end of if-else (sT0_15)*/
  return   0;

}

