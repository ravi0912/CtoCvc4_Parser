	int a[8];

void sort(int n)
{

	int min,i,j,temp,j_star;

        a[0]=23; a[1]=11; a[2]=27; a[3]=19;
        a[4]=12; a[5]=10; a[6]=31; a[7]=7;
        
	min = a[0];

	for(i=0;i<=(n-2);++i){
		min = a[i]; j_star = i;
		for(j=i+1;j<=(n-1);++j){
			if(a[j]<min){
				min=a[j];
				j_star=j;
			}
		}
		temp = a[i];
		a[i] = a[j_star];
		a[j_star] = temp;
	}
}
