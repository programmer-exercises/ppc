#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	int cd1, cd2, qnt1, qnt2;
	float vl1,vl2, total;

	cin >> cd1 >> qnt1 >> vl1;
	cin >> cd2 >> qnt2 >> vl2;

	total = (qnt1*vl1) + (qnt2*vl2);
	printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}