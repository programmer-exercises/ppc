#include <iostream>
#include <string>
#include <stdexcept>
 
using namespace std;
 
int main() {

	string line;
	double total = 0;
	double count = 0;

	while(getline(cin, line)){
		try{
			double dist = stof(line);
			total += dist;
			count++;
		}catch (const invalid_argument& ia){
			continue;
		}
	}
	printf("%.1f\n", total/count);

    return 0;
}