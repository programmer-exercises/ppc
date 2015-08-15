#include <iostream>
#include <cstring>

#define MAX 100000

using namespace std;

int v[MAX+10] = {};

int hofstadter(int n){
	int a = v[n-1];
	int b = v[n-1];

	if(a<0){
		v[n-1] = hofstadter(n-1);
		a = v[n-1];
	}

	int d = v[a];
	if(d<0){
		v[a] = hofstadter(a);
		d = v[a];
	}

	if(b<0){
		v[n-1] = hofstadter(n-1);
		b = v[n-1];
	}

	int c = v[n-b];
	if(c<0){
		v[n-b] = hofstadter(n-b);
		c = v[n-b];
	}

	return d+c;
}

void precomp(){
	memset(v,1,sizeof(v));
	for (int i = 0; i < MAX; ++i){
		v[i] = -1;
	}
	v[1] = 1;
	v[2] = 1;
}

int main() {
	int num = 0;
	while(cin >> num){
		precomp();
		int result = 0;
		result = hofstadter(num);
		printf("a(%d) = %d\n", num,result);
	}
}