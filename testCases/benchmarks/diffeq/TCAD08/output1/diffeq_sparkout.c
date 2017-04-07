
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

 int returnVar_main;
  i = 0;
  do
   {
    sT0_7 = (x < a);
    if (sT0_7)
     {
      i = (i + 1);
      t1 = (u * dx);
      t2 = (x * 3);
      t3 = (y * 3);
      x = (x + dx);
      t4 = (t1 * t2);
      t6 = (u - t4);
      t5 = (dx * t3);
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

