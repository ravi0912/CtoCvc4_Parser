#include <stdio.h>
//maximum of two number
int main(void)
{
    int n1, n2, n3,r_t;

    if (n1>=n2){
        if(n1>=n3){
            r_t=n1;
        }else{
            r_t=n3;
        }
    }else{
        if(n2>=n3){
            r_t=n2;
        }else{
            r_t=n3;
        }
    }
    
    return r_t;
}