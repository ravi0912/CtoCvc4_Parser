
extern int main(void);
extern void _main();

int main(void)
{
 int x;
 int y;
 int u;
 int a;
 int dx;
 int t1;
 int t2;
 int t3;
 int t4;
 int t5;
 int t6;
 int y1;
 int i;
 int xout;
 int yout;
 int uout;
 int sT0_7;
 int sT1_9;
 int sT2_7;
 int sT3_9;
 int sT4_9;
 int sT5_9;

 int returnVar_main;
  i = 0;
  do
   {
    sT1_9 = (sT1_9 + dx);
    sT2_7 = (i + 1);
    sT3_9 = (u * dx);
    sT4_9 = (y * 3);
    sT0_7 = (sT1_9 < a);
    sT5_9 = (sT1_9 * 3);
    if (sT0_7)
     {
      t4 = (sT3_9 * sT5_9);
      t1 = sT3_9;
      t2 = sT5_9;
      t3 = sT4_9;
      x = sT1_9;
      i = sT2_7;
      t6 = (u - t4);
      t5 = (dx * sT4_9);
      u = (t6 - t5);
      y1 = (u * dx);
      y = (y + y1);
     }      /* end of loop condition */
    else
      break;
   } while (1);

  xout = x;
  yout = y;
  uout = u;
  returnVar_main = 0;
  return   0;

}

