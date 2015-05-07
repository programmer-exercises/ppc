#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	vector<string> v = {"pedra", "Spock", "papel", "lagarto", "tesoura", "pedra", "Spock"};

	int n;
	cin >> n;

	for(int i = 1; i <= n; i++){
		string s, r;
		cin >> s >> r;

		if(s == r){
			cout << "Caso #" << i << ": De novo!" << endl;
			continue;
		}

		int j = 0;
		while(v[j] != s) j++;
		if(r == v[j+1] || r == v[j+2]){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl;
		} else {
			cout << "Caso #" << i << ": Bazinga!" << endl;
		}
	}

	return 0;
}