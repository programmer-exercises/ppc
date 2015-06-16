#include <iostream>
#include <cmath>

using namespace std;

#define MAX 10000

bool sieve[MAX+1];
inf pdimos[MAX];

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
	
	for()
}

int main(){
	return 0;
}