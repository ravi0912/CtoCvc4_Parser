//#include <stdio.h> 

int main()
{

    int   ft, ftm1, ftm2, ecgm1, ecg1, ysi;
    int   ymax,xmax,y0,ath,ys,y0m2,zmax,y0m1;
    int   sth1,sth2,lxmax,lymax,lzmax;
    int   low,high;
    int   count, indx, RR;;
    int   fl3;
    int   fl1, fl2;
    int   rc, rdy, RRpeak, we, fl3o, RRo,i,data;

  
    rdy    = 0;
    RRpeak = 0;
    fl3o   = 0;
    RRo    = 0;
    y0m1   = 0;
    y0m2   = 0;
    ymax   = 0;
    xmax   = 0;
    zmax   = 0;
    RR     = 0;         
    lymax  = 0;
    lzmax  = 0;
    lxmax  = 0;
    fl3    = 0;
    fl1    = 0;
    fl2    = 0;
    count  = 0;
    //while(we != 0);                
    rdy = 1;                          
    //while(we != 1);                  
    low = data;                         
    rdy = 0;                         //   disable ready to read     

    //while(we != 0);                //   wait until sender is free 
    rdy = 1;                           //   announce ready to read    
    //while(we != 1);                  //   wait until sender has sent
    high = data;                            //   read data                 
    rdy  = 0;                        //   disable ready to read     

    //while(we != 0);                //   wait until sender is free 
    rdy = 1;                           //   announce ready to read    
    //while(we != 1);                  //   wait until sender has sent
    indx = data;                            //   read data                 
    rdy  = 0;                        //   disable ready to read     

    //while(we != 0);                //   wait until sender is free 
    rdy = 1;   
    //while(we != 1);                         //   announce ready to read    
    ftm2 = data;                            //   read data                 
    rdy  = 0;                        //   disable ready to read     

    //while(we != 0);                          //   wait until sender is free 
    rdy = 1;                           //   announce ready to read    
    //while(we != 1);                  //   wait until sender has sent
    ftm1  = data;                           //   read data                 
    ecgm1 = ftm1;    


    for(i=1; i<=indx; i++)
    {
        rdy = 0;                     //   disable ready to read
        //while(we != 0);            //   wait until sender is free 
        rdy = 1;                       //   announce ready to read    
        //while(we != 10);               //   wait until sender has sent
        ecg1 = data;                        //   read data                 

        ft  = ftm1 + (ecg1 - ecgm1) - ((ecg1 - ecgm1)/256);
        ysi = ft - ftm2;
	if(ysi > ymax) 
            ymax = ysi; 
	if(ft > xmax) 
           xmax = ft;  
      	if(ft > 0) 
           y0 = ft;
	ath = xmax / 4;
	if( ath > y0) 
          y0 = ath; 
	ys = y0 - y0m2;
	if(ys > zmax) 
          zmax = ys; 
	ftm2  = ftm1;
	ftm1  = ft;
	ecgm1 = ecg1;
	y0m2  = y0m1;
	y0m1  = y0;
        sth1  = (ymax / 2) + (ymax / 8) + (ymax / 16);
        sth2  = (zmax / 2) + (zmax / 8) + (zmax / 16);
  }
 
    
   // do
    //{
        if(ysi > sth1) 
        {
	    fl1   = 1;
	    count = 0;
        }
        if(ys > sth2)
        {
            fl2   = 1;
            count = 0;
        }
	if((fl1 == 1) && (fl2 == 1) && (RR > low)) 
        {
            RRpeak = 1;
            xmax  = (xmax / 2) + (xmax / 4) + (xmax / 8) + (lxmax / 8);
            ymax  = (ymax / 2) + (ymax / 4) + (ymax / 8) + (lymax / 8);
            zmax  = (zmax / 2) + (zmax / 4) + (zmax / 8) + (lzmax / 8);
            RR    = 0;
            count = 0;
            fl1   = 0;
            fl2   = 0;
            fl3   = 0;
            lxmax = 0;
            lymax = 0;
            lzmax = 0;
        }
        else
            RRpeak = 0;
      
            
        if((fl1 == 1) ||  (fl2 == 1)) 
            count = count + 1;
       

        fl3o  = fl3;
        RRo   = RR;
        
        rdy = 0;                     //   disable ready to read
        //while(we != 0);            //   wait until sender is free 
        rdy = 1;                       //   announce ready to read    
        //while( we != 1);              //   wait until sender has sent
        ecg1 = data;                        //   read data                 

        ft  = ftm1 + (ecg1 - ecgm1) - ((ecg1 - ecgm1)/256);
        ysi = ft - ftm2;
        if(ysi > lymax) 
          lymax = ysi; 
        if( ft > lxmax) 
          lxmax = ft;  
        if(ft > 0) 
          y0 = ft;  
        ath = (xmax / 4);
        if(y0 < ath) 
          y0 = ath; 
        ys = y0 - y0m2;
        if(ys > lzmax)
           lzmax = ys; 
        if(count == 8)
        {
            fl1   = 0;
            fl2   = 0;
            count = 0;
        }
        
        if(RR > high) 
        {    fl3  = fl3 + 1;
            RR   = 0;
            ymax = (ymax / 2);
            zmax = (zmax / 2);
        }
        
        sth1 = (ymax / 2) + (ymax / 8) + (ymax / 16);
        sth2 = (zmax / 2) + (zmax / 8) + (zmax / 16);
        RR   = RR + 1;
        ecgm1 = ecg1;
        y0m2  = y0m1;
        y0m1  = y0;
        ftm2  = ftm1;
        ftm1  = ft;
        
   // }while(rc==0);
}

