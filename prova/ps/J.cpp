#include <iostream>
#include <cstring>
#include <cmath>

#define MAX 10000
#define ll long long

using namespace std;

ll primes[MAX+10];
short is_prime[MAX+10];
ll pc = 0;

void precomp(){
	primes[pc++] = 2;
	memset(is_prime, 1, sizeof(is_prime));
	for(int i = 4; i<=MAX ; i+=2){
		is_prime[i] = 0;
	}

	int i;
	for (i = 3; (i*i) <= MAX; i+=2){
		if(is_prime[i]){
			primes[pc++] = i;
			for(int j = (i*i); j<=MAX ; j+=i){
				is_prime[j]=0;
			}
		}
	}

	if(!(i&1)) i++;
	for(;i<=MAX;i+=2){
		if(is_prime[i]){
			primes[pc++]=i;
		}
	}
}

ll sum_div(ll n){
	if(n==1) return 0;
	if(n<=MAX && is_prime[n]) return (n+1);
	ll sum = 1;
	for (int i = 0; i < pc && (primes[i]*primes[i]) <= n; ++i){
		ll multi = primes[i];
		while(!(n%primes[i])){
			n/=primes[i];
			multi*=primes[i];
		}
		sum*=(multi-1)/(primes[i]-1);
	}
	if(n!=1){
		sum*=(n*n-1)/(n-1);
	}
	return sum;
}

int main(){
	precomp();
	int testes = 0;
	cin >> testes;
	for (int i = 0; i < testes; ++i){
		ll n;
		cin>>n;
		ll sum = sum_div(n) - n;
		if(sum == 1){
			printf("Caso #%d: %lld e um numero primo\n", i+1, n);
		}else if(sum == n){
			printf("Caso #%d: %lld e um numero perfeito\n", i+1, n);
		}else if(sum < n){
			printf("Caso #%d: %lld e um numero deficiente\n", i+1, n);
		}else if(sum > n){
			printf("Caso #%d: %lld e um numero abundante\n", i+1, n);
		}
	}
}