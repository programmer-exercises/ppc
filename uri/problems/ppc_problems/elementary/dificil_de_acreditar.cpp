#include <iostream>
#include <string>
#include <sstream>
 
using namespace std;
 
int main() {

	string expre;

	while(cin >> expre){

		double x, y, z;
		char op;

		string reverse = string(expre.rbegin(), expre.rend());

		stringstream sr(reverse);

		sr >> x >> op >> y >> op >> z;

		if(z+y == x){
			cout << "True" << endl;
		} else {
			cout << "False" << endl;
		}
	}

    return 0;
}