#include <iostream>

using namespace std;

int main(){
	int A, B, C, M;
	cin >> A >> B >> C;

	M = (A+B+abs(A-B))/2;
	M = (M+C+abs(M-C))/2;
	cout << M << " eh o maior" << endl;
	return 0;
}
