/* This is the Parker benchmark as presented in Figure 1 of the paper
   MAHA: a program for datapath synthesis
     Alice C. Parker, Jorge T. Pizarro, Mitch Mlinar,
     Design Automation Conference, 1986

   However, the version used here is from parker1986.hc of the HLSynth91 
   benchmark suite - the modification is that all the conditions have been 
   made independent of any other operation - because other HLS systems do not
   even consider that the comparisons take any time
 */

int parker(int in1, int in2, int in3, int in4, int in5, int in6)
{
 int out1;
 int t1, t2, t3, t4, t5, t6, t7;
 
 t1 = in5 - in6;
 t2 = in2 + in3;
 if (in5 != 0) 
  {
   if (t2 != 0) 
    {
     t3 = in1 - 4;
     if (t3 != 0) 
       t4 = in2 + 4;
     else 
       t4 = in3 - in5;
    } else {
     t3 = in4 - 5;
     t5 = t3+5;
     if (t5 != 0) 
       t6 = in1+in2;
     else {
      t7 = in1 - in2;
      t6 = t7 - in1;
     }
     t4 = t6 - in4;
    }
   t6 = t4+in4;
  } else {
   if (t1 != 0) 
     t6 = in2 + 5;
   else 
     t6 = 8 - in4;
  }
 if (t6 != 0) 
   out1 = in1 - 5;
 else 
   out1 = 8 + in5;
 return out1;
}

