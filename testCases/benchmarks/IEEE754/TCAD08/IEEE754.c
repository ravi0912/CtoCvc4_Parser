#include<stdio.h>
#include <stdlib.h>

#define TWO_RAISED_23 8388608
#define TWO_RAISED_24 16777216
#define TWO_RAISED_46 (long) 70368744177664
#define TWO_RAISED_47 (long) 140737488355328
#define TWO_RAISED_48 (long) 281474976710656
#define TWO_RAISED_31 (unsigned) 2147483648




short int 
calculate_sign (int number)
/* this function extracts the sign bit from the 32-bit pattern of the integer 
 * 'number' "sign=(number DIV 2^31 ) MOD 2"    
 */
{
  unsigned short int sign;
  if (number < 0) 
	return 1;
   else 
	return 0;
}

 

unsigned int 
calculate_mantissa (unsigned int number)
/* this function extracts the  mantissa (integer) from the 32-bit pattern of
 * the integer 'number' "mantissa = number MOD (2^23) + (2^23) "
 */
{

  unsigned int mantissa;
  
  mantissa = number % TWO_RAISED_23; 
  /* this operation extracts the rightmost 23 bits (in integer)from the 32 bit 
   *  pattern of the integer 'number'  
   */

  mantissa = mantissa + TWO_RAISED_23; 
  // 2 ^ 24  added to incorporate hidden bit '1'

  return mantissa;
}



unsigned short int 
calculate_exponent (unsigned int number)
/* this function extracts the  exponent (integer) from the 32-bit pattern of
 * the integer 'number' "exponent = (number * 2 ) DIV (2^24)"
 */
{
  unsigned short int exponent;   
  
  exponent =  number * 2 / TWO_RAISED_24;
            
  /* 'number*2' shifts the 32-bit pattern of the integer 'number' to the left 
   *  by '1' and then the leftmost 8-bit pattern is extracted as the 8-bit 
   *  exponent by dividing by 2^24
   */  

  return exponent;
}





/* main function */
void 
main()
{ 
/* Shall use "union" to read a floating number and then treat it as an integer
 * (in place of a bit string).
 */
   typedef union
   { 
     float floatPoint;
     unsigned int   number;
   } FloatInt;

  FloatInt input1, input2, result;
  // unsigned int number;
  unsigned short int sign1, sign2, sign, exponent1, exponent2, exponent;
  unsigned int mantissa1, mantissa2, mantissa;
  long int mantissa_mult;
  short  int debug, option;

  /* "input1.number", "input2.number" are the input floating point numbers 
   * taken as integers (in place of bit strings). 
   * "number" is the final result -- similarly for "sign1", "sign2" and "sign",
   *  "exponent1", "exponent2" and "exponent", etc.
   */

  printf ("want debug mode? (feed 1 for yes and 0 for no): ");
  scanf ("%hd", &debug);

  printf ("\n 1. Addition");
  printf ("\n 2. Subtraction");
  printf ("\n 3. Multiplication");
  printf ("\n 4. Division");
  printf ("\n enter your option:");
  scanf ("%hd", &option);
  
  printf ("\n\n enter the first number :");
  scanf ("%f", &input1.floatPoint);

  printf ("\n\n enter the second number :");
  scanf ("%f",&input2.floatPoint);

  if (debug )
   { 
     printf ("the first number as a float: %f, as an integer: %d\n", 
	     input1.floatPoint, input1.number);
     printf("    and as a hex string: %x\n", input1.number);
     
     printf ("the second number as a float: %f, as an integer: %d\n",           
	     input2.floatPoint, input2.number);
     printf("    and as a hex string: %x\n", input2.number);
   } // if (debug)
  

  // extracting the mantisaa, exponent and sign for the first integer number  
  sign1 = calculate_sign (input1.number);	
  
  mantissa1 = calculate_mantissa (input1.number);
  
  exponent1 = calculate_exponent (input1.number);

  if (debug)
   { 
     printf ("for input 1\n       sign = %u\n", sign1);
     printf ("      \n mantissa1 as a hex string = %x\n", mantissa1);
     printf ("      \n exponent1 as a hex string = %x\n", exponent1);
   }
  
  
  // extracting the mantisaa, exponent and sign for the second integer number  
  sign2 = calculate_sign (input2.number);	
  
  mantissa2 = calculate_mantissa (input2.number);
  
  exponent2 = calculate_exponent (input2.number);
  
  if (debug)
   { 
     printf ("for input 2\n       sign = %u\n", sign2);
     printf ("      \n mantissa2 as a hex string = %x\n", mantissa2);
     printf ("      \n exponent2 as a hex string = %x\n", exponent2);
   }

      
   if (option == 1 || option == 2)
	// Addition & subtraction both need equalisation of exponents
	{
	  

	  // equalizing the exponents  	  
	  short int diff = exponent1 - exponent2;
	  if (diff > 0)
	    // exponent1 > exponent2 -- shift right mantissa2
	    { 
	      while (diff > 0)
		{ 
		  mantissa2 = mantissa2 / 2;
		  diff--;
		};
	      exponent = exponent1;
	    }
	  else    // diff <= 0
	    if (diff < 0)
	      { // exponent1 < exponent2 -- shift right mantissa1
		while (diff < 0)
		  { 
		    mantissa1 = mantissa1 / 2;
		    diff++;
		  }
		exponent = exponent2;
	      }
	    else   // diff == 0
	      exponent = exponent1;
	
         if (debug) 
          printf ("\n\n\n equalized exponent (hex): %x\n\n", exponent);
          

  
	  /* Now to perform addition and subtraction -- we assume that there's
           * a fixed point 2's complement adder/subtractor so we simply 2'c each	   
           * operand (unary minus) only if its sign is 1, and then add or 
  	   * subtract depending upon "option"
	   * We have to process the result, which is a 2'c number,  as follows:
	   *  if the result is negative, obtain 2'c.
	   */
	  
	  //  2's complement operands depending upon their signs
	  if (sign1 == 1) 
	    { mantissa1 = - mantissa1;
              if (debug) 
		printf ("2's complemented mantissa1 as hex string: %x\n"                                   , mantissa1); 
            };
	  if (sign2 == 1) 
	    { mantissa2 = -mantissa2;
              if (debug) 
		printf ("2's complemented mantissa2 as hex string: %x\n"
                                   , mantissa2);
            }
	  
	  // add or subtract depending upon the result
	  if (option == 1) 
	    { mantissa = mantissa1 + mantissa2;
              if (debug) 
		printf ("after adding -- mantissa (hex): %x\n"
                                   , mantissa);
            }
	  else 
	    { mantissa = mantissa1 - mantissa2;
              if (debug) 
		printf ("after subtracting -- mantissa (hex): %x\n"
                                   , mantissa1);
            }
	  
	  // process result
	  sign = 0;
	  if ((int) mantissa < 0) 
	    { 
	      sign = 1;
	      mantissa = -mantissa;
              if (debug) 
		printf ("after adding -- 2's complemented mantissa (hex string): %x\n"
                                   , mantissa);
	    }
	
      
      
     
          
      /**********   N O R M A L I Z E  for addition & subtraction    ********/
      /* if "mantissa" is zero, then make exponent zero (i.e., 2^(-127))
       * else note that two 24-bit mantissas  , "mantissa1 [23 .. 0]" & 
       * "mantissa2 [23 .. 0]" added/subtracted  may result in a 25 bit 
       * mantissa "mantissa [24 .. 0]".
       * They are actually 32 bit numbers, where the most signinficant 7 
       * bits of the resulting mantissa "mantissa [31 .. 25]" are  don't 
       * cares -- sign has been taken care of.
       * Actually only the most significant two bits "mantissa [24 .. 23]"
       * decide the normalization steps as follows:
       * mantissa [24 23]
       * = 00 --- keep shifting left "mantissa" decrementing "exponent"
       * till these bits become 01 -- before every shift check 
       * if "exponent" == 0 in which case "mantissa [22 .. 0]" is "denormalized        * mantissa"-- stop
       * = 01 --- stop -- "mantissa [22 .. 0]" a normalized number
       * = 10 or 11 --- shift right by ONE position whereupon they become 01
       * (note the 2'c operation done on "mantissa" if it was found to be
       * negative), "mantissa [22 .. 0]" is a normalized mantissa -- stop
       * mantissa [24 .. 23] can be obtained by [{ mantissa / (2^23) } % 2^2 ]
       */

      if (debug) printf ("\n\n *** Normalizing *** \n\n");
      switch (mantissa / TWO_RAISED_23 % 4)
	{ 
	case 0: while (exponent != 0 && mantissa / TWO_RAISED_23 % 4 != 1)
	  {
	    mantissa = mantissa * 2;
	    exponent--;
	  }
	  if (exponent == 0 && mantissa / TWO_RAISED_23 % 4 != 1)
	    printf ("Denormalized number"); 
	  break;
	  
	case 1: break; //normalized
	case 2: 
	case 3: // just shift right ONCE incrementing exponent
	  mantissa = mantissa / 2;
	  exponent++;
	} // switch (mantissa / TWO_RAISED_23 % 4)
      /* The above steps leave the 32 bit "mantissa" with a 1 in the 24th bit
       * "mantissa[23]" which should not be taken -- only "mantissa[22 .. 0]"
       *  will go in the mantissa field of "result" 
       */
      
    } // if (option == 1 | option == 2)

  

   if (option == 3) // multiplication
    { 
      if (sign1 == sign2) 
	sign = 0;
      else 
	sign = 1;
      
      exponent = exponent1 + exponent2 - 127;	  
      mantissa_mult =   (long int) mantissa1 *  (long int) mantissa2;
      
           
      // Normalization  FOR MULTIPLICATION ONLY 
      /* if "mantissa" is zero, then make exponent zero (i.e., 2^(-127))
       * else note that two 24-bit mantissas , "mantissa1 [23 .. 0]" & 
       * "mantissa2 [23 .. 0" multiplied  may result in a 48 bit mantissa 
       * "mantissa [47 .. 0]".
       * It is actually 64 bit number, where the most signinficant 16 
       * bits of the resulting mantissa "mantissa [63 .. 48]" are 
       * don't cares -- sign has been taken care of.
       * Actually only the most significant two bits "mantissa [47 , 46]"
       * decide the normalization steps as follows:
       * mantissa [ 47 , 46]
       * = 00 --- keep shifting left "mantissa" decrementing "exponent"
       * till these bits become 01 -- before every shift check 
       * if "exponent" == 0 in which case   "mantissa [46 .. 23]" is 
       * "denormalized mantissa"-- stop
       * = 01 --- stop -- "mantissa [46 .. 23]" a normalized number
       * = 10 or 11 --- shift right by ONE position whereupon they become 01
       * (note the 2'c operation done on "mantissa" if it was found to be 
       * negative), "mantissa [46 .. 23]" is a normalized mantissa -- stop
       * mantissa [47 , 46] can be obtained by [{ mantissa / (2^46) } % 2^2 ]
       */

      switch ( mantissa_mult / TWO_RAISED_46 % 4)
	{ 
	case 0: while (exponent != 0 && mantissa_mult / TWO_RAISED_46 % 4 != 1)
	  { 
	    mantissa_mult =  mantissa_mult * 2;
	    exponent--;
	  }
	  if (exponent == 0 &&  mantissa_mult / TWO_RAISED_46 % 4 != 1)
	    printf ("Denormalized number"); 
	  break;
	  
	case 1: break; //normalized
	case 2: 
	case 3: // just shift right ONCE incrementing exponent
	  mantissa_mult =  mantissa_mult / 2;
	  exponent++;
	} // switch (mantissa_mult / TWO_RAISED_46 % 4)
      
      // extracting resultant mantissa
     	mantissa = (unsigned int) (mantissa_mult / TWO_RAISED_23  
		% TWO_RAISED_23);
      
    }//if (option == 3)  
  


   if (option == 4) // Division
	{
	  if (sign1 == sign2) 
	    sign = 0;
	  else 
	    sign = 1;
	  
	  
	   // exponent = exponent1 - exponent2 + 127;	  
	  
          /*** Since we are using the integer arithmetic of C (and not of the 
               underlying processor), we cannot simply subtract the exponent.
               in fact, we should equalize the exponent to the higher of the two
               and then carry out the division followed by normalization.
               This is for proper mantissa alignment -- 
               Now actual biased exponent obviously is 0 + 127 = 127
          ***/

          // equalizing the exponents
          short int diff = exponent1 - exponent2;
          if (diff > 0)
            // exponent1 > exponent2 -- shift right mantissa2
            {
              while (diff > 0)
                {
                  mantissa2 = mantissa2 / 2;
                  diff--;
                };
              // exponent = exponent1;
            }
          else    // diff <= 0
            if (diff < 0)
              { // exponent1 < exponent2 -- shift right mantissa1
                while (diff < 0)
                  {
                    mantissa1 = mantissa1 / 2;
                    diff++;
                  }
                // exponent = exponent2;
              }
            // else   // diff == 0
            //  exponent = exponent1;
           
         exponent = 0;

         if (debug)
          printf ("\n\n\n equalized exponent (hex): %x\n\n", exponent);

          mantissa =   mantissa1 / mantissa2;

          if (debug) 
           { printf ("\n *** after division and before normalization *** \n");
             printf ("sign = %hd \n", sign);
             printf ("exponent = %hd \n", exponent);
             printf ("mantissa = %u \n and in hex: %x\n", mantissa, mantissa);
           }

      
      /* For division the mantissa is a pure integer with the redix point after
         entire 23 bit string which is to be SHIFTED right to bring to a value 
         1.xxx...  during normalization
      ***/

        /********* NORMALIZATION for DIVISION   ****/

         unsigned int actualMantissa = 0;
         while (mantissa != 1)
          { actualMantissa = (mantissa % 2) * TWO_RAISED_31 + actualMantissa / 2;
            mantissa = mantissa / 2;
            exponent++;
          } // while ((mantissa != 1)
          
		  
         /* the final result calculation that follows wants the mantissa to be a
            24 bit number with a 1 in the 24th bit -- this bit is now in 
            "mantissa[0]".The most significant 23 bits of "actaulMantissa" 
            gives the 23 bits of result mantissa. so we have the following:
         ****/
         mantissa = TWO_RAISED_23 + actualMantissa / 512;  // 2^9 = 512

         // now bisa the exponent 
         exponent = exponent + 127; 
        } // if (option = 4)


  if (debug) 
   { printf ("*****    after   Normalization   ****\n");
     printf ("Result mantissa (with the leading 1 explicit): %x \n",
	    mantissa);
     printf ("Result exponent (hex): %x\n\n", exponent);
   }
  
  // PREPARE the union variable "result"  
  /* To make "mantissa[23]" = 0, simple take "mantissa % TWO_RAISED_23" 
   * which will only have its lower significant 22 bits 
   */
  result.number = sign * TWO_RAISED_31 + exponent * TWO_RAISED_23 
    + mantissa % TWO_RAISED_23;

  printf ("the calculated result (hex): %x\n", result.number);
  printf ("the calculated result: %f \n", result.floatPoint);

  if (debug)
    { 
      printf ("first, the obtained result as a hex string: %x\n", 
	      result.number);
      // now the validity of the result   
      switch (option) 
	{
	case 1: printf ("the desired result: %f and \n", 
			input1.floatPoint + input2.floatPoint); break;
	case 2: printf ("the desired result: %f and \n",                     
			input1.floatPoint - input2.floatPoint); break;
	case 3: printf ("the desired result: %f and \n",                      
			input1.floatPoint * input2.floatPoint); break;
	case 4: printf ("the desired result: %f and \n",                      
			input1.floatPoint / input2.floatPoint);
	} // switch (option)
      
      printf ("the calculated result (debug): %f \n", result.floatPoint);
    }; // if (debug)    
  
} //end main 


