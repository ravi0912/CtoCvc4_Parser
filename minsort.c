

main sort()
{
int n_s;
int min_s,i_s,j_s,temp_s,j_star_s;
int a_s[8];
a_s[0]=23;
a_s[1]=11;
a_s[2]=27;
a_s[3]=19;
a_s[4]=12;
a_s[5]=10;
a_s[6]=31;
a_s[7]=7;
min_s = a_s[0];
for(i_s=0;i_s<=n_s-2;++i_s){
min_s = a_s[i_s];
j_star_s = i_s;
for(j_s=i_s+1;j_s<=n_s-1;++j_s){
if(a_s[j_s]<min_s){
min_s=a_s[j_s];
j_star_s=j_s;
}
}
temp_s = a_s[i_s];
a_s[i_s] = a_s[j_star_s];
a_s[j_star_s] = temp_s;
}
}
