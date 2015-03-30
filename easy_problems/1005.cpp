#include <iostream>

using namespace std;

int main(){
	double A, B;
	cin >> A;
	cin >> B;
	double MEDIA = (A*3.5 + B*7.5)/11;
	cout.precision(6);
	cout << "MEDIA = " << MEDIA << endl;
	return 0;
}
