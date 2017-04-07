
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
 int sT244_66;
 int sT245_66;
 int sT246_66;
 int sT247_66;
 int sT248_66;
 int sT249_97;
 int sT250_166;
 int sT251_305;
 int sT252_305;
 int sT253_81;
 int sT254_403;
 int sT255_305;
 int sT256_305;
 int sT257_305;
 int sT258_206;
 int sT259_325;
 int sT260_305;
 int sT261_69;
 int sT262_403;
 int sT263_305;
 int sT264_305;
 int sT265_69;
 int sT266_69;
 int sT267_69;
 int sT268_376;
 int sT269_69;
 int sT270_69;
 int sT271_69;
 int sT272_380;
 int sT273_69;
 int sT274_69;
 int sT275_69;
 int sT276_380;
 int sT277_413;
 int sT278_380;
 int sT279_380;
 int sT280_380;
 int sT281_191;
 int sT282_380;
 int sT283_133;
 int sT284_380;
 int sT285_380;
 int sT286_405;
 int sT287_122;
 int sT288_380;
 int sT289_380;
 int sT290_380;
 int sT291_380;
 int sT292_380;
 int sT293_380;
 int sT294_380;
 int sT295_380;
 int sT296_380;
 int sT297_380;
 int sT298_380;
 int sT299_371;
 int sT300_195;
 int sT301_380;
 int sT302_97;
 int sT303_97;
 int sT304_380;
 int sT305_421;
 int sT306_97;
 int sT307_97;
 int sT308_380;
 int sT309_380;
 int sT310_380;
 int sT311_380;
 int sT312_380;
 int sT313_380;
 int sT314_302;
 int sT315_216;
 int sT316_380;
 int sT317_405;
 int sT318_122;
 int sT319_89;
 int sT320_122;
 int sT321_141;
 int sT322_89;
 int sT323_89;
 int sT324_122;
 int sT325_116;
 int sT326_141;
 int sT327_141;
 int sT328_89;
 int sT329_122;
 int sT330_122;
 int sT331_149;
 int sT332_141;
 int sT333_141;
 int sT334_149;
 int sT335_149;
 int sT336_149;
 int sT337_149;
 int sT338_149;
 int sT339_197;
 int sT340_264;
 int sT341_204;
 int sT342_218;
 int sT343_218;
 int sT344_218;
 int sT345_229;
 int sT346_218;
 int sT347_221;
 int sT348_240;
 int sT349_240;
 int sT350_253;
 int sT351_253;
 int sT352_266;
 int sT353_266;
 int sT354_405;
 int sT355_380;
 int sT356_380;
 int sT357_380;
 int sT358_380;
 int sT359_380;
 int sT360_380;
 int sT361_380;
 int sT362_380;
 int sT363_380;
 int sT364_433;
 int sT365_405;
 int sT366_380;
 int sT367_380;
 int sT368_380;
 int sT369_380;
 int sT370_380;
 int sT371_380;
 int sT372_380;
 int sT373_380;
 int sT374_373;
 int sT375_405;
 int sT376_380;
 int sT377_380;
 int sT378_380;
 int sT379_380;
 int sT380_380;
 int sT381_380;
 int sT382_380;
 int sT383_380;
 int sT384_373;
 int sT385_319;
 int sT386_349;
 int sT387_337;
 int sT388_349;
 int sT389_349;
 int sT390_373;
 int sT391_380;
 int sT392_380;
 int sT393_380;
 int sT394_380;
 int sT395_380;
 int sT396_380;
 int sT397_380;
 int sT398_380;
 int sT399_380;
 int sT400_380;
 int sT401_380;
 int sT402_380;
 int sT403_380;
 int sT404_380;
 int sT405_405;
 int sT406_435;
 int sT407_437;
 int sT408_451;
 int sT409_419;
 int sT410_423;
 int sT411_436;
 int sT412_445;
 int sT413_445;
 int sT414_459;

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
      sT237_166 = (databus_i - 1);
      sT238_86 = (3840 + databus_i);
      sT241_66 = (sT230_66 == 14);
      sT21_66 = sT241_66;
      sT244_66 = 0;
      sT18_66 = sT244_66;
      sT239_69 = (sT234_69 / 4);
      sT240_81 = (databus_i % 4);
      sT243_66 = ((sT241_66) || (sT19_66));
      sT245_66 = sT243_66;
      sT22_66 = sT245_66;
      sT23_66 = ((sT245_66) && (sT244_66));
      sT17_59 = sT244_66;
     } /* sT3_36     */
    else
     {
      sT237_166 = (databus_i - 1);
      sT238_86 = (3840 + databus_i);
      sT242_66 = (sT230_66 == 14);
      sT21_66 = sT242_66;
      sT247_66 = 1;
      sT18_66 = sT247_66;
      sT239_69 = (sT234_69 / 4);
      sT240_81 = (databus_i % 4);
      sT246_66 = ((sT242_66) || (sT19_66));
      sT248_66 = sT246_66;
      sT22_66 = sT248_66;
      sT23_66 = ((sT248_66) && (sT247_66));
      i_status = 0;
      sT17_59 = sT247_66;
     }  /* end of if-else (sT3_36)*/
    sT249_97 = (3840 + sT232_97);
    sT250_166 = (3840 + sT237_166);
    sT255_305 = (databus_i == 252);
    sT251_305 = sT255_305;
    sT256_305 = (sT231_305 == 12);
    sT252_305 = sT256_305;
    sT253_81 = (sT240_81 / 2);
    sT254_403 = (databus_i % 32);
    sT257_305 = ((sT256_305) || (sT255_305));
    sT258_206 = (1 - c);
    sT259_325 = (3840 + sT228_311);
    sT263_305 = (i_status == 1);
    sT260_305 = sT263_305;
    sT265_69 = (sT239_69 == 3);
    sT261_69 = sT265_69;
    sT262_403 = (sT254_403 / 16);
    sT8_41 = (v % 2);
    sT264_305 = ((sT257_305) || (sT263_305));
    sT266_69 = ((sT265_69) || (sT19_66));
    sT15_48 = sT263_305;
    sT16_54 = sT263_305;
    sT269_69 = (sT231_305 == 3);
    sT267_69 = sT269_69;
    sT268_376 = (sT231_305 == 15);
    sT10_41 = (i % 2);
    sT6_41 = (c % 2);
    sT270_69 = ((sT266_69) || (sT269_69));
    if (sT260_305)
     {
      sT9_41 = (sT8_41 * 8);
      sT11_41 = (sT10_41 * 16);
      inta = 1;
      sT273_69 = (sT235_69 == 6);
      sT271_69 = sT273_69;
      sT272_380 = (n == 1);
      sT275_69 = ((sT270_69) || (sT273_69));
      sT12_41 = (sT11_41 + sT9_41);
      sT7_41 = (sT6_41 * 4);
      sT4_41 = (z % 2);
      sT278_380 = (sT234_69 == 0);
      sT276_380 = sT278_380;
      sT277_413 = (sT230_66 == 4);
      sT280_380 = ((sT278_380) && (sT272_380));
      sT13_41 = (sT12_41 + sT7_41);
      sT5_41 = (sT4_41 * 2);
      sT281_191 = (databus_i == 1);
      sT282_380 = (n == 0);
      sT283_133 = (databus_i % 2);
      sT14_41 = (sT13_41 + sT5_41);
      sT288_380 = (sT234_69 == 1);
      sT284_380 = sT288_380;
      sT291_380 = (sT234_69 == 13);
      sT285_380 = sT291_380;
      sT286_405 = (sT234_69 * 256);
      sT287_122 = (databus_i % 16);
      sT294_380 = ((sT288_380) && (sT282_380));
      sT290_380 = sT294_380;
      sT295_380 = ((sT291_380) || (sT280_380));
      sT293_380 = sT295_380;
      sT298_380 = ((sT295_380) || (sT294_380));
      flag = (sT14_41 + n);
      sT299_371 = (sT286_405 + databus_i);
      sT300_195 = (databus_i == 2);
      sT301_380 = (z == 1);
      sT302_97 = (sT254_403 % 32);
      sT303_97 = (sT254_403 % 16);
     } /* sT260_305     */
    else
     {
      sT274_69 = (sT235_69 == 6);
      sT271_69 = sT274_69;
      sT272_380 = (n == 1);
      sT9_41 = (sT8_41 * 8);
      sT11_41 = (sT10_41 * 16);
      sT275_69 = ((sT270_69) || (sT274_69));
      read_mem = 1;
      sT12_41 = (sT11_41 + sT9_41);
      sT279_380 = (sT234_69 == 0);
      sT276_380 = sT279_380;
      sT277_413 = (sT230_66 == 4);
      sT7_41 = (sT6_41 * 4);
      sT4_41 = (z % 2);
      sT280_380 = ((sT279_380) && (sT272_380));
      sT13_41 = (sT12_41 + sT7_41);
      sT281_191 = (databus_i == 1);
      sT282_380 = (n == 0);
      sT5_41 = (sT4_41 * 2);
      sT283_133 = (databus_i % 2);
      sT14_41 = (sT13_41 + sT5_41);
      sT289_380 = (sT234_69 == 1);
      sT284_380 = sT289_380;
      sT292_380 = (sT234_69 == 13);
      sT285_380 = sT292_380;
      sT286_405 = (sT234_69 * 256);
      sT287_122 = (databus_i % 16);
      sT296_380 = ((sT289_380) && (sT282_380));
      sT290_380 = sT296_380;
      sT297_380 = ((sT292_380) || (sT280_380));
      sT293_380 = sT297_380;
      sT298_380 = ((sT297_380) || (sT296_380));
      flag = (sT14_41 + n);
      sT299_371 = (sT286_405 + databus_i);
      sT300_195 = (databus_i == 2);
      sT301_380 = (z == 1);
      sT302_97 = (sT254_403 % 32);
      sT303_97 = (sT254_403 % 16);
     }  /* end of if-else (sT260_305)*/
    if (sT260_305)
     {
      inta = 0;
      sT308_380 = (sT234_69 == 2);
      sT304_380 = sT308_380;
      sT305_421 = (sT230_66 == 5);
      sT306_97 = (sT254_403 % 8);
      sT307_97 = (sT254_403 % 4);
      sT311_380 = ((sT308_380) && (sT301_380));
      sT310_380 = sT311_380;
      sT313_380 = ((sT298_380) || (sT311_380));
     } /* sT260_305     */
    else
     {
      sT309_380 = (sT234_69 == 2);
      sT304_380 = sT309_380;
      sT305_421 = (sT230_66 == 5);
      sT306_97 = (sT254_403 % 8);
      sT307_97 = (sT254_403 % 4);
      sT312_380 = ((sT309_380) && (sT301_380));
      sT310_380 = sT312_380;
      sT313_380 = ((sT298_380) || (sT312_380));
      read_mem = 0;
     }  /* end of if-else (sT260_305)*/
    if (sT18_66)
     {
      pc = sT227_61;
      sT314_302 = (sT227_61 + 1);
      sT315_216 = (databus_i == 8);
      sT316_380 = (z == 0);
      sT317_405 = (sT227_61 % 256);
      sT318_122 = (databus_i % 256);
     } /* sT18_66     */
    else
     {
      sT314_302 = (pc + 1);
      sT315_216 = (databus_i == 8);
      sT316_380 = (z == 0);
      sT317_405 = (pc % 256);
      sT318_122 = (databus_i % 256);
     }  /* end of if-else (sT18_66)*/
    if (sT23_66)
     {
      if (sT275_69)
       {
        sT37_81 = (sT253_81 == 1);
        sT322_89 = (sT234_69 == 3);
        sT319_89 = sT322_89;
        sT320_122 = (sT287_122 * 256);
        sT321_141 = (sT287_122 % 32);
        sT323_89 = ((sT19_66) || (sT322_89));
        sT24_69 = sT235_69;
        sT25_69 = sT271_69;
        sT26_69 = sT231_305;
        sT27_69 = sT267_69;
        sT28_69 = sT19_66;
        sT29_69 = sT234_69;
        sT30_69 = sT239_69;
        sT31_69 = sT261_69;
        sT32_69 = sT266_69;
        sT33_69 = sT270_69;
        sT34_69 = sT275_69;
        adbus = 4095;
        read_mem = 1;
        byte3 = databus_i;
        read_mem = 0;
        sT35_81 = sT240_81;
        sT36_81 = sT253_81;
        if (sT37_81)
         {
          sT324_122 = (sT320_122 + sT318_122);
          sT328_89 = (sT234_69 == 6);
          sT39_89 = sT328_89;
          sT325_116 = (sT234_69 != 3);
          sT326_141 = (sT287_122 % 16);
          sT327_141 = (sT287_122 % 8);
          sT44_89 = ((sT323_89) || (sT328_89));
          adbus = sT238_86;
          read_mem = 1;
          sT38_89 = sT234_69;
          sT40_89 = sT234_69;
          sT41_89 = sT319_89;
          sT42_89 = sT19_66;
          sT43_89 = sT323_89;
          if (sT44_89)
           {
            if (sT39_89)
             {
              i = (sT302_97 / 16);
              v = (sT303_97 / 8);
              sT45_92 = sT234_69;
              sT46_92 = sT39_89;
              flag = sT254_403;
              sT47_97 = sT302_97;
              sT48_97 = sT303_97;
              sT49_97 = sT306_97;
              sT50_97 = sT307_97;
              read_mem = 0;
              byte3 = sT232_97;
              adbus = sT249_97;
              read_mem = 1;
              sT329_122 = (sT232_97 + 1);
              c = (sT306_97 / 4);
              z = (sT307_97 / 2);
              sT330_122 = (3840 + sT329_122);
              n = (sT254_403 % 2);
             } /* sT39_89             */
            else
             {
              sT329_122 = (byte3 + 1);
              sT45_92 = sT234_69;
              sT46_92 = sT39_89;
              sT330_122 = (3840 + sT329_122);
             }  /* end of if-else (sT39_89)*/
            if (sT325_116)
             {
              pc = databus_i;
              sT51_116 = sT234_69;
              sT52_116 = sT325_116;
              read_mem = 0;
              byte3 = sT329_122;
              adbus = sT330_122;
              read_mem = 1;
              sT53_122 = sT318_122;
              sT54_122 = sT287_122;
              sT55_122 = sT320_122;
              pc = sT324_122;
              sT335_149 = (sT329_122 + 1);
              sT331_149 = sT335_149;
              sT334_149 = 0;
              sT338_149 = sT335_149;
             } /* sT325_116             */
            else
             {
              sT51_116 = sT234_69;
              sT52_116 = sT325_116;
              sT336_149 = (byte3 + 1);
              sT331_149 = sT336_149;
              sT334_149 = 0;
              sT338_149 = sT336_149;
             }  /* end of if-else (sT325_116)*/
           } /* sT44_89           */
          else
           {
            sT337_149 = (byte3 + 1);
            sT331_149 = sT337_149;
            sT57_133 = (sT283_133 == 0);
            sT332_141 = (sT287_122 % 4);
            sT333_141 = (sT321_141 / 16);
            sT56_133 = sT283_133;
            sT334_149 = 0;
            sT338_149 = sT337_149;
            if (sT57_133)
             {
              ac = databus_i;
             } /* sT57_133             */
            else
             {
              v = (sT326_141 / 8);
              c = (sT327_141 / 4);
              flag = sT287_122;
              sT58_141 = sT321_141;
              i = sT333_141;
              sT59_141 = sT326_141;
              sT60_141 = sT327_141;
              sT61_141 = sT332_141;
              z = (sT332_141 / 2);
              n = (sT287_122 % 2);
             }  /* end of if-else (sT57_133)*/
           }  /* end of if-else (sT44_89)*/
          read_mem = sT334_149;
          byte3 = sT338_149;
         } /* sT37_81         */
        else
         {
          sT63_169 = (sT283_133 == 0);
          byte3 = sT237_166;
          adbus = sT250_166;
          sT62_169 = sT283_133;
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
       } /* sT275_69       */
      else
       {
        if (sT281_191)
         {
          sT24_69 = sT235_69;
          sT25_69 = sT271_69;
          sT26_69 = sT231_305;
          sT27_69 = sT267_69;
          sT28_69 = sT19_66;
          sT29_69 = sT234_69;
          sT30_69 = sT239_69;
          sT31_69 = sT261_69;
          sT32_69 = sT266_69;
          sT33_69 = sT270_69;
          sT34_69 = sT275_69;
          sT64_191 = sT281_191;
          ac = 0;
          sT339_197 = 256;
          sT74_238 = (databus_i == 9);
          sT79_251 = (databus_i == 10);
          sT70_216 = sT315_216;
         } /* sT281_191         */
        else
         {
          sT339_197 = (256 - ac);
          sT74_238 = (databus_i == 9);
          sT79_251 = (databus_i == 10);
          sT24_69 = sT235_69;
          sT25_69 = sT271_69;
          sT26_69 = sT231_305;
          sT27_69 = sT267_69;
          sT28_69 = sT19_66;
          sT29_69 = sT234_69;
          sT30_69 = sT239_69;
          sT31_69 = sT261_69;
          sT32_69 = sT266_69;
          sT33_69 = sT270_69;
          sT34_69 = sT275_69;
          sT64_191 = sT281_191;
          sT70_216 = sT315_216;
         }  /* end of if-else (sT281_191)*/
        if (sT300_195)
         {
          sT66_198 = (sT339_197 == 0);
          n = (sT339_197 / 128);
          sT65_195 = sT300_195;
          ac = sT339_197;
          if (sT66_198)
           {
            z = 1;
            sT340_264 = (databus_i == 11);
            sT341_204 = (databus_i == 4);
            sT342_218 = (ac % 128);
            sT343_218 = (ac / 128);
           } /* sT66_198           */
          else
           {
            z = 0;
            sT340_264 = (databus_i == 11);
            sT341_204 = (databus_i == 4);
            sT342_218 = (ac % 128);
            sT343_218 = (ac / 128);
           }  /* end of if-else (sT66_198)*/
         } /* sT300_195         */
        else
         {
          sT340_264 = (databus_i == 11);
          sT341_204 = (databus_i == 4);
          sT342_218 = (ac % 128);
          sT343_218 = (ac / 128);
          sT65_195 = sT300_195;
         }  /* end of if-else (sT300_195)*/
        if (sT341_204)
         {
          sT67_204 = sT341_204;
          c = sT258_206;
          sT68_208 = (databus_i == 5);
          sT69_212 = (databus_i == 7);
          sT344_218 = (sT342_218 * 2);
          sT84_264 = sT340_264;
         } /* sT341_204         */
        else
         {
          sT68_208 = (databus_i == 5);
          sT69_212 = (databus_i == 7);
          sT344_218 = (sT342_218 * 2);
          sT67_204 = sT341_204;
          sT84_264 = sT340_264;
         }  /* end of if-else (sT341_204)*/
        if (sT68_208)
         {
          i = 1;
          sT345_229 = (sT344_218 == 0);
          sT346_218 = (sT344_218 / 128);
         } /* sT68_208         */
        else
         {
          sT345_229 = (sT344_218 == 0);
          sT346_218 = (sT344_218 / 128);
         }  /* end of if-else (sT68_208)*/
        if (sT69_212)
         {
          i = 0;
          sT347_221 = (sT343_218 != sT346_218);
         } /* sT69_212         */
        else
         {
          sT347_221 = (sT343_218 != sT346_218);
         }  /* end of if-else (sT69_212)*/
        if (sT315_216)
         {
          if (sT347_221)
           {
            c = sT343_218;
            sT71_218 = sT342_218;
            ac = sT344_218;
            n = sT346_218;
            sT72_221 = sT347_221;
            v = 1;
            sT73_229 = sT345_229;
           } /* sT347_221           */
          else
           {
            c = sT343_218;
            sT71_218 = sT342_218;
            ac = sT344_218;
            n = sT346_218;
            sT72_221 = sT347_221;
            v = 0;
            sT73_229 = sT345_229;
           }  /* end of if-else (sT347_221)*/
          if (sT345_229)
           {
            z = 1;
            sT348_240 = (ac / 128);
            sT349_240 = (ac / 2);
           } /* sT345_229           */
          else
           {
            z = 0;
            sT348_240 = (ac / 128);
            sT349_240 = (ac / 2);
           }  /* end of if-else (sT345_229)*/
         } /* sT315_216         */
        else
         {
          sT348_240 = (ac / 128);
          sT349_240 = (ac / 2);
         }  /* end of if-else (sT315_216)*/
        if (sT74_238)
         {
          sT77_240 = (sT348_240 * 128);
          sT75_240 = sT349_240;
          sT76_240 = sT348_240;
          ac = (sT77_240 + sT349_240);
          sT78_241 = (ac == 0);
          n = (ac / 128);
          if (sT78_241)
           {
            z = 1;
            sT350_253 = (ac % 128);
            sT351_253 = (ac / 128);
           } /* sT78_241           */
          else
           {
            z = 0;
            sT350_253 = (ac % 128);
            sT351_253 = (ac / 128);
           }  /* end of if-else (sT78_241)*/
         } /* sT74_238         */
        else
         {
          sT350_253 = (ac % 128);
          sT351_253 = (ac / 128);
         }  /* end of if-else (sT74_238)*/
        if (sT79_251)
         {
          sT82_253 = (sT350_253 * 2);
          sT80_253 = sT351_253;
          sT81_253 = sT350_253;
          ac = (sT82_253 + sT351_253);
          sT83_254 = (ac == 0);
          n = (ac / 128);
          if (sT83_254)
           {
            z = 1;
            sT352_266 = (ac % 2);
            sT353_266 = (ac / 2);
           } /* sT83_254           */
          else
           {
            z = 0;
            sT352_266 = (ac % 2);
            sT353_266 = (ac / 2);
           }  /* end of if-else (sT83_254)*/
         } /* sT79_251         */
        else
         {
          sT352_266 = (ac % 2);
          sT353_266 = (ac / 2);
         }  /* end of if-else (sT79_251)*/
        if (sT340_264)
         {
          sT87_266 = (sT352_266 * 128);
          sT85_266 = sT353_266;
          sT86_266 = sT352_266;
          ac = (sT87_266 + sT353_266);
          sT88_267 = (ac == 0);
          if (sT88_267)
           {
            z = 1;
           } /* sT88_267           */
          else
           {
            z = 0;
           }  /* end of if-else (sT88_267)*/
         }  /* end of if-else (sT340_264)*/
       }  /* end of if-else (sT275_69)*/
     } /* sT23_66     */
    else
     {
      if (sT260_305)
       {
        adbus = pc;
        sT89_289 = sT260_305;
        inta = 1;
        sT354_405 = (sT286_405 + sT317_405);
        sT357_380 = (sT234_69 == 3);
        sT355_380 = sT357_380;
        sT356_380 = (c == 1);
        sT360_380 = ((sT357_380) && (sT316_380));
        sT359_380 = sT360_380;
        sT362_380 = ((sT313_380) || (sT360_380));
        byte2 = databus_i;
        sT91_300 = sT18_66;
        sT92_305 = sT260_305;
        sT93_305 = sT251_305;
        sT94_305 = sT231_305;
        sT95_305 = sT252_305;
        sT96_305 = sT257_305;
        sT97_305 = sT264_305;
       } /* sT260_305       */
      else
       {
        sT354_405 = (sT286_405 + sT317_405);
        sT358_380 = (sT234_69 == 3);
        sT355_380 = sT358_380;
        sT356_380 = (c == 1);
        sT361_380 = ((sT358_380) && (sT316_380));
        sT359_380 = sT361_380;
        sT362_380 = ((sT313_380) || (sT361_380));
        adbus = pc;
        sT89_289 = sT260_305;
        read_mem = 1;
        byte2 = databus_i;
        sT91_300 = sT18_66;
        sT92_305 = sT260_305;
        sT93_305 = sT251_305;
        sT94_305 = sT231_305;
        sT95_305 = sT252_305;
        sT96_305 = sT257_305;
        sT97_305 = sT264_305;
       }  /* end of if-else (sT260_305)*/
      if (sT260_305)
       {
        sT90_295 = sT260_305;
        inta = 0;
        sT366_380 = (sT234_69 == 4);
        sT363_380 = sT366_380;
        sT364_433 = (sT230_66 == 0);
        sT365_405 = (sT354_405 / 256);
        sT369_380 = ((sT366_380) && (sT356_380));
        sT368_380 = sT369_380;
        sT371_380 = ((sT362_380) || (sT369_380));
       } /* sT260_305       */
      else
       {
        sT367_380 = (sT234_69 == 4);
        sT363_380 = sT367_380;
        sT364_433 = (sT230_66 == 0);
        sT365_405 = (sT354_405 / 256);
        sT370_380 = ((sT367_380) && (sT356_380));
        sT368_380 = sT370_380;
        sT371_380 = ((sT362_380) || (sT370_380));
        sT90_295 = sT260_305;
        read_mem = 0;
       }  /* end of if-else (sT260_305)*/
      if (sT18_66)
       {
        pc = sT314_302;
        sT376_380 = (c == 0);
        sT372_380 = sT376_380;
        sT377_380 = (sT234_69 == 6);
        sT373_380 = sT377_380;
        sT374_373 = (sT314_302 / 256);
        sT375_405 = (sT365_405 * 256);
        sT381_380 = ((sT377_380) && (sT376_380));
        sT380_380 = sT381_380;
        sT383_380 = ((sT381_380) && (sT316_380));
       } /* sT18_66       */
      else
       {
        sT378_380 = (c == 0);
        sT372_380 = sT378_380;
        sT379_380 = (sT234_69 == 6);
        sT373_380 = sT379_380;
        sT374_373 = (pc / 256);
        sT375_405 = (sT365_405 * 256);
        sT382_380 = ((sT379_380) && (sT378_380));
        sT380_380 = sT382_380;
        sT383_380 = ((sT382_380) && (sT316_380));
       }  /* end of if-else (sT18_66)*/
      if (sT264_305)
       {
        sT385_319 = (databus_i != 252);
        sT98_319 = sT385_319;
        sT384_373 = (sT374_373 * 256);
        databus_o = (pc % 256);
        adbus = 4095;
        read_mem = 1;
        byte3 = databus_i;
        read_mem = 0;
        byte3 = sT228_311;
        sT99_344 = sT260_305;
        sT100_370 = sT385_319;
        if (sT98_319)
         {
          adbus = sT259_325;
          databus_o = sT374_373;
          write_mem = 1;
          write_mem = 0;
          byte3 = sT233_325;
          sT386_349 = (sT233_325 - 1);
          sT387_337 = (3840 + sT233_325);
         } /* sT98_319         */
        else
         {
          sT386_349 = (byte3 - 1);
          sT387_337 = (3840 + byte3);
         }  /* end of if-else (sT98_319)*/
        if (sT260_305)
         {
          sT389_349 = (3840 + sT386_349);
          sT388_349 = sT389_349;
          adbus = sT387_337;
          write_mem = 1;
          write_mem = 0;
          byte3 = sT386_349;
          adbus = sT389_349;
          databus_o = flag;
          write_mem = 1;
          write_mem = 0;
          i = 0;
          sT390_373 = (sT384_373 + databus_i);
         } /* sT260_305         */
        else
         {
          sT390_373 = (sT384_373 + databus_i);
          adbus = sT387_337;
          write_mem = 1;
          write_mem = 0;
         }  /* end of if-else (sT260_305)*/
        if (sT98_319)
         {
          databus_o = byte3;
          adbus = 4095;
          write_mem = 1;
          write_mem = 0;
          sT101_371 = sT234_69;
          sT102_371 = sT286_405;
          pc = sT299_371;
         } /* sT98_319         */
        else
         {
          databus_o = byte3;
          adbus = 4095;
          write_mem = 1;
          write_mem = 0;
          sT103_373 = sT374_373;
          sT104_373 = sT384_373;
          pc = sT390_373;
         }  /* end of if-else (sT98_319)*/
       } /* sT264_305       */
      else
       {
        if (sT268_376)
         {
          sT391_380 = (sT234_69 == 5);
          sT164_380 = sT391_380;
          sT392_380 = (sT234_69 == 7);
          sT155_380 = sT392_380;
          sT393_380 = ((sT391_380) && (sT372_380));
          sT165_380 = sT393_380;
          sT394_380 = ((sT392_380) && (sT356_380));
          sT156_380 = sT394_380;
          sT187_380 = ((sT371_380) || (sT393_380));
          sT157_380 = ((sT394_380) && (sT301_380));
          sT105_376 = sT231_305;
          sT106_376 = sT268_376;
          byte1_temp = sT234_69;
          sT108_380 = sT272_380;
          sT111_380 = sT282_380;
          sT114_380 = sT316_380;
          sT119_380 = sT282_380;
          sT122_380 = sT272_380;
          sT125_380 = sT301_380;
          sT130_380 = sT272_380;
          sT133_380 = sT282_380;
          sT139_380 = sT282_380;
          sT142_380 = sT272_380;
          sT153_380 = sT301_380;
          sT154_380 = sT356_380;
          sT158_380 = sT316_380;
          sT159_380 = sT372_380;
          sT160_380 = sT373_380;
          sT161_380 = sT380_380;
          sT162_380 = sT383_380;
          sT163_380 = sT372_380;
          sT166_380 = sT356_380;
          sT167_380 = sT363_380;
          sT168_380 = sT368_380;
          sT169_380 = sT316_380;
          sT170_380 = sT355_380;
          sT171_380 = sT359_380;
          sT172_380 = sT301_380;
          sT173_380 = sT304_380;
          sT174_380 = sT310_380;
          sT175_380 = sT282_380;
          sT176_380 = sT284_380;
          sT177_380 = sT290_380;
          sT178_380 = sT272_380;
          sT179_380 = sT276_380;
          sT180_380 = sT280_380;
          sT181_380 = sT285_380;
          sT182_380 = sT293_380;
          sT183_380 = sT298_380;
          sT184_380 = sT313_380;
          sT185_380 = sT362_380;
          sT186_380 = sT371_380;
          sT395_380 = (v == 0);
          sT141_380 = sT395_380;
          sT397_380 = (v == 1);
          sT150_380 = sT397_380;
          sT396_380 = ((sT187_380) || (sT383_380));
          sT188_380 = sT396_380;
          sT398_380 = ((sT272_380) && (sT395_380));
          sT143_380 = sT398_380;
          sT189_380 = ((sT396_380) || (sT157_380));
          sT120_380 = ((sT282_380) && (sT397_380));
          sT107_380 = sT397_380;
          sT110_380 = sT395_380;
          sT118_380 = sT397_380;
          sT121_380 = sT395_380;
          sT123_380 = sT398_380;
          sT129_380 = sT397_380;
          sT132_380 = sT395_380;
          sT138_380 = sT397_380;
          sT147_380 = sT395_380;
          sT399_380 = (sT234_69 == 8);
          sT151_380 = sT399_380;
          sT400_380 = (sT234_69 == 10);
          sT144_380 = sT400_380;
          sT152_380 = ((sT399_380) && (sT150_380));
          sT401_380 = ((sT282_380) && (sT141_380));
          sT134_380 = sT401_380;
          sT140_380 = ((sT282_380) || (sT150_380));
          sT145_380 = ((sT400_380) && (sT143_380));
          sT112_380 = sT401_380;
          sT402_380 = (sT234_69 == 9);
          sT148_380 = sT402_380;
          sT135_380 = (sT234_69 == 11);
          sT149_380 = ((sT402_380) && (sT141_380));
          sT190_380 = ((sT189_380) || (sT152_380));
          sT109_380 = ((sT272_380) && (sT150_380));
          sT124_380 = ((sT143_380) || (sT120_380));
          sT127_380 = (sT234_69 == 14);
          sT116_380 = (sT234_69 == 15);
          sT131_380 = ((sT272_380) || (sT150_380));
          sT136_380 = ((sT135_380) && (sT134_380));
          sT146_380 = ((sT145_380) || (sT140_380));
          sT191_380 = ((sT190_380) || (sT149_380));
          sT113_380 = ((sT134_380) || (sT109_380));
          sT126_380 = ((sT301_380) || (sT124_380));
          sT137_380 = ((sT136_380) || (sT131_380));
          sT192_380 = ((sT191_380) || (sT146_380));
          sT403_380 = ((sT316_380) || (sT113_380));
          sT115_380 = sT403_380;
          sT128_380 = ((sT127_380) && (sT126_380));
          sT193_380 = ((sT192_380) || (sT137_380));
          sT117_380 = ((sT116_380) && (sT403_380));
          sT404_380 = ((sT193_380) || (sT128_380));
          sT194_380 = sT404_380;
          sT195_380 = ((sT404_380) || (sT117_380));
          if (sT195_380)
           {
            pc = databus_i;
           }  /* end of if-else (sT195_380)*/
         } /* sT268_376         */
        else
         {
          sT405_405 = (sT375_405 + databus_i);
          sT406_435 = (sT230_66 == 1);
          sT407_437 = (sT230_66 == 2);
          sT105_376 = sT231_305;
          sT106_376 = sT268_376;
          sT196_403 = sT254_403;
          sT197_403 = sT262_403;
          sT204_413 = sT230_66;
          sT205_413 = sT277_413;
          sT198_403 = (sT262_403 == 1);
          sT408_451 = (sT230_66 == 3);
          if (sT198_403)
           {
            sT199_405 = sT317_405;
            sT200_405 = sT234_69;
            sT201_405 = sT286_405;
            adbus = sT354_405;
            sT202_405 = sT365_405;
            sT203_405 = sT375_405;
            adbus = sT405_405;
            read_mem = 1;
            byte2 = databus_i;
            read_mem = 0;
            sT409_419 = (sT234_69 + databus_i);
            sT410_423 = (sT286_405 + databus_i);
           } /* sT198_403           */
          else
           {
            sT409_419 = (sT234_69 + byte2);
            sT410_423 = (sT286_405 + byte2);
           }  /* end of if-else (sT198_403)*/
          if (sT277_413)
           {
            sT206_419 = sT234_69;
            pc = sT409_419;
           } /* sT277_413           */
          else
           {
            if (sT305_421)
             {
              sT207_421 = sT230_66;
              sT208_421 = sT305_421;
              sT209_423 = sT234_69;
              sT210_423 = sT286_405;
              adbus = sT410_423;
              databus_o = sT410_423;
              write_mem = 1;
              write_mem = 0;
             } /* sT305_421             */
            else
             {
              if (sT364_433)
               {
                sT207_421 = sT230_66;
                sT208_421 = sT305_421;
                sT211_430 = sT234_69;
                sT212_430 = sT286_405;
                adbus = sT410_423;
                read_mem = 1;
                ibyte1 = sT230_66;
                sT213_433 = sT364_433;
                ac = databus_i;
                sT411_436 = (databus_i & databus_i);
                sT214_435 = sT406_435;
                sT215_437 = sT407_437;
                sT220_451 = sT408_451;
               } /* sT364_433               */
              else
               {
                sT411_436 = (ac & databus_i);
                sT207_421 = sT230_66;
                sT208_421 = sT305_421;
                sT211_430 = sT234_69;
                sT212_430 = sT286_405;
                adbus = sT410_423;
                read_mem = 1;
                ibyte1 = sT230_66;
                sT213_433 = sT364_433;
                sT214_435 = sT406_435;
                sT215_437 = sT407_437;
                sT220_451 = sT408_451;
               }  /* end of if-else (sT364_433)*/
              if (sT406_435)
               {
                ac = sT411_436;
                sT412_445 = (sT411_436 + databus_i);
                read_mem = 0;
               } /* sT406_435               */
              else
               {
                sT412_445 = (ac + databus_i);
                read_mem = 0;
               }  /* end of if-else (sT406_435)*/
              if (sT407_437)
               {
                if (sT356_380)
                 {
                  iac = ac;
                  idbus = databus_i;
                  sT216_441 = sT356_380;
                  icarry = 1;
                  sT413_445 = (sT412_445 + 1);
                  itemp = sT413_445;
                  sT217_445 = sT412_445;
                  temp = sT413_445;
                 } /* sT356_380                 */
                else
                 {
                  itemp = sT412_445;
                  iac = ac;
                  idbus = databus_i;
                  sT216_441 = sT356_380;
                  icarry = 0;
                  sT217_445 = sT412_445;
                  temp = sT412_445;
                 }  /* end of if-else (sT356_380)*/
                sT218_445 = (itemp % 256);
                ac = (itemp % 128);
                c = (sT218_445 / 256);
                sT219_445 = (itemp % 512);
                v = (sT219_445 * 512);
               }  /* end of if-else (sT407_437)*/
              if (sT408_451)
               {
                sT222_459 = (ac - databus_i);
                sT221_455 = (c == 1);
                iac = ac;
                idbus = databus_i;
                if (sT221_455)
                 {
                  icarry = 1;
                  sT414_459 = (sT222_459 - 1);
                  itemp = sT414_459;
                  temp = sT414_459;
                 } /* sT221_455                 */
                else
                 {
                  itemp = sT222_459;
                  icarry = 0;
                  temp = sT222_459;
                 }  /* end of if-else (sT221_455)*/
                ac = (itemp % 128);
                sT223_459 = (itemp % 256);
                sT224_459 = (itemp % 512);
                c = (sT223_459 / 256);
                v = (sT224_459 * 512);
               }  /* end of if-else (sT408_451)*/
              sT225_466 = (ac == 0);
              sT226_470 = (ac % 128);
              if (sT225_466)
               {
                z = 1;
                n = (sT226_470 * 128);
               } /* sT225_466               */
              else
               {
                n = (sT226_470 * 128);
                z = 0;
               }  /* end of if-else (sT225_466)*/
             }  /* end of if-else (sT305_421)*/
           }  /* end of if-else (sT277_413)*/
         }  /* end of if-else (sT268_376)*/
       }  /* end of if-else (sT264_305)*/
     }  /* end of if-else (sT23_66)*/
   }  /* end of if-else (sT0_15)*/
  return   0;

}

