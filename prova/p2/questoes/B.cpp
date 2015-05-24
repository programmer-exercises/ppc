#include <iostream>

using namespace std;

int euleriano(int n, int k){
	int result = 0;
	if(n>=1 && k==0) return 1;
	if(k==(n-1)) return 1;
	result = (n-k)*euleriano((n-1),(k-1)) + (k+1)*euleriano((n-1),k);
	return result;
}

int main(){

	int n, k;
	while(cin >> n >> k){
		cout << euleriano(n,k) << endl;
	}

	return 0;
}