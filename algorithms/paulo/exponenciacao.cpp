#include <iostream>
 
using namespace std;

int exponente(int base, int expn){
	int res = 1;
	while(expn){
		if(expn%2)
			res *= base;
		base *= base;
		expn>>=1; // Divisao por 2
	}
	return res;
}

int main() {
	int base, expn;
	cin >> base >> expn;
	unsigned long long result = exponente(base, expn);
	cout << result << endl;
}