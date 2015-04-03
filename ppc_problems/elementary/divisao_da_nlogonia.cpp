#include <iostream>
 
using namespace std;
 
int main() {

	int k;

	while(cin >> k){
		int n,m;
		cin >> n >> m;
		for(int i = 0; i<k ; i++){
			int x,y;
			cin >> x >> y;

			if(abs(n) == abs(x) || abs(m) == abs(y) || (n == x && m == y)){
				cout << "divisa" << endl;
			} else {
				if(n>x &&  m>y){
					cout << "SO" << endl;
				}
				if(n<x && m>y){
					cout << "SE" << endl;
				}
				if(n<x && m<y){
					cout << "NE" << endl;
				}
				if(n>x && m<y){
					cout << "NO" << endl;
				}
			}
		}
	}
	
    return 0;
}