//#include <stdio.h>

int main(){
  int a1, a2, a3, a4, a5, a6, a7, a8;
  int a12_s, a34_s, a56_s, a78_s;
  int a14_s, a58_s;
  int a18_s;
  
if(a1<a2){ 
a12_s = a1;
}else{
a12_s = a2;
}
if(a3<a4){ 
a34_s = a3;
}else{
a34_s= a4;
}
if(a5<a6){
a56_s = a5;
}else{
a56_s = a6;
}
if(a7<a8){
a78_s = a7;
}else{
a78_s = a8;
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

