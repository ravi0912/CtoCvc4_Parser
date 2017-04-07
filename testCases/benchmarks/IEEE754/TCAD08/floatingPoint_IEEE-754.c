// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>



void normalize(float *m,int *e)
{
  int i,count=0,m4;
  float m5;

  m4=(int)*m;
 

  while(m4/10 !=0)
    {
      *m=(float)*m/10;
      m4=m4/10;
      count++;
    }
  *e=*e+count;
  //printf("\n %d\n",count);
  //printf("\n %f %d\n",*m,*e);
  return;
}



void main()
{
  int option,e1,e2,e,temp1,temp2=1,i,count1=0,m7,j;
  float m1,m2,m3,m,m6;

  printf("\n MENU\n");
  printf("\n 1. Addition");
  printf("\n 2. Subtraction");
  printf("\n 3. Multiplication");
  printf("\n 4. Division\n");

  printf("\n Enter your option :");

  scanf("%d",&option);

  if(option==1) // addition
    {
      printf("\n Addition");
      printf("\n enter the mantissa of first floating point number:");
      scanf("%f",&m1);
      printf("\n enter the exponent of first floating point number:");
      scanf("%d",&e1);

      printf("\n enter the mantissa of second floating point number:");
      scanf("%f",&m2);
      printf("\n enter the exponent of second floating point number:");
      scanf("%d",&e2);

      if(e1>e2)
	{
	  e=e1;
	  temp1=e1-e2; 
	  for(i=0;i<temp1;i++)temp2=temp2*10;

	  m3=(float)m2/temp2;
	  m=m1+m3;
	  normalize(&m,&e);
	  printf("\n %f * 10 ^  %d \n",m,e);
	}
      else if(e2>e1)
	{
	  e=e2;
	  temp1=e2-e1; 
	  for(i=0;i<temp1;i++)temp2=temp2*10;

	  m3=(float)m1/temp2;
	  m=m2+m3;
	  normalize(&m,&e);
	  printf("\n %f * 10 ^  %d \n",m,e);

	}
      else 
	{
	  e=e2;
	  m=m2+m1;
	  normalize(&m,&e);
	  printf("\n %f * 10 ^  %d \n",m,e);

	}
     
    }


  else if(option==2) // subtraction
    {
      printf("\n Subtraction");
      printf("\n enter the mantissa of first floating point number:");
      scanf("%f",&m1);
      printf("\n enter the exponent of first floating point number:");
      scanf("%d",&e1);

      printf("\n enter the mantissa of second floating point number:");
      scanf("%f",&m2);
      printf("\n enter the exponent of second floating point number:");
      scanf("%d",&e2);

      if(e1>e2)
	{
	  e=e1;
	  temp1=e1-e2;
	  for(i=0;i<temp1;i++)temp2=temp2*10;

	  m3=(float)m2/temp2;
	  m=m1-m3;
	  normalize(&m,&e);
	  printf("\n %f * 10 ^  %d \n",m,e);
	}
      else if(e2>e1)
	{
	  e=e2;
	  temp1=e2-e1; 
	  for(i=0;i<temp1;i++)temp2=temp2*10;

	  m3=(float)m1/temp2;
	  m=m3-m2;
	  normalize(&m,&e);
	  printf("\n %f * 10 ^  %d \n",m,e);

	}
      else 
	{
	  e=e2;
	  m=m1-m2;
	  normalize(&m,&e);
	  printf("\n %f * 10 ^  %d \n",m,e);

	}
     
    }

  else if(option==3) // Multiplication
    {
      printf("\n Multiplication");
      printf("\n enter the mantissa of first floating point number:");
      scanf("%f",&m1);
      printf("\n enter the exponent of first floating point number:");
      scanf("%d",&e1);

      printf("\n enter the mantissa of second floating point number:");
      scanf("%f",&m2);
      printf("\n enter the exponent of second floating point number:");
      scanf("%d",&e2);

      e=e1+e2;
      m=(float)m1*m2;
      normalize(&m,&e);
      printf("\n %f * 10 ^  %d \n",m,e);
    }

  else if(option==4)// Division
    {
      printf("\n Division");
      printf("\n enter the mantissa of first floating point number:");
      scanf("%f",&m1);
      printf("\n enter the exponent of first floating point number:");
      scanf("%d",&e1);

      printf("\n enter the mantissa of second floating point number:");
      scanf("%f",&m2);
      printf("\n enter the exponent of second floating point number:");
      scanf("%d",&e2);

      e=e1-e2;
      m=(float)m1/m2;
      normalize(&m,&e);

      m6=m;
      m7=(int)m;

      if(m7!=0)
	{
	  printf("\n %f * 10 ^  %d \n",m,e);
	}
      
      else 
	{
	  while(m7==0)
	    {
	      m6=m6*10;
	      count1++;
	      m7=(int)m6;
	    }
	  for(j=0;j<count1;j++)m=m*10;
	  e=e-count1;
	  printf("\n %f * 10 ^  %d \n",m,e);

	}
    }

  else printf("\n invalid option\n");
}
