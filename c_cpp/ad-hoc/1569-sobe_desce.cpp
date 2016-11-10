#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

	int tests;
	cin >> tests;

	for(int t = 0; t<tests ; t++){

		unsigned int player, jump, dice;
		cin >> player >> jump >> dice;

		map<int,int> jumpers;
		map<int,int> players;

		// Set players location
		for(unsigned int p = 0; p<player ; p++){
			players[p+1] = 1;
		}

		// Set jumpers location
		for(unsigned int j = 0; j<jump ; j++){
			int in, out;
			cin >> in >> out;
			jumpers[in] = out;
		}

		int winner = 0;
		// Set the dices roles
		unsigned int counter = 1; // replesent the player on the round
		for(unsigned int d = 0; d<dice ; d++){

			int num;
			cin >> num;

			// Checks winner
			if(winner == 0){
				// Make a move
				players[counter] += num;
				if(players[counter] > 100){
					players[counter] = 100;
				}
			}

			// Checks player position
			auto jump_to = jumpers.find(players[counter]);
			if(jump_to != jumpers.end()){
				players[counter] = jump_to->second;
			}

			// Set winner
			if(players[counter] == 100){
				winner = 1;
			}

			// Reset counter
			counter ++;
			if(counter > player){
				counter = 1;
			}
		}

		// Presentation
		for(unsigned int s = 0; s<player ; s++){
			cout << "Position of player " << s+1 << " is " << players[s+1] << "." << endl;
		}
	}

	return 0;
}
