#include <iostream>

using namespace std;

unsigned long long exponente(int base, int expn){
	int res = 1;
	while(expn){
		if(expn%2)
			res *= base;
		base *= base;
		expn>>=1; // Divisao por 2
	}
	return res;
}

unsigned long long fatorial(int n){
	unsigned long long rest = 1;
	for(int i = n; i > 0 ; i--){
		rest *= i;
	}
	return rest;
}

unsigned long long combinacao(int n, int m){
	unsigned long long comb = 0;
	comb = exponente(n,m) - fatorial(n)/(fatorial(n-m)*fatorial(m));
	return comb;
}

int main(){

	int n;
	while(cin >> n){
		cout << combinacao(n+1,2) << " pecas" << endl;
	}

	return 0;
}