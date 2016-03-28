#include <iostream>
 
using namespace std;
 
int main() {
	float A,B,C;
	cin >> A >> B >> C;
	float media = (A*2 + B*3 + C*5);
	printf("MEDIA = %.1f\n", (media/10));
    return 0;
}