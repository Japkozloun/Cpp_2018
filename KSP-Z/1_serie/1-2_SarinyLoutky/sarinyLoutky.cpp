//limit[0] = pocet loutek
//limit[1] = cilena vaha

#include <ios>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

fstream file;

int main(){
	file.open("06.in");
	string input;
	getline(file, input);

	int kolikate_l = 0;
	int krat = 1;
	int limit[2] = {0, 0};
	for(int i = 0; i < input.size(); ++i){
		if(input[i] != ' '){
			limit[kolikate_l] = (limit[kolikate_l] * krat) + int(input[i] - '0');
		}else{
			kolikate_l = 1;
		}
		krat = 10;
	}
//	cout << limit[0] << " " << limit[1] << endl;

	vector<int> loutky;							//obsahuje vahy loutek
	for (int i = 0; i < limit[0]; ++i){
		string instr;
		getline(file, instr);
		loutky.push_back(stoi(instr));
	}

	sort(loutky.begin(), loutky.end());			//setrizeni loutek od nejmensi k nejvetsi

	vector<int> vysledek;
	int pocetVysledku = 0;

	for (int test = loutky.size() - (loutky.size() / 100); test < loutky.size(); ++test){		//neco co se snazi to zrychlit
		if(loutky[test] == limit[1]){
			loutky.erase(loutky.begin() + test);
			pocetVysledku++;
		}
	}
	while(loutky.size() > 1){
		int posledni = loutky[loutky.size() - 1];
		int prvni = loutky[0];

		if(prvni + posledni <= limit[1]){
			posledni +=  prvni;
			loutky.erase(loutky.begin());
			if(loutky[0] + posledni > limit[1]){
				vysledek.push_back(posledni);
				loutky.pop_back();
				pocetVysledku++;
			}
		}else{
			vysledek.push_back(posledni);
			loutky.pop_back();
			pocetVysledku++;
		}
	}

	if(loutky.size() == 1){								//pokud tam jeden zbude tak ho dej do vysledku
		vysledek.push_back(loutky[0]);
		loutky.pop_back();
		pocetVysledku++;
	}

	cout << endl;
	cout << pocetVysledku << endl;
	file.close();
	return 0;
}