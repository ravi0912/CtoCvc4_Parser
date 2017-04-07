//#include<stdio.h>
//#include <stdlib.h>

#define TWO_RAISED_23 8388608
#define TWO_RAISED_24 16777216
#define TWO_RAISED_46 (long) 703687446
#define TWO_RAISED_47 (long) 140737488
#define TWO_RAISED_48 (long) 281474976
#define TWO_RAISED_31 (unsigned) 2147483


/* main function */
int main()
{ 
/* Shall use "union" to read a floating number and then treat it as an integer
 * (in place of a bit string).
 */
   
    unsigned int   number1, number2, result;
   

  
  // unsigned int number;
  unsigned short int sign1, sign, sign2, exponent1, exponent2, exponent;
  unsigned int mantissa1, mantissa2, mantissa, actualMantissa;
  long int mantissa_mult;
  short  int option, diff;

 
  // extracting the mantisaa, exponent and sign for the first integer number  
  
  if (number1 < 0) 
	sign1 = 1;
   else 
	sign1 = 0;

  
  mantissa1 = number1 % TWO_RAISED_23; 

  mantissa1 = mantissa1 + TWO_RAISED_23; 
  // 2 ^ 24  added to incorporate hidden bit '1'
  
  exponent1 =  number1 * 2 / TWO_RAISED_24;
 
  // extracting the mantisaa, exponent and sign for the second integer number  
  
  if (number2 < 0) 
	sign2 = 1;
   else 
	sign2 = 0;

  
  mantissa2 = number2 % TWO_RAISED_23; 
  mantissa2 = mantissa2 + TWO_RAISED_23; 

  exponent2 =  number2 * 2 / TWO_RAISED_24;
  
  
    
   if (option == 1 || option == 2)	// Addition & subtraction both need equalisation of exponents
  {
	  

	  // equalizing the exponents  	  
	  diff = exponent1 - exponent2;
	  if (diff > 0)
	    // exponent1 > exponent2 -- shift right mantissa2
	    { 
	      for (;diff > 0;)
		{ 
		  mantissa2 = mantissa2 / 2;
		  diff--;
		};
	      exponent = exponent1;
	    }
	  else    // diff <= 0
	    if (diff < 0)
	      { // exponent1 < exponent2 -- shift right mantissa1
		for ( ; diff < 0; )
		  { 
		    mantissa1 = mantissa1 / 2;
		    diff++;
		  }
		exponent = exponent2;
	      }
	    else   // diff == 0
	      exponent = exponent1;
	
        //  2's complement operands depending upon their signs
	  if (sign1 == 1) 
	    { 
		mantissa1 = - mantissa1;
            }
	  if (sign2 == 1) 
	    { 
	      mantissa2 = -mantissa2;
            }
	  
	  // add or subtract depending upon the result
	  if (option == 1) 
	    { 
		mantissa = mantissa1 + mantissa2;
            }
	  else 
	    { 
		mantissa = mantissa1 - mantissa2;
            }
	  
	  // process result
	  sign = 0;
	  if (mantissa < 0) 
	    { 
	      sign = 1;
	      mantissa = -mantissa;
            }
	
      
      
      if ((mantissa / TWO_RAISED_23) % 4 == 0)
      { 
	    for ( ; exponent != 0 && (mantissa / TWO_RAISED_23) % 4 != 1; )
	    {
	      mantissa = mantissa * 2;
	      exponent--;
	    }
       }
      if ((mantissa / TWO_RAISED_23) % 4 == 3) // just shift right ONCE incrementing exponent
	{
	  mantissa = mantissa / 2;
	  exponent++;
	} 
      
    } // if (option == 1 | option == 2)

  

   if (option == 3) // multiplication
    { 
      if (sign1 == sign2) 
	sign = 0;
      else 
	sign = 1;
     
      exponent = exponent1 + exponent2 - 127;  
      mantissa_mult =  mantissa1 *  mantissa2;
      
           
      if ( (mantissa_mult / TWO_RAISED_46) % 4 == 0)
	{ 
	  for (; exponent != 0 && (mantissa_mult / TWO_RAISED_46) % 4 != 1; )
	  { 
	    mantissa_mult =  mantissa_mult * 2;
	    exponent--;
	  }
	}
	if (((mantissa_mult / TWO_RAISED_46) % 4) == 3) // just shift right ONCE incrementing exponent
	{
	  mantissa_mult =  mantissa_mult / 2;
	  exponent++;
	} // switch (mantissa_mult / TWO_RAISED_46 % 4)
      
      // extracting resultant mantissa
     	mantissa = (mantissa_mult / TWO_RAISED_23)  
		% TWO_RAISED_23;
      
    }//if (option == 3)  
  


   if (option == 4) // Division
	{
	  if (sign1 == sign2) 
	    sign = 0;
	  else 
	    sign = 1;
	  
	 // equalizing the exponents
          diff = exponent1 - exponent2;
          if (diff > 0)
            // exponent1 > exponent2 -- shift right mantissa2
            {
              for ( ; diff > 0; )
                {
                  mantissa2 = mantissa2 / 2;
                  diff--;
                };
              // exponent = exponent1;
            }
          else    // diff <= 0
            if (diff < 0)
              { // exponent1 < exponent2 -- shift right mantissa1
                for ( ; diff < 0; )
                  {
                    mantissa1 = mantissa1 / 2;
                    diff++;
                  }
                // exponent = exponent2;
              }
                    
         exponent = 0;

         mantissa =   mantissa1 / mantissa2;

         actualMantissa = 0;
         for ( ; mantissa != 1; )
          { actualMantissa = (mantissa % 2) * TWO_RAISED_31 + actualMantissa / 2;
            mantissa = mantissa / 2;
            exponent++;
          } // while ((mantissa != 1)
          
		  
         mantissa = TWO_RAISED_23 + actualMantissa / 512;  // 2^9 = 512

         // now bisa the exponent 
         exponent = exponent + 127; 
        } // if (option = 4)


 
  result = sign * TWO_RAISED_31 + exponent * TWO_RAISED_23 
    + (mantissa % TWO_RAISED_23);
 
} //end main 


