#include <iostream>

#define ll long long

using namespace std;

ll pisano(ll n){
	ll anterior = 1;
	ll atual = 1;
	ll resposta = 1;

	while(anterior!=0 || atual!=1){
		ll temp = (anterior + atual)%n;
		anterior = atual;
		atual = temp;
		resposta++;
	}
	return resposta;
}

int main() {
	int n;
	cin >> n;
	int pis = pisano(n);
	cout << pis << endl;
}