#include <iostream>

using namespace std;

unsigned long long binomial(int n, int m){
	unsigned long long table[10000][5000+1];
	if(m>(n/2)){
		m = n-m;
	}
	if(m==0 || m==n){
		table[n][m] = 1;
		return 1;
	}
	if(table[n][m] != 0){
		return table[n][m];
	}
	unsigned long long a = binomial(n-1,m);
	unsigned long long b = binomial(n-1,m-1);
	table[n][m] = a+b;
	return table[n][m];
}

int main(){

	int test;
	cin >> test;

	for(int i = 0; i < test ; i++) {
		int k, n;
		cin >> k >> n;
		cout << "Somos-" << k << "(" << n << ") = "  << binomial(n,k) << endl;
	}

	return 0;
}