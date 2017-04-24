#include <stdio.h>
//maximum of two number
int main(void)
{
    int n1, n2, n3,r_s;
    if( n1>=n2 && n1>=n3 ){
        r_s = n1;
    }else{
        if(n2>=n1 && n2>=n3){
            r_s = n2;
        }else{
            r_s = n3;
        }
    }
        
    return r_s;
}