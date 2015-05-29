#include <iostream>
#include <map>
 
using namespace std;
 
int main() {

	char ch;
	map<char,char> key;

	key['1'] = '`';
	key['2'] = '1';
	key['3'] = '2';
	key['4'] = '3';
	key['5'] = '4';
	key['6'] = '5';
	key['7'] = '6';
	key['8'] = '7';
	key['9'] = '8';
	key['0'] = '9';
	key['-'] = '0';
	key['='] = '-';
	key['W'] = 'Q';
	key['E'] = 'W';
	key['R'] = 'E';
	key['T'] = 'R';
	key['Y'] = 'T';
	key['U'] = 'Y';
	key['I'] = 'U';
	key['O'] = 'I';
	key['P'] = 'O';
	key['['] = 'P';
	key[']'] = '[';
	key['\\'] = ']';
	key['S'] = 'A';
	key['D'] = 'S';
	key['F'] = 'D';
	key['G'] = 'F';
	key['H'] = 'G';
	key['J'] = 'H';
	key['K'] = 'J';
	key['L'] = 'K';
	key[';'] = 'L';
	key['\''] = ';';
	key['X'] = 'Z';
	key['C'] = 'X';
	key['V'] = 'C';
	key['B'] = 'V';
	key['N'] = 'B';
	key['M'] = 'N';
	key[','] = 'M';
	key['.'] = ',';
	key['/'] = '.';

	while((ch = getchar()) != EOF){
		if(key.find(ch) != key.end()){
			cout << key[ch];
		} else {
			cout << ch;
		}
	}
 
    return 0;
}