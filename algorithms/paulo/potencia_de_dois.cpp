#include <iostream>
 
using namespace std;

bool is2Power(unsigned long long n){
	return n && (n&(n-1))==0;
}

int main(){

	unsigned long long n;

	while(cin>>n){
		if(is2Power(n)){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
	}
}