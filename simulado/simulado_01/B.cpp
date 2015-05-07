#include <iostream>
#include <math.h>

// menor int maior que exp
// ceil()

// maior int menor exp
// flour()

using namespace std;

int main(){

	// Quantidade de testes
	int testes;
	cin >> testes;

	for(int i = 1; i <= testes; i++) {
		string pokemon;
		int lvl;

		cin >> pokemon >> lvl;

		int bs, iv, ev;
		cin >> bs >> iv >> ev;
		int hp = ((iv + bs + sqrt(ev)/8 + 50) * lvl)/50 + 10;
		
		cin >> bs >> iv >> ev;
		int atk = ((iv + bs + sqrt(ev)/8) * lvl)/50 + 5;

		cin >> bs >> iv >> ev;
		int def = ((iv + bs + sqrt(ev)/8) * lvl)/50 + 5;

		cin >> bs >> iv >> ev;
		int sp = ((iv + bs + sqrt(ev)/8) * lvl)/50 + 5;


		cout << "Caso #" << i << ": " << pokemon << " " << lvl << endl;
		cout << "HP: " << hp << endl;
		cout << "AT: " << atk << endl;
		cout << "DF: " << def << endl;
		cout << "SP: " << sp << endl;
	}

	return 0;
}