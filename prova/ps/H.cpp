#include <iostream>

using namespace std;

int main() {
	int testes;
	cin >> testes;
	float notas[10000] = {};

	for (int i = 0; i < testes+1; ++i){
		cin >> notas[i];
	}

	float menor = notas[0];
	int index = 0;

	for (int i = 0; i < testes; ++i){
		if(notas[i] <= menor){
			menor = notas[i];
			index = i;
		}
	}

	notas[index] = notas[testes];

	float soma = 0;
	int peso = 1;
	int soma_peso = 0;

	for (int i = 0; i < testes; ++i){
		soma += notas[i]*peso;
		soma_peso += peso;
		peso++;
	}

	float media = soma/soma_peso;
	if(media>=5){
		printf("Aluno aprovado com media %.2f\n", media);
	}else{
		printf("Aluno reprovado com media %.2f\n", media);
	}

	return 0;
}
