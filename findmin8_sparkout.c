
extern int main(void);
extern void _main();

int main(void)
{
 int a1;
 int a2;
 int a3;
 int a4;
 int a5;
 int a6;
 int a7;
 int a8;
 int a12;
 int a34;
 int a56;
 int a78;
 int a14;
 int a58;
 int a18;
 int sT0_13;
 int sT1_16;
 int sT2_19;
 int sT3_22;
 int sT4_25;
 int sT5_28;
 int sT6_31;

 int returnVar_main;
  sT0_13 = (a1 < a2);
  sT1_16 = (a3 < a4);
  sT2_19 = (a5 < a6);
  sT3_22 = (a7 < a8);
  returnVar_main = 0;
  if (sT0_13)
   {
    a12 = a1;
   } /* sT0_13   */
  else
   {
    a12 = a2;
   }  /* end of if-else (sT0_13)*/
  if (sT1_16)
   {
    a34 = a3;
    sT4_25 = (a12 < a3);
   } /* sT1_16   */
  else
   {
    sT4_25 = (a12 < a4);
    a34 = a4;
   }  /* end of if-else (sT1_16)*/
  if (sT2_19)
   {
    a56 = a5;
   } /* sT2_19   */
  else
   {
    a56 = a6;
   }  /* end of if-else (sT2_19)*/
  if (sT3_22)
   {
    a78 = a7;
    sT5_28 = (a56 < a7);
   } /* sT3_22   */
  else
   {
    sT5_28 = (a56 < a8);
    a78 = a8;
   }  /* end of if-else (sT3_22)*/
  if (sT4_25)
   {
    a14 = a12;
   } /* sT4_25   */
  else
   {
    a14 = a34;
   }  /* end of if-else (sT4_25)*/
  if (sT5_28)
   {
    a58 = a56;
    sT6_31 = (a14 < a56);
   } /* sT5_28   */
  else
   {
    sT6_31 = (a14 < a78);
    a58 = a78;
   }  /* end of if-else (sT5_28)*/
  if (sT6_31)
   {
    a18 = a14;
   } /* sT6_31   */
  else
   {
    a18 = a58;
   }  /* end of if-else (sT6_31)*/
  return   0;

}

