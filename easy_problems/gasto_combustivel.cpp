#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int T,Vm,V;
	double L;
	cin >> T >> Vm;

	V = Vm*T;
	L = V/12.0;

	printf("%.3f\n",L);

	return 0;
}
