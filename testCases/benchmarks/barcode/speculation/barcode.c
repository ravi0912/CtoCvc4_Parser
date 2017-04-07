// #include<stdio.h>
main()
{
/* inputs */
int reset, clk, scan, video, start,
num;

/* outputs */
int eoc, memw, data, addr;

/* variables */
int white, black, actnum, flag, wh, bl, eop, breakflag;

/* initialization */
wh=0;
bl=1;

eoc=0;
memw=0;
data=0;
addr=0;

eop=0;


for( ; ; )
{
	for( ; ; )
	{
		for(;clk!=1;); //wait untill clk=1
		eop=0;
		if(reset==1) // exit when reset==1
		{
			eop=1;
			break;
		}
        if(start==1)
		{
			break;

		}
	}
	
	if(eop==1)
		break;  // break from the outer loop

	for( ;actnum!=num&&white!=255; )
	{
		for( ; ; )
		{
			for( ;clk!=1; );
			eop=0;
			if(reset==1)
			{
				eop=1;
				break;
			}
			if(scan==1)
				break;
		}

		if(eop==1)
			break; //break the outer loop

		flag=wh;
		actnum=0;
		white=0;
		black=0;
		eoc=0;

		for( ;white!=255||black!=255; )
		{
			if(video==wh)
			{
				for( ;clk!=1; );

				eop=0;
				if(reset==1)
				{
					eop=1;
					break;
				}

				white=white+1;
				if(flag==bl)
				{
					actnum=actnum+1;
					memw=0;
				}
				else
					memw=1;

				black=0;
				flag=wh;
				data=white;				
			}
			else
			{
				for( ;clk!=1; );

				eop=0;
				if(reset==1)
				{
					eop=1;
					break;
				}

				black=black+1;
				if(flag==wh)
				{
					actnum=actnum+1;
					memw=0;
				}
				else
					memw=1;
		
				flag=bl;
				white=0;
				data=black;
			}
			if(eop==1)
				break;

			addr=actnum;
		} // end for( ;white!=255||black!=255; )

		if(eop==1)
			break;
	} //end for(;actnum!=num&&white!=255;)

	if(eop==1)
		break;

	memw=0;
	eoc=1;
	
	for( ;start!=0; )
	{
		for( ;clk!=1; );

		eop=0;
		if(reset==1)
		{
			eop=1;
			break;
		}
		if(start==0)
			break;			
	}
 }

}
