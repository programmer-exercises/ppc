#include <iostream>
 
using namespace std;
 
int main(){
    int v, t;
 
    while(cin >> v >> t){
        long long res = (v*2)*t;
        cout << res << endl;
    }
    return 0;
}