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

int main(){

	return 0;
}