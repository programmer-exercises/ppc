#include <iostream>

using namespace std;

int main(){

	unsigned long long a, b;
	while(cin >> a >> b){
		fn = 0;
		fnm1 = 1;
		fnm2 = 2;
		int counter = 0;
		while(fn<=b){
			fn = fnm1 + fnm2;
			fnm1 = fn;
			fnm2 = fnm1;
			if(fn>=a){
				counter++;
			}
		}
		printf("%d\n", counter);
	}

	return 0;
}