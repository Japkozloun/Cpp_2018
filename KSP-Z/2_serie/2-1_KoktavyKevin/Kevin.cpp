#include <iostream>		//tohle
#include <fstream>		//asi
#include <string>		//potrebuju

using namespace std;	//bc's lenost

string retezec;

void calculate(int name){
	string fname = "InOutPut/0" + std::to_string(name);		//na kterem zadani pracuji

	ofstream out(fname + ".out");							//Presmerovani cout
	cout.rdbuf(out.rdbuf());

	fstream file;											//otevreni souboru se zadanim
	file.open(fname + ".in");

	while(getline(file, retezec)){							//cti dokud je co a dej to do stringu
		cout << retezec[0];									//1. neresim
		for (int i = 1; i < retezec.size(); ++i){			//jedeme po jednom znaku
			if(retezec[i] != retezec[i-1]){					//je stejny jako predchozi?
				cout << retezec[i];							//Ne? No tak ho vypis (presmerovani na soubor)
			}
		}
		cout << endl;										//Tak tenhle radek je hotov. Jde se na dalsi
	}
}

int main(){
	for(int i = 1; i <= 5; ++i){							//Jedeme vsechny ty zadani
		calculate(i);										//A pocitame vsechny ty veci
	}
	return 0;
}
//Co rici zaverem? Jsem spokojeny :D