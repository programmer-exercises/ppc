#include <iostream>
#include <math.h>

#define UP 1
#define DOWN 0

#define TRUE 1
#define FALSE 0

using namespace std;

int main(){

	// Variaveis
	int tests;
	cin >> tests;

	int mat_a[4][4];
	int down = FALSE;
	int left = FALSE;
	int right = FALSE;
	int up = FALSE;

	// Loop números de tests
	for(int n = 0; n<tests ; n++){

		// Leitura dos dados
		for(int i = 0; i<4 ; i++){	
			for(int j = 0; j<4 ; j++){
				int num;
				cin >> num;
				mat_a[i][j] = num;
			}
		}

		// Verificar left or right
		for(int i = 0; i<4 ; i++){
			for(int j = 0; j<4 ; j++){

				// RIGHT e LEFT
				if(mat_a[i][j] == mat_a[i][j+1] && mat_a[i][j] != 0 && mat_a[i][j+1] != 0){
					right = TRUE;
					left = TRUE;
				}

				// DOWN e UP
				if(mat_a[i][j] == mat_a[i+1][j] && mat_a[i][j] != 0 && mat_a[i+1][j] != 0){
					down = TRUE;
					up = TRUE;
				}

				if(j>0 && j<3){
					// RIGHT
					if(mat_a[i][j+1] == 0){
						right = TRUE;
					}
					// LEFT
					if(mat_a[i][j-1] == 0){
						left = TRUE;
					}
				}

				if(i>0 && i<3){
					// DOWN
					if(mat_a[i+1][j] == 0){
						down = TRUE;
					}
					// UP
					if(mat_a[i-1][j] == 0){
						up = TRUE;
					}
				}
			}
		}

		string resp = "";
		if(down == TRUE){
			cout << "DOWN ";
		}
		if(left == TRUE){
			cout << "LEFT ";
		}
		if(right == TRUE){
			cout << "RIGHT ";
		}
		if(up == TRUE){
			cout << "UP";
		}
		if(up == FALSE && right == FALSE && left == FALSE && down == FALSE){
			cout << "NONE";
		}

		cout << endl;

		down = FALSE;
		left = FALSE;
		right = FALSE;
		up = FALSE;
	}

	return 0;
}