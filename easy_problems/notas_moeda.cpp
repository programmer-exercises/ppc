#include <iostream>

using namespace std;

int main() {

	int v;
	cin >> v;

  cout << "NOTAS:" << endl;
  cout << v/100 << " nota(s) de R$ 100,00" << endl;
	v %= 100;
  cout << v/50 << " nota(s) de R$ 50,00" << endl;
	v %= 50;
  cout << v/20 << " nota(s) de R$ 20,00" << endl;
	v %= 20;
  cout << v/10 << " nota(s) de R$ 10,00" << endl;
	v %= 10;
  cout << v/5 << " nota(s) de R$ 5,00" << endl;
	v %= 5;
  cout << v/2 << " nota(s) de R$ 2,00" << endl;
	v %= 2;

  cout << "MOEDAS :" << endl;
  cout << v/1 << " moedas(s) de R$ 1.00" << endl;
  v %= 1;
  cout << v/0.5 << " moedas(s) de R$ 0.50" << endl;
  v %= 0.5;
  cout << v/0.25 << " moedas(s) de R$ 0.20" << endl;
  v %= 0.25;
  cout << v/0.1 << " moedas(s) de R$ 0.10" << endl;
  v %= 0.1;
  cout << v/0.05 << " moedas(s) de R$ 0.05" << endl;
  v %= 0.05;
  cout << v/0.01 << " moedas(s) de R$ 0.01" << endl;

  return 0;
}
