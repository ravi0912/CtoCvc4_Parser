//sum of even and odd number

int main(){
	int n_s,o_s,e_s;
	int k_s;
	o_s = 0;
	e_s = 0;
	for(int i=0;i<n_s;i++){
		k_s = i / 2;
		k_s = i - 2*k_s;
		if(k_s==0){
			o_s = o_s + i;
		}else{
			e_s = e_s + i;
		}
	}
	
	return 0;
}