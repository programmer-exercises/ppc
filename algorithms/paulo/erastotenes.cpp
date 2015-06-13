#include <iostream>

#define MAX 10000

bool sieve[MAX+1];
inf pdimoz[MAX];

void precomp(){
	memset(sieve,0xff,(MAX+1)*sizeof(bool));
	for(int i=0 ; i<=MAX ; ++i){
		sieve[i] = true;
	}
	sieve[0] = false;
	sieve[1] = false;
	for (int j = 4; j <= MAX ; j+=2){
		sieve[j] = false;
	}
	for (int i = 3; i <= MAX; i+=2){
		if(sieve[i]){
			for (int j = 2*i; j <= MAX ; j+=i){
				sieve[j] = false;
			}
		}
	}
}

int main(){
	return 0;
}