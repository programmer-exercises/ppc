#include <iostream>

#define ll long long
using namespace std;

ll pisano(int N){
	if (N==1) return 1;
	ll  prev = 1;
	ll next = 2%N;
	ll M = 1;
	while(prev!=1 || next != 1){
		++M;
		ll temp = (next + prev)%N;
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