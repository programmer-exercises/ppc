#include <iostream>
#include <cmath>
 
using namespace std;

int is_primo(int n){
	if(n<2) return false;
	if(n==2) return true;
	if((n&1)==0) return false;
	for(int i=3; i< sqrt(n); i+=2){
		if((n%i)==0) return false;
	}
	return true;
}

int main() {
	int number;
	while(cin >> number){
		cout << is_primo(number) << endl;
	}
}