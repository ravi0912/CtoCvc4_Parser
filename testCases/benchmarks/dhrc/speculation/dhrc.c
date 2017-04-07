// #include<stdio.h>

int main()
{
	/* input */
	short int clk, reset, a0_in, a1_in, a2_in, p339_in, p340_in,
		  p_in, v_in, dv_in;

	/* output */
	short int host_out;

	/* variable */
	long int p, v, dv, bv, temp1, temp2, mult_fact, mult_fact1;
	short int a0, a1, a2,
		  h1, h2, h3, h4, h5, h6, h7, h8, h9,
		  s, s1, s2, 
		  cv, dp, d, i, j, k;
	int   temp, eop;

	a0=0;
	a1=0;
	a2=0;

	h1=0;
	h2=0;
	h3=0;
	h4=0;
	h5=0;
	h6=0;
	h7=0;
	h8=0;
	h9=0;

	s=0;
	s1=0;
	s2=0;

	cv=0;
	dp=0;
	d=0;
	i=0;
	j=0;
	k=0;

	v=0;
	p=0;
	dv=0;
	bv=0;
	eop=0;
	for( ;eop==0; )
	{
		for( ; clk!=1; );

		a0=a0_in;
		a1=a1_in;
		a2=a2_in;
		p=p339_in;
		p=p*256;
		p=p/256;
		p=p+p340_in*72057594037927936;  //2^56 
		s=0;
		cv=0;
		h7=0;
		h6=0;
		h4=0;
		dp=0;
		host_out=0;
		i=0;
		eop=0;
		
		for( ;i<=6 && eop==0;i++)
		{
			for( ; clk!=1; );		
			
			if(reset==1)
			{
				eop=1;				
			}
			if(eop==1)
			{
				mult_fact=1;
				for(temp=0; temp<=i; temp++)
				{
					mult_fact=mult_fact*256;
				}
				temp1=p%mult_fact;
				temp2=p/(mult_fact*256);
				p=temp2*(mult_fact*256)+ p_in*mult_fact + temp1;
				
				temp1=v%mult_fact;
				temp2=v/(mult_fact*256);
				v=temp2*(mult_fact*256)+ v_in*mult_fact + temp1;
				
				temp1=dv%mult_fact;
				temp2=dv/(mult_fact*256);
				dv=temp2*(mult_fact*256)+ dv_in*mult_fact + temp1;							
			}
		}

		if(eop==0)
		{
			
			eop=0;
			for(i=1 ; i<=6 && eop==0;i++)
			{
				for( ; clk!=1; );
							
				if(reset==1)				
				{
					eop=1;
				}
				if(eop==0)
				{
					j=i+1;
					k=i-1;

					mult_fact=1;
					for(temp=0; temp<=j; temp++)
					{
						mult_fact=mult_fact*256;
					}
					temp1=p%mult_fact;
					temp2=p/(mult_fact*256);
					p=temp2*(mult_fact*256)+ p_in*mult_fact + temp1;

					mult_fact1=1;
					for(temp=0; temp<=k; temp++)
					{
						mult_fact1=mult_fact1*256;
					}

					d=(p%(mult_fact*256))/mult_fact -
						(p%(mult_fact1*256))/mult_fact1;
				
					dp=d/2;

					mult_fact=1;
					for(temp=0; temp<=i; temp++)
					{
						mult_fact=mult_fact*256;
					}

					h1=a0*(v%(mult_fact*256))/mult_fact;
					h2=h1/16;
					h3=a1+h2;
					h4=h3*(p%(mult_fact*256))/mult_fact;
					s2=dp*(v%(mult_fact*256))/mult_fact;
					h7=s2/4;
					h5=h4/4;
					cv=h5+a2;
					s1=((p%(mult_fact*256))/mult_fact) / 
						(dv%(mult_fact*256))/mult_fact;
					h6=s1/4;
					s=h6+h7;
					h8=s*cv;
					h9=h8/2;
					
					temp1=bv%mult_fact;
					temp2=bv/(mult_fact*256);
					bv=temp2*(mult_fact*256)+ (h9+h6)*mult_fact + temp1;

					host_out=(bv%(mult_fact*256))/mult_fact;

				} // end-if(eop==0)
			} // end for( ; i<=6 && eop==0;i++)
			
		} //end if(eop==0)
	}
}
