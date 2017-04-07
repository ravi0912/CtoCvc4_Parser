
extern int main(void);
extern void _main();

int main(void)
{
 int ft;
 int ftm1;
 int ftm2;
 int ecgm1;
 int ecg1;
 int ysi;
 int ymax;
 int xmax;
 int y0;
 int ath;
 int ys;
 int y0m2;
 int zmax;
 int y0m1;
 int sth1;
 int sth2;
 int lxmax;
 int lymax;
 int lzmax;
 int low;
 int high;
 int count;
 int indx;
 int RR;
 int fl3;
 int fl1;
 int fl2;
 int rdy;
 int RRpeak;
 int fl3o;
 int RRo;
 int i;
 int data;
 int sT0_64;
 int sT1_66;
 int sT2_66;
 int sT3_66;
 int sT4_66;
 int sT5_74;
 int sT6_76;
 int sT7_78;
 int sT8_81;
 int sT9_84;
 int sT10_86;
 int sT11_86;
 int sT12_86;
 int sT13_86;
 int sT14_86;
 int sT15_86;
 int sT16_86;
 int sT17_86;
 int sT18_98;
 int sT19_103;
 int sT20_108;
 int sT21_108;
 int sT22_108;
 int sT23_108;
 int sT24_108;
 int sT25_110;
 int sT26_110;
 int sT27_110;
 int sT28_110;
 int sT29_110;
 int sT30_110;
 int sT31_110;
 int sT32_110;
 int sT33_110;
 int sT34_110;
 int sT35_110;
 int sT36_110;
 int sT37_110;
 int sT38_110;
 int sT39_110;
 int sT40_110;
 int sT41_110;
 int sT42_110;
 int sT43_127;
 int sT44_127;
 int sT45_127;
 int sT46_131;
 int sT47_131;
 int sT48_131;
 int sT49_131;
 int sT50_142;
 int sT51_144;
 int sT52_146;
 int sT53_149;
 int sT54_152;
 int sT55_154;
 int sT56_161;
 int sT57_168;
 int sT58_168;
 int sT59_168;
 int sT60_168;
 int sT61_168;
 int sT62_168;
 int sT63_168;
 int sT64_168;
 int sT65_66;
 int sT66_64;
 int sT67_86;
 int sT68_110;
 int sT69_110;
 int sT70_110;
 int sT71_110;
 int sT72_110;
 int sT73_108;
 int sT74_108;
 int sT75_108;
 int sT76_128;
 int sT77_127;

 int returnVar_main;
  sT20_108 = (0 > data);
  y0m1 = 0;
  y0m2 = 0;
  ymax = 0;
  xmax = 0;
  zmax = 0;
  RR = 0;
  lymax = 0;
  lzmax = 0;
  lxmax = 0;
  fl1 = 0;
  fl2 = 0;
  count = 0;
  ftm2 = data;
  ftm1 = data;
  ecgm1 = data;
  i = 1;
  returnVar_main = 0;
  do
   {
    sT65_66 = (data - ecgm1);
    sT66_64 = (i + 1);
    sT0_64 = (i <= data);
    if (sT0_64)
     {
      sT4_66 = (ftm1 + sT65_66);
      sT2_66 = (sT65_66 / 256);
      ecgm1 = data;
      i = sT66_64;
      ft = (sT4_66 - sT2_66);
      ysi = (ft - ftm2);
      sT6_76 = (ft > xmax);
      sT7_78 = (ft > 0);
      ftm2 = ftm1;
      ftm1 = ft;
      sT5_74 = (ysi > ymax);
      if (sT5_74)  
       {
        ymax = ysi;
        sT11_86 = (ysi / 8); //reverse speculation
        sT12_86 = (ysi / 2);
       } /* sT5_74       */
      else
       {
        sT11_86 = (ymax / 8);  //reverse speculation
        sT12_86 = (ymax / 2);
       }  /* end of if-else (sT5_74)*/
      if (sT6_76)
       {
        xmax = ft;
        sT13_86 = (sT12_86 + sT11_86);  //reverse speculation
        ath = (ft / 4);
        sT10_86 = (ymax / 16);
       } /* sT6_76       */
      else
       {
        sT13_86 = (sT12_86 + sT11_86);  //reverse speculation
        ath = (xmax / 4);
        sT10_86 = (ymax / 16);
       }  /* end of if-else (sT6_76)*/
      if (sT7_78)
       {
        y0 = ft;
        sth1 = (sT13_86 + sT10_86);
        sT8_81 = (ath > ft);
       } /* sT7_78       */
      else
       {
        sth1 = (sT13_86 + sT10_86);
        sT8_81 = (ath > y0);
       }  /* end of if-else (sT7_78)*/
      if (sT8_81)
       {
        y0 = ath;
        ys = (ath - y0m2);
        y0m2 = y0m1;
        sT67_86 = ath;  //copy propagation/ 
       } /* sT8_81       */
      else
       {
        ys = (y0 - y0m2);
        y0m2 = y0m1;
        sT67_86 = y0;  
       }  /* end of if-else (sT8_81)*/
      sT9_84 = (ys > zmax);
      if (sT9_84)
       {
        zmax = ys;
        sT15_86 = (ys / 8);
        sT16_86 = (ys / 2);
       } /* sT9_84       */
      else
       {
        sT15_86 = (zmax / 8);
        sT16_86 = (zmax / 2);
       }  /* end of if-else (sT9_84)*/
      y0m1 = sT67_86;
      sT17_86 = (sT16_86 + sT15_86);
      sT14_86 = (zmax / 16);
      sth2 = (sT17_86 + sT14_86);
     }      /* end of loop condition */
    else
      break;
   } while (1);

  sT46_131 = (data - ecgm1);
  sT18_98 = (ysi > sth1);
  sT19_103 = (ys > sth2);
  sT68_110 = (xmax / 4);
  sT69_110 = (xmax / 2);
  if (sT18_98)
   {
    fl1 = 1;
    count = 0;
    sT49_131 = (ftm1 + sT46_131);
    sT70_110 = (sT69_110 + sT68_110);
    sT22_108 = 1;
    sT47_131 = (sT46_131 / 256);
    sT71_110 = (xmax / 8);
   } /* sT18_98   */
  else
   {
    sT49_131 = (ftm1 + sT46_131);
    sT70_110 = (sT69_110 + sT68_110);
    sT22_108 = (fl1 == 1);
    sT47_131 = (sT46_131 / 256);
    sT71_110 = (xmax / 8);
   }  /* end of if-else (sT18_98)*/
  if (sT19_103)
   {
    fl2 = 1;
    count = 0;
    ft = (sT49_131 - sT47_131);
    sT72_110 = (sT70_110 + sT71_110);
    sT74_108 = ((sT22_108) && (1));
    sT24_108 = ((sT74_108) && (sT20_108));
   } /* sT19_103   */
  else
   {
    ft = (sT49_131 - sT47_131);
    sT72_110 = (sT70_110 + sT71_110);
    sT73_108 = (fl2 == 1);
    sT75_108 = ((sT22_108) && (sT73_108));
    sT24_108 = ((sT75_108) && (sT20_108));
   }  /* end of if-else (sT19_103)*/
  if (sT24_108)
   {
    RR = 0;
    count = 0;
    fl1 = 0;
    lxmax = 0;
    lymax = 0;
    lzmax = 0;
    sT76_128 = 1;
    ysi = (ft - ftm2);
    sT52_146 = (ft > 0);
    sT43_127 = 0;
    ath = (sT72_110 / 4);
   } /* sT24_108   */
  else
   {
    sT76_128 = (count + 1);
    ysi = (ft - ftm2);
    sT52_146 = (ft > 0);
    sT43_127 = (fl2 == 1);
    ath = (xmax / 4);
   }  /* end of if-else (sT24_108)*/
  sT77_127 = (fl1 == 1);
  sT50_142 = (ysi > lymax);
  sT45_127 = ((sT77_127) || (sT43_127));
  if (sT45_127)
   {
    sT51_144 = (ft > lxmax);
    sT55_154 = (sT76_128 == 8);
   } /* sT45_127   */
  else
   {
    sT51_144 = (ft > lxmax);
    sT55_154 = (count == 8);
   }  /* end of if-else (sT45_127)*/
  if (sT52_146)
   {
    y0 = ft;
    sT53_149 = (ft < ath);
    sT56_161 = (RR > data);
   } /* sT52_146   */
  else
   {
    sT53_149 = (y0 < ath);
    sT56_161 = (RR > data);
   }  /* end of if-else (sT52_146)*/
  if (sT53_149)
   {
    ys = (ath - y0m2);
   } /* sT53_149   */
  else
   {
    ys = (y0 - y0m2);
   }  /* end of if-else (sT53_149)*/
  sT54_152 = (ys > lzmax);
  return   0;

}

