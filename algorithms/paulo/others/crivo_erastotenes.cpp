#include <iostream>
#include <cstring>

#define ll long long
#define MAX_PRIME 100000 // Sao gerados primos ate este ponto

ll primes[MAX_PRIME + 10]; // Vetor que armazena os primos
short is_prime[MAX_PRIME + 10]; // Vetor auxiliar
ll prime_counter = 0; // Contador de primos

void sieve(){
	primes[prime_counter++] = 2;
	memset(is_prime, 1 , sizeof(is_prime));

	for(int i = 4; i<=MAX_PRIME; i +=2){
		is_prime[i] = 0;
	}

	int i;
	for(i=3; (i*i) <= MAX_PRIME; i+=2){
		if(is_prime[i]){
			primes[prime_counter++] = i;
			for(int j = i; j<= MAX_PRIME; j+=i){
				is_prime[j] = 0;
			}
		}
	}

	if(!(i&1)) i++;
	for(; i<= MAX_PRIME; i+=2){
		if(is_prime[i]){
			primes[prime_counter++] = i;
		}
	}
}

int main(){
	sieve();
	for(int i = 0; i < 100 ; i++){
		printf("%lld\n", primes[i]);
	}
	return 0;
}