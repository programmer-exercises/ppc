#include <iostream>
#include <map>

using namespace std;

int main(){

	int ataque, defesa;

	// Test cases
	while(cin >> ataque >> defesa && ataque!=0 && defesa != 0){

		map<int, double> atacantes, defensores;

		// Getting the distance of the atakers
		for(int a = 0; a<ataque ; a++){
			double distance;
			cin >> distance;
			atacantes[a+1] = distance;
		}

		// Getting the distance of the defensors
		for(int d = 0; d<defesa ; d++){
			double distance;
			cin >> distance;
			defensores[d+1] = distance;
		}

		// Take first ataker
		double first = 10001;
		for(int fr = 0; fr<ataque ; fr++){
			double test = atacantes[fr+1];
			if(test < first){
				first = test;
			}
		}

		// Take last but one
		int id_first = 0;
		double second = 10001;
		for(int sd = 0; sd<defesa ; sd++){
			double test = defensores[sd+1];
			if(test < second){
				second = test;
				id_first = sd+1;
			}
		}
		defensores.erase(id_first);

		second = 10001;
		for(int df = 0; df<defesa ; df++){
			double test = defensores[df+1];
			if(test < second && test!=0){
				second = test;
			}
		}

		if(first>=second){
			cout << "N" << endl;
		} else {
			cout << "Y" << endl;
		}
	}

	return 0;
}