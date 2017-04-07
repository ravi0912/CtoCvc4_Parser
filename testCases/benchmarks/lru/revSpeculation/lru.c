// #include<stdio.h>
int main()
{
	/* input */
	int clk, mru, reset;
   /*output */
	int lru;
	/* variable */
	int found, eop, breakLoop;
    long int list, temp_list, temp, temp1;
	short int newGuy, pushTo, i, j, last;
	eop=0;
	breakLoop=0;

	for( ; clk!=1; );

	for( ;eop==0; )  //reset loop
	{
		for( ; clk!=1; );
		eop=0;
		breakLoop=0;
		if(reset==1)
		{
			eop=1;
			breakLoop=1;
		}
		if(eop==0)
		{
			found=0;
			newGuy=mru;
			i=0;
			for( ;i<last && found==0 && breakLoop ==0; )
			{
				temp=0;
				for(j=0; j<=i; j++) //calculating the index for list
				{
					temp=temp*256;
				}
				temp_list=list%(temp+8);
				temp_list=temp_list/temp; // now temp_list basically list(i).
				
				if(temp_list == newGuy)
					found=1;
				else
					i=i+1;

				for( ; clk!=1; );
			
				eop=0;
				breakLoop=0;
				if(reset==1)
				{
					eop=1;
					breakLoop=1;
				}			
			}
			if(eop==0)
			{
				if(found==1)
					pushTo=i;
				else
				{
					if(last<7)
						pushTo=last+1;
					else
						pushTo=last;
					last=pushTo;
				}
				for( ; clk!=1; );
		
				eop=0;
			
				if(reset==1)
				{
					eop=1;
				}
				if(eop==0)
				{
					
					temp=0;
					for(j=0; j<=pushTo; j++) 
					{
						temp=temp*256;
					}
					temp_list=list%(temp);
					temp_list=temp_list*256;
					temp1=temp*256;
					list=list/(temp1);
					list=list*(temp1);					
					list=list+temp_list;					
				
					eop=0;					
					if(reset==1)
					{
						eop=1;
					}					
				
					if(eop==0)
					{
						list=list/256;
						list=list*256;
						list=list + newGuy;
						temp_list=list%((last+1)*256);
						temp_list=temp_list/(last*256);
						lru=temp_list;
					}
				} //end if(eop==0)
			
			} //end if(eop==0)			
		} //end -if(eop==0)	
	}
   	   
}
