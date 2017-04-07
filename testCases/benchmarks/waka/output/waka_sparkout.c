
extern int waka(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

int waka(int in1, int in2, int in3, int in4, int in7, int in8, int in9, int in10, int in14, int in15, int in12, int in17, int in19, int in20, int in22, int in24, int in27, int in28, int in29, int in32)
{
 int out13;
 int out30;
 int out31;
 int t5;
 int t6;
 int t11;
 int t16;
 int t18;
 int t21;
 int t23;
 int t25;
 int t26;
 int sT0_16;
 int sT1_21;
 int sT2_33;
 int sT3_21;

 int returnVar_waka;
  t6 = (in7 + in8);
  t5 = (in3 - in4);
  sT0_16 = (in2 == in1);
  sT3_21 = (in9 < in10);
  out30 = 0;
  if (sT0_16)
   {
    t11 = (t6 + in12);
    out13 = (in14 - in15);
    t16 = (t11 - in17);
   } /* sT0_16   */
  else
   {
    if (sT3_21)
     {
      t11 = (t6 + in12);
      t23 = (t5 - in24);
      t21 = (t11 + in22);
      out13 = (in14 - in15);
      t25 = (t21 + t23);
      t26 = (t25 + in27);
     } /* sT3_21     */
    else
     {
      t18 = (in19 + in20);
      out13 = (in14 - in15);
      t26 = (t5 + t18);
     }  /* end of if-else (sT3_21)*/
    t16 = (t26 - in28);
    out30 = (t26 + in29);
   }  /* end of if-else (sT0_16)*/
  out31 = (t16 + in32);
  sT2_33 = (out13 + out30);
  returnVar_waka = (sT2_33 + out31);
  return   returnVar_waka;

}
