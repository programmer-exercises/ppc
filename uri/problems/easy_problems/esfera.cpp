#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {

	int r;
	double re;
	cin >> r;

	re = (4.0/3)*3.14159*pow(r,3);
	printf("VOLUME = %.3f\n", re);

    return 0;
}