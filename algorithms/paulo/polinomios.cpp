#include <iostream>
 
using namespace std;

int polinomio(int a[], int grau, int par){
	int rest = 0;
	for(int i = 0; i<=grau ; i++){
		rest *= par;
		rest += a[i];
	}
	return rest;
}

int main() {
	int coe[] = {1, -5, 6};
	int grau = 2;
	int par = 4;
	cout << polinomio(coe,grau,par) << endl;
}