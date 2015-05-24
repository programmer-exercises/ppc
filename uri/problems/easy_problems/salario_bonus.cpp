#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	string name;
	double sal, amount, bonus;
	cin >> name >> sal >> amount;

	bonus = amount*0.15;
	printf("TOTAL = R$ %.2f\n", bonus+sal);
    return 0;
}