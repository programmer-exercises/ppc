#include <iostream>

using namespace std;

unsigned long long ns[64];

void pre_comp(){
	ns[0]=1;
	for(int i=1; i<64 ; i++){
		//ns[i]=2*ns[i-1];
		ns[i]=ns[i-1]<<1;
	}
}

bool is2Power(unsigned long long n){

	int meio, inicio=0, fim=63;

	while(fim>=inicio){
		meio=(inicio+fim)/2;
		if(ns[meio]==n){
			return true;
		}
		if(ns[meio]<n){
			inicio=meio+1;

		}else{
			fim=meio-1;
		}
	}
	return false;
}

int main(){

	unsigned long long n;
	pre_comp();

	while(cin>>n){
		if(is2Power(n)){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
	}
}