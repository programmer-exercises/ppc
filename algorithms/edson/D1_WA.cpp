#include <iostream>

using namespace std;

int main (void)
{
	int k;
	char C;
	int k1[101];
	//primerias entradas
	while (cin >> k >> C){
		//entradas do polinomio
		for (int i = 0; i <= k; i += 1){
			cin >> k1[i];
		}
		
		//verificacao do primeiro termo
		if (k1[0] < 0){
			k1[0] *= -1;
			cout << C << "(x) = - " << (k)*(k1[0])<< "^"<< k-1;
		}else if(k1[0] >=0){
			if(k1[0] == 0){
				if (k-1 < 0){
					cout << C << "(x) = 0";
				}else if(k1[0] > 0){
					cout << C << "(x) = 0";
				}
			} else if (k-1 < 0){
				cout << C << "(x) = 0";
			}
			else if (k-1 == 1){
				cout << C << "(x) = " << (k)*(k1[0])<< "x";
			} else
				cout << C << "(x) = " << (k)*(k1[0])<< "x^"<< k-1;
		}

		//leitura do segundo termo em diante
		if(k1[0] != 0){
			for (int i = 1; i <= k; i += 1){
				if(k1[1] == 0 && k == 0){
					if (k-(i+1) < 0){
						cout << "";
					}
				}

				//verifica se o termo eh menor que 0
				if (k1[i] < 0){
					//caso seja menor, multiplico por -1 e imprimo o seu '-' na tela
					if (k-(i+1) == 1){
						k1[i] *= -1;
						cout << " - " << (k-i)*(k1[i]) << "x";
					}else if (k-(i+1)== 0){
						k1[i] *= -1;
						cout << " - " << (k-i)*(k1[i]);
					} else {
						if (k-(i+1) < 0){
							cout << "";
						} else {
							k1[i] *= -1;
							cout << " - " << (k-i)*(k1[i])<< "x^"<< k-(i+1);
						}
					}
				}else if(k1[i] > 0){

					//senao imprimo normal
					if (k-(i+1) == 1){
						cout << " + " << (k-i)*(k1[i]) << "x";
					}else if (k-(i+1)== 0){
						cout << " + " << (k-i)*(k1[i]);
					} else {	
						if (k-(i+1) < 0){
							cout << "";
						}else
							cout << " + " << (k-i)*(k1[i])<< "x^"<< k-(i+1);
					}
				} else {
					if ((k-i)*(k1[i]) == 0){
						break;
					}else if ((k-i)*(k1[i]) > 0){
						cout << " + " << (k-i)*(k1[i]);
					} else {
						cout << " - " << ((k-i)*(k1[i]))*-1;
					}
				}
			
			}
		} else {
			if (k1[1] < 0){
				k1[1] *= -1; 
				cout << C << "(x) = - " << (k-1)*(k1[1])<< "x^"<< k-(1+1);
			}else
				cout << C << "(x) = " << (k-1)*(k1[1])<< "x^"<< k-(1+1);
			
			for (int i = 2; i <= k; i += 1){
				if(k1[1] == 0 && k == 0){
					if (k-(i+1) < 0){
						cout << "";
					}
				}

				//verifica se o termo eh menor que 0
				if (k1[i] < 0){
					//caso seja menor, multiplico por -1 e imprimo o seu '-' na tela
					if (k-(i+1) == 1){
						k1[i] *= -1;
						cout << " - " << (k-i)*(k1[i]) << "x";
					}else if (k-(i+1)== 0){
						k1[i] *= -1;
						cout << " - " << (k-i)*(k1[i]);
					} else {
						if (k-(i+1) < 0){
							cout << "";
						} else {
							k1[i] *= -1;
							cout << " - " << (k-i)*(k1[i])<< "x^"<< k-(i+1);
						}
					}
				} else if(k1[i] > 0) {
					//senao imprimo normal
					if (k-(i+1) == 1){
						cout << " + " << (k-i)*(k1[i]) << "x";
					} else if (k-(i+1)== 0) {
						cout << " + " << (k-i)*(k1[i]);
					} else {	
						if (k-(i+1) < 0){
							cout << "";
						} else
							cout << " + " << (k-i)*(k1[i])<< "x^"<< k-(i+1);
					}
				} else {
					if ((k-i)*(k1[i]) == 0){
						break;
					}else if ((k-i)*(k1[i]) > 0){
						cout << " + " << (k-i)*(k1[i]);
					} else {
						cout << " - " << ((k-i)*(k1[i]))*-1;
					}
				}
			}
		}
		cout<<"" << endl;
	}
	return 0;
}
