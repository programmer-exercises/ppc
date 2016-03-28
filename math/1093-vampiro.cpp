#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {

	while(1){
		int e1,e2,at,d;
		cin >> e1 >> e2 >> at >> d;
		if(e1==0 && e2==0 && at==0 && d==0) break;

		double prob=0.0, p1=0.0, p2=0.0;
		if(at==3){
			prob = ((e1*1.0)/(e1+e2));
		} else {
			p1 = (at*1.0)/6;
			p2 = ((6-at)*1.0)/6;

			double ev1 = (e1*1.0)/d; ev1 = ceil(ev1);
			double ev2 = (e2*1.0)/d; ev2 = ceil(ev2);

			prob = (1 - pow((p2/p1),ev1)) / (1 - pow((p2/p1),ev1+ev2));
		}
		printf("%.1f\n", (100*prob));
	}
	return 0;
}
