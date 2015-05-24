#include <iostream>

using namespace std;

int main() {

	int x1, y1, x2, y2;

	while(cin >> x1 >> y1 >> x2 >> y2){

		// Current position equals to the next position
		if(x1>8 || x1<1 || x2>8 || x2<1 || y1>8 || y1<1 || y2>8 || y2<1){
		} else if(x1 == x2 && y1 == y2){
			cout << "0" << endl;
		} else {
			// Need one move
			if(x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)){
				cout << "1" << endl;
			} else /* Need one move */{
				cout << "2" << endl;
			}
		}
	}
	
	return 0;
}
