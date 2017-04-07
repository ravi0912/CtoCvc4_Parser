
extern int main(void);
extern void _main();

int main(void)
{
 int current_state;
 int newstate;
 int newHL;
 int newFL;
 int cars;
 int timeOutL;
 int timeOutS;
 int newST;
 int FarmL;
 int state;
 int HiWay;
 int StartTimer;
 int sT0_6;
 int sT1_10;
 int sT2_10;
 int sT3_10;
 int sT4_21;
 int sT5_25;
 int sT6_36;
 int sT7_40;
 int sT8_40;
 int sT9_40;
 int sT10_51;
 int sT11_55;
 int sT12_66;
 int sT13_10;
 int sT14_10;
 int sT15_40;
 int sT16_40;

 int returnVar_main;
  sT0_6 = (current_state == 0);
  sT6_36 = (current_state == 2);
  returnVar_main = 0;
  if (sT0_6)
   {
    sT13_10 = (timeOutL == 1);
    sT1_10 = sT13_10;
    sT14_10 = (cars == 1);
    sT2_10 = sT14_10;
    sT3_10 = ((sT14_10) && (sT13_10));
    newHL = 4;
    newFL = 6;
    if (sT3_10)
     {
      newstate = 4;
      newST = 1;
     } /* sT3_10     */
    else
     {
      newstate = 0;
      newST = 0;
     }  /* end of if-else (sT3_10)*/
   }  /* end of if-else (sT0_6)*/
  sT10_51 = (current_state == 6);
  sT4_21 = (current_state == 4);
  if (sT4_21)
   {
    sT5_25 = (timeOutS == 1);
    newHL = 2;
    newFL = 6;
    if (sT5_25)
     {
      newstate = 2;
      newST = 1;
     } /* sT5_25     */
    else
     {
      newstate = 6;
      newST = 0;
     }  /* end of if-else (sT5_25)*/
   }  /* end of if-else (sT4_21)*/
  if (sT6_36)
   {
    sT15_40 = (timeOutL == 1);
    sT7_40 = sT15_40;
    sT16_40 = (cars == 0);
    sT8_40 = sT16_40;
    sT9_40 = ((sT16_40) || (sT15_40));
    newHL = 6;
    newFL = 4;
    if (sT9_40)
     {
      newstate = 6;
      newST = 1;
     } /* sT9_40     */
    else
     {
      newstate = 2;
      newST = 0;
     }  /* end of if-else (sT9_40)*/
   }  /* end of if-else (sT6_36)*/
  if (sT10_51)
   {
    sT11_55 = 1;
    newHL = 6;
    newFL = 2;
    timeOutS = 1;
    if (sT11_55)
     {
      newstate = 0;
      newST = 1;
     } /* sT11_55     */
    else
     {
      newstate = 6;
      newST = 0;
     }  /* end of if-else (sT11_55)*/
   }  /* end of if-else (sT10_51)*/
  sT12_66 = (current_state == 7);
  if (sT12_66)
   {
    newHL = 0;
    newFL = 0;
    newstate = 0;
    newST = 0;
   }  /* end of if-else (sT12_66)*/
  state = newstate;
  HiWay = newHL;
  FarmL = newST;
  StartTimer = newST;
  return   0;

}

