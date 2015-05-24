#include <iostream>
#include <vector>
 
using namespace std;

int bases(int num, int base){
	vector<int> c;
	do{
		c.push_back(num%base);
		num/=base;
	}while(num);
	for(int i = 0; i< c.size() ; i++){
		cout << c[i] << endl;
	}
	return 0;
}

int main(){
	bases();
}