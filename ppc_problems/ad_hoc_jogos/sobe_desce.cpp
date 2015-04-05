#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int t;
	cin >> t;
	vector<char> grid;

	for(int i = 0; i<t ; i++){
		cout << "test: " << i << endl;

		unsigned int a, b, c;
		map<string, int> pl;
		map<int,int> jumper;

		cin >> a >> b >> c;

		// Map the players position
		for(unsigned int n = 0; n<a ; n++){
			string player = to_string(n+1);
			pl[player] = 1;
		}

		// Map the position of the stairs or slide
		for(unsigned int j = 0; j<b ; j++){
			int in,out;
			cin >> in >> out;
			jumper[in] = out;
		}

		// Number of player
		for(unsigned int m = 0; m<a ; m++){
			string player = to_string(m+1);
			int dice;
			cin >> dice;

			// Move player
			pl[player] += dice;

			// Check player position
			auto jumper_out = jumper.find(pl[player]);
			if(jumper_out != jumper.end()){
				pl[player] = jumper_out->second;
			}

			// Check end of the game
			if(pl[player] >= 100){
				break;
			}
		}


		// Presentation
		for(unsigned int plr = 0; plr<a ; plr++){
			string player = to_string(plr+1);
			cout << "Position of player " << plr+1 << " is " << pl[player] << "." << endl;
		}
	}

	return 0;
}
