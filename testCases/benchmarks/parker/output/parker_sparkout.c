
extern int parker(int, int, int, int, int, int);

int parker(int in1, int in2, int in3, int in4, int in5, int in6)
{
 int out1;
 int t1;
 int t2;
 int t3;
 int t4;
 int t5;
 int t6;
 int t7;
 int sT0_19;
 int sT1_21;
 int sT2_24;
 int sT3_31;
 int sT4_41;
 int sT5_46;
 int sT6_29;
 int sT7_29;
 int sT8_23;
 int sT9_25;
 int sT10_27;
 int sT11_34;
 int sT12_32;
 int sT13_42;
 int sT14_44;
 int sT15_47;
 int sT16_49;

 int returnVar_parker;
  t2 = (in2 + in3);
  sT6_29 = (in4 - 5);
  sT0_19 = (in5 != 0);
  if (sT0_19)
   {
    sT7_29 = (sT6_29 + 5);
    sT8_23 = (in1 - 4);
    sT1_21 = (t2 != 0);
    if (sT1_21)
     {
      sT9_25 = (in2 + 4);
      sT10_27 = (in3 - in5);
      sT2_24 = (sT8_23 != 0);
      if (sT2_24)
       {
        t4 = sT9_25;
        sT15_47 = (in1 - 5);
       } /* sT2_24       */
      else
       {
        t4 = sT10_27;
        sT15_47 = (in1 - 5);
       }  /* end of if-else (sT2_24)*/
     } /* sT1_21     */
    else
     {
      sT11_34 = (in1 - in2);
      sT12_32 = (in1 + in2);
      sT3_31 = (sT7_29 != 0);
      if (sT3_31)
       {
        t6 = sT12_32;
        sT15_47 = (in1 - 5);
       } /* sT3_31       */
      else
       {
        t6 = (sT11_34 - in1);
        sT15_47 = (in1 - 5);
       }  /* end of if-else (sT3_31)*/
      t4 = (t6 - in4);
     }  /* end of if-else (sT1_21)*/
    t6 = (t4 + in4);
   } /* sT0_19   */
  else
   {
    t1 = (in5 - in6);
    sT13_42 = (in2 + 5);
    sT14_44 = (8 - in4);
    sT15_47 = (in1 - 5);
    sT4_41 = (t1 != 0);
    if (sT4_41)
     {
      t6 = sT13_42;
     } /* sT4_41     */
    else
     {
      t6 = sT14_44;
     }  /* end of if-else (sT4_41)*/
   }  /* end of if-else (sT0_19)*/
  sT16_49 = (8 + in5);
  sT5_46 = (t6 != 0);
  if (sT5_46)
   {
    out1 = sT15_47;
    returnVar_parker = sT15_47;
   } /* sT5_46   */
  else
   {
    out1 = sT16_49;
    returnVar_parker = out1;
   }  /* end of if-else (sT5_46)*/
  return   out1;

}
