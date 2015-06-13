#include <iostream>
#include <cmath>

using namespace std;

#define MAX 10000

bool sieve[MAX+1];
inf pdimoz[MAX];

void precomp(){
	memset(sieve,0xff,(MAX+1)*sizeof(bool));
	sieve[0] = false;
	sieve[1] = false;

	int limit = sqrt(MAX);
	for (int i = 3; i*i <= limit; i+=2){
		if(sieve[i]){
			for (int j = i*i; j <= MAX ; j+=i){
				sieve[j] = false;
			}
		}
	}
}

int main(){
	return 0;
}