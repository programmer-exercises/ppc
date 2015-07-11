#include <iostream>
 
using namespace std;

unsigned long long factorial(int n){
	unsigned long long result = 0;
	if(n==3) return 1;
	result = n * (factorial(n-1));
	return result;
}

int main() {
	int n;
	while(cin >> n){
		if(n==0) break;
		cout << factorial(n) << endl;
	}
}