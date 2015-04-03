#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

int p;

vector next_move(string move, vector moves){

	if(move.compare("LEFT") == 0){
		moves.push_back("LEFT");
		p--;
	} else if(move.compare("RIGHT") == 0){
		moves.push_back("RIGHT");
		p++;
	}

	return moves;
}

int main() {

	int t;
	for(int i = 0; i<t ; i++){
		int n, p = 0;
		cin >> n;
		for(int j = 0; j<n ; j++){
			int next;
			string inst, trash;
			vector<string> moves;
			getline(cin,inst);

			if(inst.compare("LEFT") == 0){
				moves.push_back("LEFT");
				p--;
			} else if(inst.compare("RIGHT") == 0){
				moves.push_back("RIGHT");
				p++;
			} else {
				stringstream ss(inst);
				ss >> trash >> trash >> next;
				moves = next_move(moves[next], moves);
			}
		}

		cout << p;
		p=0;
	}
 
    return 0;
}