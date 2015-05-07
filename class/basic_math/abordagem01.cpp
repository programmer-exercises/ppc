#include <iostream>

using namespace std;

bool is2Power(unsigned long long n){
	if(n==0){
		return false;
	}
	while(n!=1){
		// Se for impar
		if(n%2!=0){
			return false;
		} // Se for par
		else {
			n/=2;
		}
	}
	return true;
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