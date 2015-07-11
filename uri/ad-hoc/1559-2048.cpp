#include <iostream>
 
using namespace std;
 
int main() {

	int t;
	cin >> t;

	for(int k = 0; k<t ; k++){

		int mat[3][3];
		// int d=0,l=0,r=0,u=0;

		for(int n = 0; n<4 ; n++){
			for(int m = 0; m<4 ; m++){
				int num;
				cin >> num;
				mat[n][m] = num;

				cout << mat[n][m] << " ";
			}
		}

		cout << endl;

		for(int n = 0; n<4 ; n++){
			for(int m = 0; m<4 ; m++){
				cout << mat[n][m] << " ";
			}
		}

		// for(int i = 0; i<4 ; i++){
		// 	for(int j = 0; j<4 ; j++){

		// 		cout << mat[i][j] << " ";
		// 		// if(mat[i][j] != 0){
		// 			// if(mat[i][j] == mat[i][j+1]){
		// 			// 	r=1;
		// 			// 	l=1;
		// 			// } if(mat[i][j] == mat[i+1][j]){
		// 			// 	u=1;
		// 			// 	d=1;
		// 			// }

		// 			// // DOWN
		// 			// if(i!=3 && mat[i+1][j]==0){
		// 			// 	// cout << i << " " << j << endl;
		// 			// 	// cout << mat[i][j] << " " << mat[i+1][j] << endl;
		// 			// 	d=1;
		// 			// }
		// 			// // LEFT
		// 			// if(j!=0 && mat[i][j-1]==0){
		// 			// 	l=1;
		// 			// }
		// 			// // RIGHT
		// 			// if(j!=3 && mat[i][j+1]==0){
		// 			// 	r=1;
		// 			// }
		// 			// // UP
		// 			// if(i!=0 && mat[i-1][j]==0){
		// 			// 	u=1;
		// 			// }
		// 		// }

		// 	}
		// }

		// 	// if(d==1){
		// 	// 	cout << "DOWN ";
		// 	// }
		// 	// if(l==1){
		// 	// 	cout << "LEFT ";
		// 	// }
		// 	// if(r==1){
		// 	// 	cout << "RIGHT ";
		// 	// }
		// 	// if(u==1){
		// 	// 	cout << "UP ";
		// 	// }
		// 	// if(d==0 && l==0 && r==0 && u==0){
		// 	// 	cout << "NONE";
		// 	// }
		cout << endl << endl;
	}
 
    return 0;
}