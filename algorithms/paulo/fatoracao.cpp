map<int,int> fatoracao(long long n){
	map<int,int> f;
	int r = 0;
	while(n%2==0){
		n/=2;
		r++;
	}
	if(r){
		f[2]=r;
	}
	int i = 1, p;
	while(n>1){
		p = primos[i++];
		if(p*p > n && (n<MAX && sieve[n]))
			break;
		r=0;
		while(n%p==0){
			n/=p;
			r++;
		}
		if(r){
			f[p] = r;
		}
	}
	if(n>1){
		f[p] = 1;
	}
}