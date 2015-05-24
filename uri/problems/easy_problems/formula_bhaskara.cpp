#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
	long double A, B, C;
	cin >> A >> B >> C;
	long double delta = B*B - 4*A*C;
	long double division = 2*A;
	if(delta<0 || division == 0){
		printf("Impossivel calcular\n");
	} else {
		long double r1 = ((B * -1) + sqrt(delta))/division;
		long double r2 = ((B * -1) - sqrt(delta))/division;
		printf("R1 = %.5Lf\n", r1);
		printf("R2 = %.5Lf\n", r2);
	}
	return 0;
}