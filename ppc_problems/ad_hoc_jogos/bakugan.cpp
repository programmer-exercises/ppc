#include <iostream>
#include <vector>

using namespace std;

int main() {

    int rounds;

    while(cin >> rounds && rounds!=0){

        unsigned int mark_bonus = 0, leti_bonus = 0;
        unsigned int mark_p = 0 , leti_p = 0;
        vector<int> mark, leti;

        // Read Mark monster numbers
        for(int m = 0; m<rounds ; m++){
            int play;
            cin >> play;
            mark.push_back(play);
        }

        // Read Leti monster numbers
        for(int l = 0; l<rounds ; l++){
            int play;
            cin >> play;
            leti.push_back(play);
        }

        // Sum points
        for(int p = 0; p<rounds ; p++){
            mark_p += mark[p];
            leti_p += leti[p];
        }

        // Check bonus
        for(int r = 0; r<rounds ; r++){

            // Mark bonus
            if(mark[r] == mark[r+1] && mark[r+1] == mark[r+2] && leti[r] != leti[r+1] && leti[r+1] != leti[r+2]){
                mark[r+2] = 11;
                mark_bonus += 30;
            }

            // Leti bonus
            if(mark[r] != mark[r+1] && mark[r+1] != mark[r+2] && leti[r] == leti[r+1] && leti[r+1] == leti[r+2]){
                leti[r+2] = 11;
                leti_bonus += 30;
            }
        }

        // Sum bonus
        mark_p += mark_bonus;
        leti_p += leti_bonus;

        cout << mark_bonus << " " << leti_bonus << endl;
        cout << mark_p << " " << leti_p << endl;

        // Check Winner
        if(mark_p > leti_p){
            cout << "M" << endl;
        } else if(mark_p < leti_p){
            cout << "L" << endl;
        } else if(mark_p == leti_p){
            cout << "T" << endl;
        }
    }

    return 0;
}
