#include <iostream>
#include <string>
#include <sstream>
#include <vector>
 
using namespace std;

vector<int> next_move(vector<int> moves, int move){
	if(moves[move-1] == 0){
		moves.push_back(0);
	} else {
		moves.push_back(1);
	}
	return moves;
}

int main() {

	int t; // Test Case
	cin >> t;

	for(int i = 0; i<t ; i++){

		int n; // Instructions
		int p = 0; // Position

		cin >> n;
		cin.ignore();
		vector<int> moves;

		for(int j = 0; j<n ; j++){

			string inst;
			getline(cin, inst);

			if(inst.compare("RIGHT") == 0){
				moves.push_back(0);
			} else if(inst.compare("LEFT") == 0){
				moves.push_back(1);
			} else {
				int next = 0;
				string trash;
				stringstream ss(inst);
				ss >> trash >> trash >> next;
				moves = next_move(moves,next);
			}
		}

		for(vector<int>::const_iterator i = moves.begin(); i != moves.end() ; i++ ){
			if(*i == 0){
				p++;
			} else {
				p--;
			}
		}

		cout << p << endl;
	}
 
    return 0;
}