#include <iostream>
 
using namespace std;
 
int main() {
	int num, hr;
	float sal;
	cin >> num >> hr >> sal;
	cout << "NUMBER = " << num << endl;
	printf("SALARY = U$ %.2f\n",(hr*sal));

    return 0;
}