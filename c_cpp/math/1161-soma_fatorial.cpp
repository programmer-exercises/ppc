#include <iostream>
 
using namespace std;

unsigned long long factorial(int n){
	unsigned long long result = 0;
	if(n<=1) return 1;
	result = n * (factorial(n-1));
	return result;
}

int main() {
	int m, n;
	while(cin >> m >> n){
		cout << factorial(m) + factorial(n) << endl;
	}
}