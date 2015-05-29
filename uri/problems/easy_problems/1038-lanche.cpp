#include <iostream>
#include <map>

using namespace std;

int main(){

	int key, qnt;
	map<int, float> price;

	cin >> key >> qnt;
	price[1] = 4.00;
	price[2] = 4.50;
	price[3] = 5.00;
	price[4] = 2.00;
	price[5] = 1.50;

	float total = price[key]*qnt;
	printf("Total: R$ %.2f\n", total);

	return 0;
}