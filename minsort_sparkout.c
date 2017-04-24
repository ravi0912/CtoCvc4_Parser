



main sort()
{
 int n_t;
 int a_t[8];
 int min_t;
 int i_t;
 int j_t;
 int temp_t;
 int j_star_t;
 int sT0_13;
 int sT1_13;
 int sT2_15;
 int sT3_15;
 int sT4_16;
 int sT5_16;
 int sT6_15;
 int sT7_16;
 int sT8_16;
 int sT9_15;
 int sT10_15;
 int sT11_15;
 int sT12_15;
 int sT13_14;
 int sT14_15;

  a_t[0] = 23;
  i_t = 0;
  a_t[1] = 11;
  a_t[2] = 27;
  a_t[3] = 19;
  a_t[4] = 12;
  a_t[5] = 10;
  a_t[6] = 31;
  a_t[7] = 7;
  min_t = a_t[0];
  do
   {
    sT0_13 = n_t - 2;
    sT12_15 = i_t + 1;
    sT13_14 = a_t[i_t];
    sT14_15 = n_t - 1;
    sT1_13 = i_t <= sT0_13;
    if (sT1_13)
     {
      min_t = sT13_14;
      j_star_t = i_t;
      j_t = sT12_15;
      sT10_15 = sT14_15;
      sT2_15 = sT14_15;
      sT9_15 = sT14_15;
      temp_t = sT13_14;
      do
       {
        sT11_15 = n_t - 1;
        sT6_15 = j_t + 1;
        sT3_15 = j_t <= sT2_15;
        sT7_16 = a_t[j_t];
        sT8_16 = sT7_16 < min_t;
        if (sT3_15)
         {
          if (sT8_16)
           {
            sT4_16 = sT7_16;
            sT5_16 = sT8_16;
            min_t = sT7_16;
            j_star_t = j_t;
            j_t = sT6_15;
            sT2_15 = sT9_15;
            sT9_15 = sT11_15;
           } 
          else
           {
            sT4_16 = sT7_16;
            sT5_16 = sT8_16;
            j_t = sT6_15;
            sT2_15 = sT9_15;
            sT9_15 = sT11_15;
           } 
         }    
        else
          break;
       } while (1);

      a_t[i_t] = sT13_14;
      i_t = sT12_15;
      a_t[j_star_t] = sT13_14;
     }      
    else
      break;
   } while (1);

  return;

}
