#include <iostream>
 
using namespace std;
 
int main(){
 
    int test;
    cin >> test;
 
    for(int i=0 ; i<test ; i++){
        int qnt;
        cin >> qnt;
        unsigned long long e = 1;
 
        for(int j=1; j<qnt ; j++){
            e *= 2;
        }
 
        cout << (e/6)/1000 << " kg" << endl;
    }
    return 0;
}