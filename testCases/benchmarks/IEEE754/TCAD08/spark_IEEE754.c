
 

/* main function */
int
main()
{ 


  unsigned short int sign1, sign2, sign, exponent1, exponent2, exponent;
  unsigned int input1, input2, result, mantissa1, 
	mantissa2, mantissa, actualMantissa, TWO_RAISED_23, TWO_RAISED_24, 
	TWO_RAISED_31;
  long int mantissa_mult, TWO_RAISED_46;
  short  int  option, diff,value;
 



//  TWO_RAISED_23 = 8388608;
//  TWO_RAISED_24 = 16777216;
//  TWO_RAISED_46  = 70368744177664;
//  TWO_RAISED_31 = 2147483648;


/*
  printf ("\n 1. Addition");
  printf ("\n 2. Subtraction");
  printf ("\n 3.	 Multiplication");
  printf ("\n 4. Divisio	n");
  printf ("\n enter your option:	");
*/
  
 

 // option = 3;
 // input1 = 3217031168;
 // input2 = 1067450368;
 actualMantissa = 0;

  // extracting the mantisaa, exponent and sign for the first integer number  

// extracting sign for input1	
 if ((int) input1 < 0) 
	sign1 = 1;
   else 
	sign1 = 0;
  
 // extracting mantiassa for input1
 mantissa1 = input1 % TWO_RAISED_23; 
 /* this operation extracts the rightmost 23 bits (in integer)from the 32 bit 
  *  pattern of the integer 'number'  
  */
 mantissa1 = mantissa1 + TWO_RAISED_23; 
 // 2 ^ 23  added to incorporate hidden bit '1'
 
 
 //extracting exponent for input1
 exponent1 =  input1 * 2 / TWO_RAISED_24;
 
 /* 'number*2' shifts the 32-bit pattern of the integer 'number' to the left 
  *  by '1' and then the leftmost 8-bit pattern is extracted as the 8-bit 
  *  exponent by dividing by 2^24
  */  

 
  
  
  // extracting the mantisaa, exponent and sign for the second integer number  
 
// extracting sign for input2
if ((int)input2 < 0) 
	sign2 = 1;
   else 
	sign2 = 0;

	
  
//extracting mantissa for input2
 mantissa2 = input2 % TWO_RAISED_23; 
 /* this operation extracts the rightmost 23 bits (in integer)from the 32 bit 
  *  pattern of the integer 'number'  
  */
  mantissa2 = mantissa2 + TWO_RAISED_23; 
 // 2 ^ 23  added to incorporate hidden bit '1'
  
 //extracting exponent for input2
 exponent2 =  input2 * 2 / TWO_RAISED_24;
 
 /* 'number*2' shifts the 32-bit pattern of the integer 'number' to the left 
  *  by '1' and then the leftmost 8-bit pattern is extracted as the 8-bit 
  *  exponent by dividing by 2^24
  */  
 

  
    
  
      
  if (option == 1 || option == 2) // Addition and Subtraction
    // Addition & subtraction both need equalisation of exponents
    {
      
      // equalizing the exponents  	  
      diff = exponent1 - exponent2;
      if (diff > 0)
	// exponent1 > exponent2 -- shift right mantissa2
	{ 
	  for ( ;diff > 0; )
	    { 
	      mantissa2 = mantissa2 / 2;
	      diff--;
	    };
	  exponent = exponent1;
	}
	  else    // diff <= 0
	    if (diff < 0)
	      { // exponent1 < exponent2 -- shift right mantissa1
		for ( ;diff < 0; )
		  { 
		    mantissa1 = mantissa1 / 2;
		    diff++;
		  }
		exponent = exponent2;
	      }
	    else   // diff == 0
	      exponent = exponent1;
      
     
      
      /* Now to perform addition and subtraction -- we assume that there's
       * a fixed point 2's complement adder/subtractor so we simply 2'c each	       * operand (unary minus) only if its sign is 1, and then add or 
       * subtract depending upon "option"
       * We have to process the result, which is a 2'c number,  as follows:
       * if the result is negative, obtain 2'c.
       */
      
      //  2's complement operands depending upon their signs
      if (sign1 == 1) 
	{ mantissa1 = - mantissa1;
	
	}
      if (sign2 == 1) 
	    { mantissa2 = -mantissa2;
	    
            }
      
      // add or subtract depending upon the result
      if (option == 1) 
	{ mantissa = mantissa1 + mantissa2;

	}
      else 
	{ mantissa = mantissa1 - mantissa2;
	
	}
      
      // process result
      sign = 0;
      if ((int) mantissa < 0) 
	{ 
	  sign = 1;
	  mantissa = -mantissa;
	  
	}
   
      
      
      
      
      /**********   N O R M A L I Z E     ********/
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

      
      value = mantissa / TWO_RAISED_23 % 4;
	 
	if (value == 0) 
	  {
	    for ( ;exponent != 0 && mantissa / TWO_RAISED_23 % 4 != 1; )
	      {
		mantissa = mantissa * 2;
		exponent--;
	      }
	   	      
	 }
      
        
       if (value == 2 || value == 3) 
	 {// just shift right ONCE incrementing exponent
	  mantissa = mantissa / 2;
	  exponent++;
	} // if (value == 3 || value == 4) 

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
      
           
      // Normalization
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

      value = mantissa_mult / TWO_RAISED_46 % 4;
       
	if (value == 0)
	  {
	   for ( ;exponent != 0 && mantissa_mult / TWO_RAISED_46 % 4 != 1; )
	      { 
		mantissa_mult =  mantissa_mult * 2;
		exponent--;
	      }
	  } // if (value == 0)
	
	if (value == 2 || value == 3)
	  { // just shift right ONCE incrementing exponent
	    mantissa_mult =  mantissa_mult / 2;
	    exponent++;
	  } // if (value == 2 || value == 3)
      
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
     
     
     
       /* Since we are using the integer arithmetic of C (and not of the 
	* underlying processor), we cannot simply subtract the exponent.
	* in fact, we should equalize the exponent to the higher of the two
	* and then carry out the division followed by normalization.
	* This is for proper mantissa alignment -- 
	* Now actual biased exponent obviously is 0 + 127 = 127
        */
     
     // equalizing the exponents
     diff = exponent1 - exponent2;
     if (diff > 0)
       // exponent1 > exponent2 -- shift right mantissa2
       {
	 for ( ;diff > 0; )
	   {
	     mantissa2 = mantissa2 / 2;
	     diff--;
	   }
	 
       }
     else    // diff <= 0
       if (diff < 0)
	 { // exponent1 < exponent2 -- shift right mantissa1
	   for ( ;diff < 0; )
	     {
	       mantissa1 = mantissa1 / 2;
	       diff++;
	     }
	   
	 }
     
     exponent = 0;
     mantissa =   mantissa1 / mantissa2;
     
     /* For division the mantissa is a pure integer with the redix point after
      * entire 23 bit string which is to be SHIFTED right to bring to a value 
      * 1.xxx...  during normalization
      */
     
     /********* NORMALIZATION for DIVISION   ****/
     
     //unsigned int actualMantissa = 0;
     for ( ;mantissa != 1; )
       { actualMantissa = (mantissa % 2) * TWO_RAISED_31 + actualMantissa / 2;
         mantissa = mantissa / 2;
         exponent++;
       } // for ( ;mantissa != 1;)
     
     
         /* the final result calculation that follows wants the mantissa to be a
          * 24 bit number with a 1 in the 24th bit -- this bit is now in 
          * "mantissa[0]".The most significant 23 bits of "actaulMantissa" 
          * gives the 23 bits of result mantissa. so we have the following:
          */
     mantissa = TWO_RAISED_23 + actualMantissa / 512;  // 2^9 = 512
     
     // now bias the exponent 
     exponent = exponent + 127; 
   } // if (option = 4)
 
 
 
 
 

 
 // PREPARE the union variable "result"  
 /* To make "mantissa[23]" = 0, simple take "mantissa % TWO_RAISED_23" 
  * which will only have its lower significant 22 bits 
  */
 result = (unsigned int) (sign * TWO_RAISED_31 + exponent * TWO_RAISED_23 
    + mantissa % TWO_RAISED_23);


 //printf ("the calculated result (unsigned int): %u\n", result);

 
    
  
} //end main 


