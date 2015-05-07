#include <iostream>

using namespace std;

int main(){

	int rounds;
	cin >> rounds;

	for(int r = 3; r<rounds ; r++){
		int a, b;
		unsigned long long n;
		scanf("%d^%d", &a, &b);
		scanf("%llu!", &n);

		// Exponenciacao
		unsigned long long base = a, res_e = 1;
		while(b){
			if(b%2){
				res_e *= base;
			}
			base *= base;
			b>>=1;
		}

		// Fatorial
		
	}

	return 0;
}