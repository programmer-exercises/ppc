#include <iostream>

using namespace std;

int main() {

	int age;
	cin >> age;

	cout << age/365 << " ano(s)" << endl;
	cout << (age%365)/30 << " mes(es)" << endl;
	cout << (age%365)%30 << " dia(s)" << endl;

    return 0;
}
