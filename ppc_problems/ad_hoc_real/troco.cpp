#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int test;
	cin >> test;

	// Test cases
	for(int t = 0; t<test ; t++){
		int dinheiro, marcas;
		long double troco = 0;

		cin >> dinheiro >> marcas;

		// Getting price for mark
		for(int m = 0; m<marcas ; m++){
			long double result = 0;
			long double preco;

			cin >> preco;

			int qnt = floor(dinheiro/preco);
			long double pagar = qnt*preco;
			result = dinheiro-pagar;

			if(result > troco){
				troco = result;
			}
		}

		printf("%.2Lf\n",troco);
	}
	
	return 0;
}