#include <iostream>
#include <vector>

using namespace std;

char move(char move, char direction){

	vector<char> orient = {'N','L','S','O','N','L'};
	int moved=0;

	for(int i = 1; i<5 ; i++){
		if(orient[i] == direction && moved == 0){
			moved = 1;
			switch(move){
				case 'D':
					direction = orient[i+1];
				break;
				case 'E':
					direction = orient[i-1];
				break;
			}
		}
	}

	return direction;
}

int main() {

	unsigned long int N=0, M=0, S=0;

	while(cin >> N >> M >> S){

		// Break loop condition
		if(N==0 && M==0 && S==0){
			break;
		}

		// Map and instructions
		char mat[N][M];
		vector<char> inst;

		// Robot
		unsigned int x=0, y=0;
		char direct;
		int items = 0;

		// Read cell, robot position and direction
		for(unsigned int i=0; i<N ; i++){
			for(unsigned int j=0; j<M ; j++){
				char cell;
				cin >> cell;
				mat[i][j] = cell;

				switch(mat[i][j]){
					case 'N':
						x = i;
						y = j;
						direct = 'N';
						break;
					case 'S':
						x = i;
						y = j;
						direct = 'S';
						break;
					case 'L':
						x = i;
						y = j;
						direct = 'L';
						break;
					case 'O':
						x = i;
						y = j;
						direct = 'O';
						break;
					default:
						break;
				}
			}
		}

		// Read instructions
		for(unsigned int s=0; s<S ; s++){
			char in;
			cin >> in;
			inst.push_back(in);
		}

		// Make robot walk
		for(unsigned int s=0; s<S ; s++){


			char old_direct = direct;
			direct = move(inst[s], direct);

			// Move forward
			if(old_direct == direct){
				switch(direct){
					case 'N':
					if(x>0 && mat[x-1][y] != '#'){
						x--;
					}
					break;

					case 'S':
					if(x<N && mat[x+1][y] != '#'){
						x++;
					}
					break;

					case 'L':
					if(y<M && mat[x][y+1] != '#'){
						y++;
					}
					break;

					case 'O':
					if(y>0 && mat[x][y-1] != '#'){
						y--;
					}
					break;
				}
			}

			// Removes the item from the map
			if(mat[x][y] == '*'){
				mat[x][y] = '.';
				items++;
			}
		}
		cout << items << endl;

	}

	return 0;
}