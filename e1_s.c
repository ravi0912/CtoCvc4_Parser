//GCD of two INT
int main()
{
    int n1, n2, gcd_s,n_s,d_s;
    int k1_s,k2_s;
    gcd_s=1;
    if(n1 <= n2){
        n_s = n1;
    }else{
        n_s = n2;
    }
    if(n1>0 && n2>0){
        for(int i=1; i <= n_s; ++i){
            k1_s = n1/i;
            k2_s = n2/i;
            k1_s = n1 - k1_s*i;
            k2_s = n2 - k2_s*i;
            if(k1_s==0 && k2_s ==0){
                gcd_s = i;
            }else{
                d_s = gcd_s + 1;
            }
        }    
    }else{
        gcd_s=0;
    }
    

    return gcd_s;
}