//sum of even and odd number

int main(){
	int n_t,o_t,e_t;
	int k_t;
	o_t = 0;
	e_t = 0;
	int i_t;
	i_t=0;
	while(i_t<n_t){
		e_t = e_t + i_t;
		i_t = i_t + 2;
	}
	
	i_t = 1;
	while(i_t<n_t){
		o_t = o_t + i_t;
		i_t = i_t + 2;
	}

	return 0;
}