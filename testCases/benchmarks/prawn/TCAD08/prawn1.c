//#include<stdio.h>

int main()
{
	/* Inputs */
	int clk, databus_i, interrupt, reset;

	/* outputs  */
	int read_mem, write_mem, databus_o, adbus, inta;

	/*  variables */
	int pc, ipc, ac, byte1, byte2, byte3, ibyte1, ibyte3, i, v, c, n, z, ns, 
		i_status, flag, temp, itemp, iac, idbus, icarry;

	if(reset == 1)
	{  
		/* handle reset */

		pc=0;
		databus_o=0;
		adbus=0;
		read_mem=0;
		write_mem=0;
		inta=0;
		i=0;
		v=0;
		c=0;
		z=0;
		n=0;
		for( ; clk!=1; ); //wait until clk = 1  
	}
	else // if(reset !=1)
	{
		/* check the interrupt request and the interrupt flag. */

		if ((interrupt==1)&&(i==1))
        	i_status=1;
      	else 
			i_status=0;
		
		flag=(i%2)*16 + (v%2)*8 + (c%2)*4 + (z%2)*2 + n;  // flag := i & v & c & z & n;

		/* read first byte into byte1, increment the program counter.
       		if interrupt was accepted,
       		read first byte of start address of interrupt handling routine. */
		
		adbus=pc;
		if(i_status==1)
	   		inta=1; 
		else
	   		read_mem=1;	
		for( ;clk!=1; ); // wait until (clk = '1'); 
	
		byte1=databus_i;
 		if(i_status==1) 
          inta=0;  
      	else 
          read_mem=0;
	   	for( ;clk!=1; ); // wait until (clk = '1');
		
		if(i_status==0)
		{
			ipc=pc%256;
			ipc=ipc+1;
			pc=ipc;
		}

		/*  start decode & execution */

		if((byte1/32==14 || byte1==223) && i_status==0)
		{
			/* execute single-byte instructions */
			if((byte1%16)/4==3 || byte1==223 || byte1/16==3 || byte1/8==6)
			{
				/*  execute single-byte instructions which need stack operations.
	  				  -- read the stack pointer for all instructions
	 				  -- which need stack operations.
				*/
		  		adbus= 4095; //	adbus <= "111111111111";
				read_mem=1;

				for( ;clk!=1; ); // wait until (clk = '1');
				
				byte3=databus_i;
				read_mem=0;

				for( ;clk!=1; ); // wait until (clk = '1');

				if((byte1%4)/2 == 1) // byte1(1) = '1'
				{
					/* execute instructions which need to pop data from the stack,
	    			-- which are POP & POPF & JRT & BRT & IRT.
 					*/
					adbus=3840+byte3; //15*256=
					read_mem=1;
					
					for( ;clk!=1; ); // wait until (clk = '1');

					if(byte1==223 || byte1%16==3 || byte1%16==6)
					{
						/* execute return instructions. */
						if(byte1%16==6)
						{
							/* pop flags from the stack for IRT,
								-- increment the stack pointer for popping flags.
							*/
							flag=databus_i%32; 
							i=(flag%32)/16; //i:=flag(4);
							v=(flag%16)/8;  // v:=flag(3);
							c=(flag%8)/4;  //c:=flag(2);
							z=(flag%4)/2; // z:=flag(1);
							n=flag%2; // n:=flag(0);
							read_mem=0;
							
							for( ;clk!=1; ); // wait until (clk = '1');

							ibyte3 = byte3;
							ibyte3=ibyte3+1;
							byte3=ibyte3;
							adbus=3840+byte3;
							read_mem=1;

							for( ;clk!=1; ); // wait until (clk = '1');
							
						} // end-if(byte1%16==6) 
						
						/* pop offset part of address from the stack
	     					 -- for all return instructions,
	      					 -- return to the original(caller) control sequence.
						*/	 
						pc=databus_i;
						if(byte1%16 != 3)
						{
							/* pop page part of address from the stack for IRT & JRT,
								-- increment the stack pointer for popping the address,
								-- return to the original(caller) control sequence.	
							*/
							read_mem=0;

							for( ;clk!=1; ); // wait until (clk = '1');

							ibyte3=byte3;
							ibyte3=ibyte3+1;
							byte3=ibyte3;
							adbus=3840+byte3;
							read_mem=1;

							for( ;clk!=1; ); // wait until (clk = '1');							

							pc=(databus_i%16)*256 + pc%256; // 	pc(11 downto 8) := databus_i(3 downto 0);
						} //end-if(byte1%16 != 3)

					} // end -if(byte1==223 || byte1%16==3 || byte1%16==6) 
					else if(byte1%2==0)
					{
						/* execute POP */
						ac=databus_i;
					}
					else 
					{
						/* execute POPF */
						flag=databus_i%16;
						i=(flag%32)/16; //i:=flag(4);
						v=(flag%16)/8;  // v:=flag(3);
						c=(flag%8)/4;  //c:=flag(2);
						z=(flag%4)/2; // z:=flag(1);
						n=flag%2; // n:=flag(0);
					}

					read_mem=0;

					for( ;clk!=1; ); // wait until (clk = '1');							

					/*  increment the stack pointer
	    					-- for all instructions which need pop operation.
					*/
					ibyte3=byte3;
					ibyte3=ibyte3+1;
					byte3=ibyte3;
				}  // end-if((byte1%4)/2 == 1)
				else
				{
					/* execute instructions which need to push datum onto the stack,
	    				-- which are PUSH & PUSHF.
	    				--
	    				-- decrement the stack pointer
	   					-- for all instructions which need pop operation.
					*/
					ibyte3=byte3;
					ibyte3=ibyte3-1;
					byte3=ibyte3;

					for( ;clk!=1; ); // wait until (clk = '1');							

					adbus=3840 + byte3;
					if(byte1%2==0)
					{
						/* Execute PUSH */
						databus_o=ac;
					}
					else
					{
						/* execute PUSHF */
						databus_o=flag;						
					}
					write_mem=1;

					for( ;clk!=1; ); // wait until (clk = '1');		

					write_mem=0;

					for( ;clk!=1; ); // wait until (clk = '1');	
					
				} // end else-if((byte1%4)/2 == 1)				
			} // end-if((byte1/2)%16==3 || byte1==223 || byte1/16==3 || byte1/8==6)
			else //if((byte1/2)%16==3 || byte1==223 || byte1/16==3 || byte1/8==6)
			{
				/*  execute single-byte instructions
	  				-- which do not need the stack operations.
				*/
				if(byte1 == 1)
				{
					ac=0;
				}	
				if(byte1==2)
				{
					ac=256-ac;
					if(ac==0)
						z=1;
					else
						z=0;
					n=ac/128;
				}
				if(byte1==4)
				{
					c=1-c;
				}	
				if(byte1==5)
				{
					i=1;
				}
				if(byte1==7)
				{
					i=0;
				}
				if(byte1==8)
				{
					c=ac/128;
					ac=(ac%128)*2;
					n=ac/128;
					if(c!=n)
					{
						v=1;
					}
					else
					{
						v=0;
					}
					if(ac==0)
					{
						z=1;
					}
					else
					{
						z=0;
					}					
				}
				if(byte1==9)
				{
					ac=(ac/128)*128 + ac/2;
					if(ac==0)
					{
						z=1;
					}
					else
					{	
						z=0;
					}
					n=ac/128;
				}
				if(byte1==10)
				{
					ac=(ac%128)*2 + ac/128;
					if(ac==0)
					{
						z=1;
					}
					else
					{
						z=0;
					}
					n=ac/128;
				}
				if(byte1==11)
				{
					ac=(ac%2)*128 + ac/2;
					if(ac==0)
					{
						z=1;
					}
					else
					{
						z=0;
					}
				}

			} // end-if((byte1/2)%16==3 || byte1==223 || byte1/16==3 || byte1/8==6)
 
		} // if((byte1/8==14 || byte1==223) && i_status==0)	
		else // if((byte1/8==14 || byte1==223) && i_status==0)	
		{
			/*  execute two-byte instructions.
     			 --
      			 -- read second byte into byte2, increment the program counter.
      			 -- if interrupt was accepted,
     			 -- read second byte of start address of interrupt handling routine.
			*/
	   		adbus=pc;
	        if(i_status==1)
				inta=1;
			else
				read_mem=1;

			for( ;clk!=1; ); // wait until (clk = '1');		

			byte2=databus_i;
			if(i_status==1)
				inta=0;
			else 
				read_mem=0;

			for( ;clk!=1; ); // wait until (clk = '1');	

			if(i_status==0)
			{
				pc=pc+1;
			}

			if((byte1/16 == 12) || (byte1 == 252) || i_status == 1)
			{
				/*  execute subroutine instructions/interrupt handling.
	  				--
	  				-- read the stack pointer, decrement it.
				*/
				adbus=4095;
				read_mem=1;

				for( ;clk!=1; ); // wait until (clk = '1');

				byte3=databus_i;
				read_mem=0;
				
				for( ;clk!=1; ); // wait until (clk = '1');

				byte3=byte3-1;

				for( ;clk!=1; ); // wait until (clk = '1');

				if(byte1 != 252)
				{
					/* push page part of address onto the stack
	    				-- for JRT and interrupt handling,
	    				-- increment the stack pointer for pushing the address.
						*/	
					adbus=3840+byte3;
					databus_o=pc/256;
					write_mem=1;

					for( ;clk!=1; ); // wait until (clk = '1');

					write_mem=0;

					for( ;clk!=1; ); // wait until (clk = '1');

					byte3=byte3-1;
				} // end-if(byte1 != 252)

				/* push offset part of address onto the stack
	  				-- for subroutine instructions and interrupt handling.
					*/
				adbus=3840+byte3;
				databus_o=pc%256;
				write_mem=1;

				for( ;clk!=1; ); // wait until (clk = '1');

				write_mem=0;

				for( ;clk!=1; ); // wait until (clk = '1');

				if(i_status==1)
				{
					/* push flags onto the stack for interrupt handling,
	    			-- decrement the stack pointer for pushing flags
					*/
					byte3=byte3-1;
					adbus=3840 + byte3;
					databus_o=flag;
					write_mem=1;

					for( ;clk!=1; ); // wait until (clk = '1');

					write_mem=0;

					for( ;clk!=1; ); // wait until (clk = '1');

					i=0;
				} // end if(i_status==1)

				/*  write the stack pointer decremented
	  			-- for subroutine instructions/interrupt handling
				*/
				databus_o=byte3;
				adbus=4095;
				write_mem=1;

				for( ;clk!=1; ); // wait until (clk = '1');

				write_mem=0;

				for( ;clk!=1; ); // wait until (clk = '1');
	
				/* change the control sequence to the designated address. */
				if(byte1 != 252)
					pc=(byte1%16)*256 + byte2;
				else
					pc = (pc/256)*256 + byte2;
				
			} //end if((byte1/16 == 12) || (byte1 == 252) || i_status == 1)
			else if(byte1/16 == 15)
			{
				byte1_temp=byte1%16;
				/* execute branch instructions. */
				if((byte1_temp == 13) || 
				  (byte1_temp == 0 && n==1) ||
				  (byte1_temp == 1 && n==0) ||
				  (byte1_temp == 2 && z==1) ||
				  (byte1_temp == 3 && z==0) ||
				  (byte1_temp == 4 && c==1) ||
				  (byte1_temp == 5 && c==0) ||
				  (byte1_temp == 6 && c==0 && z==0) ||
				  (byte1_temp == 7 && c==1 && z==1) ||
				  (byte1_temp == 8 && v==1) ||
				  (byte1_temp == 9 && v==0) || 
				  (byte1_temp == 10 && ((n==1) && (v==0)) || ((n==0) || (v==1))) ||
				  (byte1_temp == 11 && ((n==0) && (v==0)) || ((n==1) || (v==1))) || 
				  (byte1_temp == 14 && ((z==1) || (((n==1) && (v==0))||((n==0) && (v==1))))) || 
				  (byte1_temp == 15 && ((z==0) || (((n==0) && (v==0))||((n==1) && (v==1))))))
				{
					pc=byte2;
				}
				
			}//end else if(byte1/16 == 15)
			else // else if(byte/16 ==15)
			{
				/* execute all other two-byte instructions */
				if((byte1%32)/16 == 1)
				{
					adbus = (byte1%16)*256 + adbus%256; // adbus(11 downto 8) <= byte1(3 downto 0);
					adbus = (adbus/256)*256 + byte2; // adbus(7 downto 0) <= byte2;
					read_mem=1;

					for( ;clk!=1; ); // wait until (clk = '1');

					byte2=databus_i;
					read_mem = 0;

					for( ;clk!=1; ); // wait until (clk = '1');
			
				} // if((byte1%32)/16 == 1)
				if(byte1/32 == 4)
				{
					/* execute JMP instruction,
	    			-- change the control sequence to the destination address.
					*/

					pc= byte1%16 + byte2;
				}
				else if(byte1/32 == 5)
				{
					adbus = (byte1%16)*256 + byte2;
					databus_o=adbus;
					write_mem=1;			
					write_mem=0;				
				} // end if(byte1/32 == 5)
				else
				{
					adbus = (byte1%16)*256 + byte2;
					read_mem=1;					
					ibyte1=byte1/32;
					if(ibyte1==0)
						ac=databus_i;
					if(ibyte1==1)
						ac=ac & databus_i;
					if(ibyte1==2)
					{
						iac=ac;
						idbus=databus_i;
						if(c==1)
							icarry=1;
						else
							icarry=0;
						itemp=iac + idbus + icarry;
						temp=itemp;
						ac=temp%128;
						c=(temp%256)/256;
						v=(temp%512)*512;
					}
					if(ibyte1==3)
					{
						iac=ac;
						idbus=databus_i;
						if(c==1)
							icarry=1;
						else
							icarry=0;
						itemp=iac-idbus-icarry;
						temp=itemp;
						ac=temp%128;
						c=(temp%256)/256;
						v=(temp%512)*512;
					}

					if(ac==0)
						z=1;
					else
						z=0;
					n=(ac%128)*128;
					read_mem=0;
					
									
				} // end else-if(byte1/32 == 5)
 
	
			}	
			 				
		}//end esle-if((byte1/8==14 || byte1==223) && i_status==0)
		 
		
				
	} // end else-if(reset !=1) 


	
}
