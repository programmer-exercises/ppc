#include <iostream>

using namespace std;

int main(){

	int tests;
	cin >> tests;

	int x, y;

	while(cin >> x >> y){

		long long resR, resB, resC;

		// Rafael
		resR = (3*x)*(3*x) + y*y;

		// Beto
		resB = 2*(x*x) + (5*y)*(5*y);

		// Carlos
		resC = y*y*y - 100*x;

		if(resR > resC && resR > resB){
			cout << "Rafael ganhou" << endl;
		}
		if(resC > resR && resC > resB){
			cout << "Carlos ganhou" << endl;
		}
		if(resB > resC && resB > resR){
			cout << "Beto ganhou" << endl;
		}
	}
	return 0;
}