
extern int main(void);
extern void _main();

int main(void)
{
 int a;
 int b;
 int c;
 int d;
 int p;
 int q;
 int x;
 int y;
 int e;
 int i;
 int j;
 int m;
 int h;
 int n;
 int f;
 int g;
 int sT0_8;
 int sT1_15;
 int sT2_15;

 int returnVar_main;
  a = (a + 5);
  b = (x + y);
  sT0_8 = (p > q);
  sT2_15 = (p == q);
  returnVar_main = 0;
  if (sT0_8)
   {
    d = (a * 2);
    f = (x + d);
   } /* sT0_8   */
  else
   {
    if (sT2_15)
     {
      e = (b - x);
      d = (a * 2);
      sT1_15 = sT2_15;
      g = (d - 12);
      i = (g + e);
      j = (i / 5);
     } /* sT2_15     */
    else
     {
      c = (y - x);
      sT1_15 = sT2_15;
      h = (c - b);
     }  /* end of if-else (sT2_15)*/
    m = (h * j);
   }  /* end of if-else (sT0_8)*/
  n = (f + m);
  return   0;

}

