// #include<stdio.h>
main()
{     
	int I,CCEN_BAR,CC_BAR,RLD_BAR,CI,OEbar,clk,D,E,Y,PL_BAR,VECT_BAR,MAP_BAR,FULL_BAR;
	int FAIL, SP, STACK, STACK_SP,RE, uPC, Y_temp; 

	for( ;clk==0; );

	if(SP==5)
		FULL_BAR=0;
	else  
    	FULL_BAR=1;

	if(I==0)    //JZ instruction
	{
		Y_temp=0;
      	if(RLD_BAR==0)          
          	RE=D;
      	
		SP=0;
      	uPC=0;
      	MAP_BAR=1;
      	VECT_BAR=1;
      	PL_BAR=0;
	}

	if(I==1)  // CJS instruction
	{ 
		if(FAIL==0)          
         	 Y_temp=D;
    	if(SP!=5)
		{
			SP=SP+1;
	    	STACK_SP=uPC;
		}
    else
       Y_temp=uPC;
	if(RLD_BAR==0)
            RE=D;
      uPC=Y_temp;
      MAP_BAR=1;
      VECT_BAR=1;
      PL_BAR=0; 
}
if(I==2) 
{
	Y_temp=D;
      if(RLD_BAR==0) 
      	RE=D;
      uPC=Y_temp;
      MAP_BAR=0;
      VECT_BAR=1;
      PL_BAR=1; 
}
if(I==3)
{
 	if(FAIL==1)
		 Y_temp=uPC;
	else
		 Y_temp=D;
      if(RLD_BAR==0)
             RE=D;
      uPC=Y_temp;
	MAP_BAR=1;
      VECT_BAR=1;
      PL_BAR=0;
} 
if(I==4)
{
	Y_temp=uPC;
      if(FAIL==0||RLD_BAR==0)
		E=D;
	if(SP<=5)
     		 SP=SP+1;     
	STACK_SP=uPC;
	uPC=Y_temp;
      MAP_BAR=1;
      VECT_BAR=1;
      PL_BAR=0;
} 
if(I==5)
{
	if(FAIL==1)
		 Y_temp=RE;
	else
		 Y_temp=D;
      if(RLD_BAR==0)
		 RE=D;
      if(SP<=5)
		 SP=SP+1;
      STACK_SP=uPC;
      uPC=Y_temp;
      MAP_BAR=1;
      VECT_BAR=1;
      PL_BAR=0; 
}
if(I==6)
{
    if(FAIL==1)
		Y_temp=uPC;
    else
		Y_temp=D;
    if(RLD_BAR==0)
		RE=D;
    uPC=Y_temp;
    MAP_BAR=1;
    VECT_BAR=0;
    PL_BAR=1; 
}
if(I==7)
{   if(FAIL==1)
	Y_temp=RE;
    else
	Y_temp=D;
    if(RLD_BAR==0)
	 RE=D;
    uPC=Y_temp;
    MAP_BAR=1;
    VECT_BAR=1;
    PL_BAR=0; 
}
if(I==8)
{
   if(RE==0)
   {
	Y_temp=uPC;
      if(SP<=0)
         SP=SP-1;
	else
	  Y_temp=STACK_SP;
	if(RLD_BAR==1)
             RE=RE-1;
   }  
   if(RLD_BAR==0) 
	 RE=D;
   uPC=Y_temp;
   MAP_BAR=1;
   VECT_BAR=1;
   PL_BAR=0; 
}
if(I==9)
{
  if(RE<=0)
  {
	Y_temp=D;
      if(RLD_BAR==1)
           RE=RE-1;
  } 
  else
      Y_temp=uPC;
 if(RLD_BAR==0) 
	RE=D;
 uPC=Y_temp;
MAP_BAR=1;
VECT_BAR=1;
PL_BAR=0;
}
if(I==10) 
{
    if(FAIL==0)
     {
        Y_temp=STACK_SP;
        if(SP<=0)
	      SP=SP-1;   
        else
		Y_temp=uPC;
     }
    if( RLD_BAR==0)
	RE=D;
    uPC=Y_temp;

    MAP_BAR=1;
    VECT_BAR=1;
    PL_BAR=0; 
}
if(I==11)
{
   if(FAIL==0)
	 {
		Y_temp=D;
   		if(SP!=0)
      	SP=SP-1;
	  }
        else
	     Y_temp=uPC;
  if(RLD_BAR==0)
	RE=D;
  uPC=Y_temp;
MAP_BAR=1;
    VECT_BAR=1;
    PL_BAR=0; 
}
if(I==12)
{
    Y_temp=uPC;
    RE=D;
    uPC= Y_temp;
    MAP_BAR=1;
    VECT_BAR=1;
    PL_BAR=0; 
}
if(I==13)
{
  if(FAIL==0)
   {  Y_temp=uPC;
      if (SP!=0)
          SP=SP-1;
	else
          Y_temp=STACK_SP;
   }	     
   if(RLD_BAR==0)
	 RE=D;
   uPC=Y_temp;
   MAP_BAR=1;
    VECT_BAR=1;
    PL_BAR=0; 
}
if(I==15)
{	
   Y_temp=uPC;
   if(RLD_BAR=0)
	RE=D;
   uPC=Y_temp; 
   MAP_BAR=1;
    VECT_BAR=1;
    PL_BAR=0; 
}
if(I==15)
{
	      if(RE==0)
            {    
                 if(FAIL==1)
                    Y_temp=D;
                 else
                    Y_temp=uPC;
                if(SP!=0)
                 SP=SP-1;             
            }
	      else
            {
		 if(FAIL==0)
                    Y_temp=uPC;

		    if(SP!= 0)
                       SP=SP-1;
		    else
                    Y_temp=STACK_SP;
    		    if(RLD_BAR==1)
                    RE=RE-1;
                 
             }

	      if(RLD_BAR==0)
      		 RE=D;
	      uPC=Y_temp;
		MAP_BAR=1;
    		VECT_BAR=1;
    		PL_BAR=0; 
}
   

if(OEbar==0)
    Y=Y_temp;
else
    Y=-1;
}





