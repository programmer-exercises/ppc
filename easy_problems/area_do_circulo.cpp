#include <math.h>
#include <iostream>

using namespace std;

int main(){

    double raio, res;
    cin >> raio;
    res = 3.14159*pow(raio,2);
    cout.precision(4);
    cout << fixed << "A=" << res << endl;

    return 0;
}
