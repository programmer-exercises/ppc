#include <iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	float media = n1*2 + n2*3 + n3*4 + n4;
	media /= 10;
	printf("Media: %.1f\n", media);
	if(media >= 7.0){
		printf("Aluno aprovado.\n");
	}
	if(media < 5.0){
		printf("Aluno reprovado.\n");
	}
	if(media >= 5.0 && media < 7.0){
		printf("Aluno em exame.\n");
		float exame;
		cin >> exame;
		printf("Nota do exame: %.1f\n", exame);
		media += exame;
		media /= 2;

		if(media >= 5.0){
			printf("Aluno aprovado.\n");
		}
		if(media < 5.0){
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", media);
	}
	return 0;
}