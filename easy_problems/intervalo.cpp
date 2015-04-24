#include <iostream>
 
using namespace std;
 
int main() {
	long double value;
	cin >> value;

	if(value<0 || value>100){
		cout << "Fora de intervalo" << endl;
	}

	if(value>=0 && value<=25){
		cout << "Intervalo [0,25]" << endl;
	}

	if(value>25 && value<=50){
		cout << "Intervalo (25,50]" << endl;
	}

	if(value>50 && value<=75){
		cout << "Intervalo (50,75]" << endl;
	}

	if(value>75 && value<=100){
		cout << "Intervalo (75,100]" << endl;
	}

	return 0;
}
