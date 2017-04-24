//#include <stdio.h>

int main(){
  int a[8];
  int a12_s, a34_s, a56_s, a78_s;
  int a14_s, a58_s;
  int a18_s;
  
if(a[0]<a[1]){ 
a12_s = a[0];
}else{
a12_s = a[1];
}
if(a[2]<a[3]){ 
a34_s = a[2];
}else{
a34_s= a[3];
}
if(a[4]<a[5]){
a56_s = a[4];
}else{
a56_s = a[5];
}
if(a[6]<a[7]){
a78_s = a[6];
}else{
a78_s = a[7];
}
if(a12_s<a34_s){
a14_s = a12_s;
}else{
a14_s = a34_s;
}
if(a56_s<a78_s){ 
a58_s = a56_s;
}else{
a58_s = a78_s;
}
if(a14_s<a58_s){
a18_s = a14_s;
}else{
a18_s = a58_s;
}
	return a18_s;
}

