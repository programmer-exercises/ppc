#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;

	int values[] = {a,b,c};
	int swp=-1, end=3;

	for(int i=2;i>0;i--){
		for(int j=0;j<end;j++){
			if(values[j]>values[j+1]){
				swp = values[j+1];
				values[j+1] = values[j];
				values[j] = swp;
			}
		}
		end--;

		for (int j = 0; j < 3; i++){
			cout << values[j] << ", ";
		}
	}

	return 0;
}
