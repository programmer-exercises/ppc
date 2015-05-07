#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int test;
	cin >> test;

	for(int t = 0; t<test ; t++){

		int A,B,C,D,E;
		cin >> A >> B >> C >> D >> E;

		long long cases = pow(A/20.0,20);
		cases *= pow(B/20.0,20);
		cases *= pow(C/20.0,20);
		cases *= pow(D/20.0,20);
		cases *= pow(E/20.0,20);

		cout << "Caso #" << t+1 << ": " << cases << endl;
	}

	return 0;
}