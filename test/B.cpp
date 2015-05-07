#include <iostream>
#include <string>
#include <sstream>
#include <time.h>

using namespace std;

int main() {
	string line;
	getline(cin, line);

	stringstream sc(line);

	string inicio, termino, duracao;
	sc >> inicio >> termino >> duracao;
	cout << inicio << " " << termino << " " << duracao << endl;

	int i=0,t=0,d=0;
	tm time_inicio;
	tm time_termino;
	tm time_duracao;

	if(inicio.compare("-") != 0){
		int hh,mm,ss;
		char dis;
		stringstream in(inicio);
		in >> hh >> dis >> mm >> dis >> ss;
		time_inicio.tm_hour = hh;
		time_inicio.tm_min = mm;
		time_inicio.tm_sec = ss;
	} else {
		i = 1;
	}

	if(termino.compare("-") != 0){
		int hh,mm,ss;
		char dis;
		stringstream in(termino);
		in >> hh >> dis >> mm >> dis >> ss;
		time_termino.tm_hour = hh;
		time_termino.tm_min = mm;
		time_termino.tm_sec = ss;
	} else {
		t = 1;
	}

	if(duracao.compare("-") != 0){
		int hh,mm,ss;
		char dis;
		stringstream in(duracao);
		in >> hh >> dis >> mm >> dis >> ss;
		time_duracao.tm_hour = hh;
		time_duracao.tm_min = mm;
		time_duracao.tm_sec = ss;
	} else {
		d = 1;
	}

	if(i==0 && t==0){
		char buff[70];
		if(strftime(buff, sizeof buff, "%A %c", &time_inicio)){
			cout << buff;
		}
	}


	return 0;
}