// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// # define TWO_RAISED_23 8388608
// # define TWO_RAISED_24 16777216 


/*  this function extracts the sign bit from the 32-bit pattern of the integer 'number' 
    "sign=(number DIV 2^31 ) MOD 2"    
*/
int calculate_sign(long int number)
{
  long int sign;
  int binary_sign,i;
  sign=number;
  for(i=0;i<31;i++) sign=sign/2; /* the interger variable 'sign' is divided 31 times by
					      '2', this is done to shift the 31 bits of the 
					      32-bit pattern of integer 'sign' to the right*/

  binary_sign=sign%2; /*  'sign mod 2 ' will extract the (sign bit )right most bit of the 32-bit pattern 
			       for the integer 'sign' */
  return binary_sign;
  
}



/*  
    this function extracts the  mantissa (integer)  from the 32-bit pattern of the integer 'number'
    "mantissa=number MOD (2^23) + (2^23) "
*/
long int calculate_mantissa(long int number)
{

  long int mantissa;
  int TWO_RAISED_23;
  TWO_RAISED_23=8388608;
 
  
  mantissa=number%TWO_RAISED_23; /* this operation extracts the rightmost 23 bits (in integer)
					      from the 32 bit pattern of the integer 'number'  */

  
  mantissa=mantissa+TWO_RAISED_23; // 2 ^ 23  has been added to incorporate hidden bit '1'

  mantissa=mantissa%16777216; /* mantissa should be less  than "(2^24)-1" for  a 32-bit integer 
					   with 23 bits assigned to mantissa, this means all the 23-bits of mantissa is '1' */
  return mantissa;
}




/*  
    this function extracts the  exponent (integer)  from the 32-bit pattern of the integer 'number'
    "exponent = (number * 2 ) DIV (2^24)"
*/
long int calculate_exponent(long int number)
{
  long int exponent;   
  int TWO_RAISED_24;
  TWO_RAISED_24=16777216; 
  exponent=number*2;
  exponent=exponent/TWO_RAISED_24;              /* 'number*2' shifts the 32-bit pattern of the 
						  integer 'number' to the left by '1' , in the 
						  resultant 32-bit pattern for the integer 'number' ,
						  the left most 8-bit pattern is 8-bit exponent , 
						  which is extracted  when DIVIDED by 2^24
						*/  

  exponent=exponent%256; // exponent is a 8-bit pattern which should be less than "2^8 "	 
  return exponent;
}






/*  this function adds two mantissa's and returns  the resultant mantissa */
long int add_mantissa(long int mantissa1,long int mantissa2)
{
  long int mantissa;
  mantissa=mantissa1+mantissa2;
  return mantissa;
}



/*  this function  subtracts the two mantissa's and returns the resultant mantissa */
long int sub_mantissa(long int mantissa1,long int mantissa2)
{
  long int mantissa;
  mantissa=mantissa1-mantissa2;
  return mantissa;
}


/* main function */
void main()
{
  long int number,number1,number2,exponent,exponent1,exponent2,mantissa,mantissa1,mantissa2;
  int diff, option, sign, sign1, sign2, flag1, count, i, shift;
  diff=0;
  option=0;
  flag1=0;
  count=0;
  shift=0;

   
  option=2;
  number1=8645823;
  
  number2=9864986;
    
  sign1=calculate_sign(number1);	
  
  
  mantissa1=calculate_mantissa(number1);
  
  
  
  exponent1=calculate_exponent(number1);
 
  
  sign2=calculate_sign(number2);	
   
  mantissa2=calculate_mantissa(number2);
    
  exponent2=calculate_exponent(number2);
   

  if(option==1)     {
     
      diff=exponent1-exponent2;
      if(diff>0)flag1=1; /* if flag1==1, exponent of  number1 is greater than exponent of number 2 */
      else if(diff<0)flag1=2;/* if flag1==2, exponent of  number2 is greater than exponent of number 1 */
      else if(diff==0)flag1=0; // flag1==0 , both the exponents are equal

      if(flag1==2) // if exponent of number2 is greater than exponent of number1
	  {
	  diff=-diff;
	  exponent1=exponent1+diff; // exponent1 is equalize to expoent2

	  // i=diff;
	  for(i=diff;i!=0;i--) // mantissa1 is shifted 'diff' times to the right
	    {
	      mantissa1=mantissa1/2;
	      // i--;
	    }
	}// end of "if(flag1==2)"

      else if(flag1==1)// if exponent of number1 is greater than exponent of number2
	{ 
	  exponent2=exponent2+diff; // exponent2 is equalize to exponent1
	  // i=diff;
	  for(i=diff;i!=0;i--) // mantissa2 is shifted 'diff' times to the right
	    {
	      mantissa2=mantissa2/2;
    //    i--;
	    }
	}// end of "else if(flag1==1)"


      if(sign1==sign2) // if both the numbers are of same sign
	{
	  mantissa=add_mantissa(mantissa1,mantissa2);
	  /* the max value of the 23-bit pattern for mantissa is when all the 23-bits are one  which is equal to "(2^24)-1=16777215",
	     for a 23-bit pattern mantissa , the integer value of mantissa should be less than equal 16777215.
	   mantissa is normanlized by shifting it to right  till the integer value of mantissa is > 16777215 */

	  //normalizing the mantissa
	  for(count=0;mantissa<16777215;count++) 
	    {
	      mantissa=mantissa/2;
	      // count++; // count contains the number of times the mantissa is shifted to the right
	    } 
	  exponent=exponent1+count; // exponent is normalized

	  sign=sign1; // sign of resultant number is equal to the sign of teh first number
	}// end of "if(sign1==sign2)"

      else if(sign1!=sign2)// if the numbers are of different signs
	{

	  mantissa=sub_mantissa(mantissa1,mantissa2);
	  if(mantissa < 0) mantissa=-mantissa; // the integer value of mantissa is made positive

	  // count=0;
	  /*the normalized integer value of mantissa should be  greater than
	   "(2^23)=8388608 , 2^23 is the minimum integer value for a 23-bit pattern mantissa*/

	  // normalizing the mantissa
	  for(count=0;mantissa<8388608;count++)
	    {
	      mantissa=mantissa*2;
//	      count++;//count contains the number of times the mantissa is shifted to the left
	    } 
	  exponent=exponent1-count;// exponent is normailzed

	  if(mantissa1>mantissa2) sign=sign1;
	  else if(mantissa2>mantissa1) sign=sign2;
	}// end of "else if(sign1!=sign2)"

                 
    }// end of  "if(option==1)"

  if(option==2) // Subtraction
    {
      /* equalizing the exponents  */
      
      diff=exponent1-exponent2;
      if(diff>0)flag1=1; /* if flag1==1, exponent of  number1 is greater than exponent of number 2 */
      else if(diff<0)flag1=2;/* if flag1==2, exponent of  number2 is greater than exponent of number 1 */
      else if(diff==0)flag1=0; // when exponents are equal
      
      if(flag1==2) // if exponent of number2 is greater than exponent of number1
	{
	  diff=-diff;
	  exponent1=exponent1+diff; // exponent1 is equalize to expoent2

	  // i=diff;
	  for(i=diff;i!=0;i--) // mantissa1 is shifted 'diff' times to the right
	    {
	      mantissa1=mantissa1/2;
	     // i--;
	    }
	}// end of "if(flag1==2)"

      else if(flag1==1)// if exponent of number1 is greater than exponent of number2
	{ 
	  exponent2=exponent2+diff; // exponent2 is equalize to exponent1
	 // i=diff;
	  for(i=diff;i!=0;i--) // mantissa2 is shifted 'diff' times to the right
	    {
	      mantissa2=mantissa2/2;
	      // i--;
	    }
	}// end of "else if(flag1==1)"


      if(sign1==sign2) // if both the numbers are of same sign
	{
	  mantissa=sub_mantissa(mantissa1,mantissa2);
	  if(mantissa < 0) mantissa=-mantissa;

	 // count=0;
	  /*the normalized integer value of mantissa should be  greater than
	   "(2^23)=8388608 , 2^23 is the minimum integer value for a 23-bit pattern mantissa*/

	  // normalizing the mantissa
	  for(count=0;mantissa<8388608;count++)
	    {
	      mantissa=mantissa*2;
	    //  count++;//count contains the number of times the mantissa is shifted to the left
	    } 
	  exponent=exponent1-count;//exponent is normalized

	  if(mantissa1>mantissa2) sign=sign1;
	  else if(mantissa2>mantissa1)
	    if(sign2==1)sign=0;
	    else if(sign2==0)sign=1;
	}// end of "if(sign1==sign2)"

      else if(sign1!=sign2)// if the numbers are of different signs
	{

	  mantissa=add_mantissa(mantissa1,mantissa2);
	  // count=0;
	  /* the max value of the 23-bit pattern for mantissa is when all the 23-bits are one  which is equal to "(2^24)-1=16777215",
	     for a 23-bit pattern mantissa , the integer value of mantissa should be less than equal 16777215.
	     mantissa is normanlized by shifting it to right  till the integer value of mantissa is > 16777215 */

	  // normalizing the mantissa
 	  for(count=0;mantissa<16777215;count++)
	    {
	      mantissa=mantissa/2;
	      // count++;//count contains the number of times the mantissa is shifted to the right
	    } 
	  exponent=exponent1+count;// exponent is normalized

	  sign=sign1;
	}// end of "else if(sign1!=sign2)"

      
            
      
    }// end of  "if(option==2)"

  if(option==3)//multiplication
    {

      exponent=exponent1+exponent2; 
      exponent=exponent-127;  // 127 is subtracted to take care of the bias(=127)

      mantissa=mantissa1*mantissa2; // mantissa is now  46-bit pattern, mantissa1 and mantissa2 each are of 23-bit pattern
      // count=0;
      /* the max value of the 23-bit pattern for mantissa is when all the 23-bits are one  which is equal to "(2^24)-1=16777215",
	 for a 23-bit pattern mantissa , the integer value of mantissa should be less than equal 16777215.
	 mantissa is normanlized by shifting it to right  till the integer value of mantissa is > 16777215 */
      
      // normalizing the mantissa
      for(count=0;mantissa<16777215;count++)
	{
	  mantissa=mantissa/2;
	 // count++;//count contains the number of times the mantissa is shifted to the right
	} 
      

      /* count contains the the total shift ,"count = 23-bit shift +' shift' (to normalize the mantissa)" ,
	 23-bit shift is needed as the mantissa is 23-bit pattern, and 'shift' number of shifts is needed 
	 to normalize the resultant mantissa after multiplication */
      if(count>23) shift=count-23;
      
      exponent=exponent+shift; // exponent is normalized by 'shift' number of times

      if(sign1==sign2) sign=0;
      else if (sign1 != sign2) sign=1;

          
    }// end of if(option==3)


  }


