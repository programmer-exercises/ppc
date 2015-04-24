#include <iostream>

using namespace std;

int main(){

	long long M, N;
	while(cin >> M >> N){
		if(M == 0){
			M = 1;
		} else {
			for(int i = M - 1 ; i>0 ; i--){
				M *= i;
			}	
		}

		if(N == 0){
			N = 1;
		} else {
			for(int j = N - 1 ; j>0 ; j--){
				N *= j;
			}
		}
		
		cout << M+N << endl;
	}
	return 0;
}