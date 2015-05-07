#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int test;
	cin >> test;

	for(int t = 0; t < test ; t++){
		int k;
		cin >> k;

		int primo = 1;
		int thabit = 0;

		// Primo
		int raiz = sqrt(k);
		cout << raiz;
		// for(int i = 2; i<k ; i+2){
		// 	if(k%i == 0){
		// 		primo = 0;
		// 		break;
		// 	}
		// }

		// Thabit
		if((k+1)%3 == 0){
			if(k&(k-1) == 0){
				thabit = 1;
			}
		}

		if(primo == 1){
			if(thabit == 1){
				printf("Caso #%d: primo de Thabit\n", t + 1);
			} else {
				printf("Caso #%d: primo\n", t + 1);
			}
		} else {
			if (thabit == 1){
				printf("Caso #%d: numero de Thabit\n", t + 1);
			} else {
				printf("Caso #%d: composto e nao Thabit\n", t + 1);
			}
		}
	}
	return 0;
}