#include <iostream>
 
using namespace std;

int pisano(int N){
	if (N==1) return 1;
	int  prev = 1;
	int next = 2%N;
	int M = 1;
	while(prev!=1 || next != 1){
		++M;
		int temp = (next + prev)%N;
		prev = next;
		next = temp;
	}
	return M;
}

int main() {
	int n;
	cin >> n;
	int pis = pisano(n);
	cout << pis << endl;
}