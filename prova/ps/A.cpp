#include <iostream>

using namespace std;

int main() {
	int p, l;
	cin >> p >> l;

	if(((p+l)%2)==0){
		cout << "Pedro" << endl;
	} else {
		cout << "Lucas" << endl;
	}
}
