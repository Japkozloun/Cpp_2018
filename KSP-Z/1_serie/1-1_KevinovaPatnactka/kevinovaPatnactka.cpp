#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class parse{
public:
	void pars(string ins);
	int output[2] = {0, 0};
	
};

void parse::pars(string input){
	int ktere_cislo = 0;
	int kolikate = 1;
	for(int i = 0; i < input.size(); ++i){
		if(input.at(i) != ' '){
			parse::output[ktere_cislo] = int(input.at(i) - '0') + (output[ktere_cislo] * 10);
		}else{
			kolikate = 1;
			ktere_cislo = 1;
		}
		kolikate = 10;
	}
}
//#############################################################################
int main(){
	for(int soubor = 1; soubor <= 4; ++soubor){
		fstream file;
		int arr[2] = {0, 0};
		int ktere_cislo = 0;
		int kolikate = 1;
		string input;
		string patchI = "0" + to_string(soubor) + ".in";
		file.open(patchI);

		parse limit;
		getline(file, input);
		limit.pars(input);
		int xm = limit.output[0];
		int ym = limit.output[1];

		parse poloha;
		getline(file, input);
		poloha.pars(input);
		int xp = poloha.output[0];
		int yp = poloha.output[1];

		string pohyby;
		getline(file, pohyby);
		getline(file, pohyby);

		for(int i = 0; i < pohyby.size(); ++i){
			if(pohyby[i] == '<' && yp-1 > 0){
//				cout << "<" << " ";
				yp--;
			}else if(pohyby[i] == '>' && yp+1 < ym+1){
//				cout << ">" << " ";
				yp++;
			}else if(pohyby[i] == '^' && xp-1 > 0){
//				cout << "^" << " ";
				xp--;
			}else if(pohyby[i] == 'v' && xp+1 < xm+1){
//				cout << "v" << " ";
				xp++;
			}
//			cout << xp << " " << yp << endl;
		}
		string patchO = "0" + to_string(soubor) + ".out";
		ofstream outfile (patchO, std::ofstream::out);
		outfile << xp << " " << yp;
		cout << xp << " " << yp << endl;
		
		outfile.close();
		file.close();
	}
	return 0;
}