#include <iostream>
#include <cmath>
#include <map>
#include <cstring>

using namespace std;

#define MAX 10000

bool sieve[MAX+1];
int primos[MAX];

map<int,int> fatoracao(long long n){
	map<int,int> f;
	int r = 0;
	while(n%2==0){
		n/=2;
		r++;
	}
	if(r)
		f[2]=r;
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
		if(r)
			f[p] = r;
	}
	if(n>1)
		f[p] = 1;
	return f;
}

void precomp(){
	memset(sieve,0xff,(MAX+1)*sizeof(bool));
	sieve[0] = false;
	sieve[1] = false;
	int i, j;
	int count = 0;
	primos[count++];

	int limit = sqrt(MAX);
	for ( i = 3; i*i <= limit; i+=2){
		if(sieve[i]){
			primos[count++] = i;
			for (j = i*i; j <= MAX ; j+=i){
				sieve[j] = false;
			}
		}
	}
}

int main(){
	printf("Yep\n");
	precomp();
	for (int i = 0; i < MAX; ++i){
		printf("%d\n", primos[i]);
	}
	return 0;
}