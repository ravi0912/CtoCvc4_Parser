//GCD of two INT

int main()
{
    int n1, n2, gcd_t,n_t,d_t;
    int k1_t,k2_t;
    gcd_t=1;
    if(n1>0 && n2>0){
        if(n1 <= n2){
            n_t = n1;
        }else{
            n_t = n2;
        }
        
        for(int i=1; i <= n_t; i=i+1){
            k1_t = n1/i;
            k2_t = n2/i;
            k1_t = n1 - k1_t*i;
            k2_t = n2 - k2_t*i;
            if(k1_t==0 && k2_t==0){
                gcd_t = i;
            }else{
                d_t = gcd_t + 1;
            }
        }    
    }else{
        gcd_t=0;
    }

    

    return gcd_t;
}