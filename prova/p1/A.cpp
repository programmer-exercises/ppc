#include <iostream>
#include <string>
#include <vector>

using namespace std;

float damage_hit(string playerA, string playerB){

	vector<string> types = {"Fogo","Ar","Terra","Agua","Fogo","Ar","Terra"};

	if(playerA.compare(playerB) == 0){
		return 1;
	} else {
		for(int i=1; i<5 ; i++){
			if(playerB.compare(types[i]) == 0){
				if(playerA.compare(types[i+1]) == 0){
					return 0.5;
				}
				if(playerA.compare(types[i-1]) == 0){
					return 2;
				}
				if(playerA.compare(types[i+2]) == 0){
					return 0;
				}
			}
		}
	}
	return 0;
}

int main() {

	// Amount of tests
	int tests;
	cin >> tests;

	// Test
	for(int t = 0; t<tests ; t++){

		string line;
		string playerA;
		string playerB;
		long int damage = 0;
		float mult = 0;

		cin >> playerA >> damage >> playerB;

		mult = damage_hit(playerA,playerB);
		int result = (int)damage*mult;

		printf("%d\n",result);
	}

	return 0;
}