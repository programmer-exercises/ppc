#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {

	double A, B, C;
	double at,ac,atr,aq,ar;

	cin >> A >> B>> C;

	at = A*C/2;
	ac = 3.14159*C*C;
	atr = C*(A+B)/2;
	aq = B*B;
	ar = A*B;

	printf("TRIANGULO: %.3f\n", at);
	printf("CIRCULO: %.3f\n", ac);
	printf("TRAPEZIO: %.3f\n", atr);
	printf("QUADRADO: %.3f\n", aq);
	printf("RETANGULO: %.3f\n", ar);

    return 0;
}