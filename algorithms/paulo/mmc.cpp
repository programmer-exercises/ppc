#include <iostream>
 
using namespace std;

int mdc(int a, int b){
	return b==0 ? a : mdc(b,a%b);
}

int mmc(int a, int b){
	return (a/mdc(a,b))*b;
}

int main() {
	int a, b;
	while(cin >> a >> b){
		cout << "MDC: " << mdc(a,b) << endl;
		cout << "MMC: " << mmc(a,b) << endl << endl;
	}
}