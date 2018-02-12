#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>


using namespace std;

fstream file;
string Fname = "06";

int limit[2] = {0, 0};
void InputParse(string input){
	int kolikate_l = 0;
	int krat = 1;
	for(int i = 0; i < input.size(); ++i){
		if(input[i] != ' '){
			limit[kolikate_l] = (limit[kolikate_l] * krat) + int(input[i] - '0');
		}else{
			kolikate_l = 1;
		}
		krat = 10;
	}
}

int main(){
	file.open(Fname + ".in");

	string input;
	getline(file, input);
	InputParse(input);
	
	vector<string> zpravy;
	for(int i = 0; i < limit[0]; ++i){
		string zprava;
		getline(file, zprava);
		zpravy.push_back(zprava);
	}

	string patchO = Fname + ".out";
	ofstream outfile (patchO, ios::out|ios::binary);
	
	for(int i = 0; i < limit[1]; ++i){
		vector<int> pocetPismen(limit[1]);
		fill(pocetPismen.begin(), pocetPismen.end(), 0);
		for(int x = 0; x < zpravy.size(); ++x){
			char pismeno = zpravy.at(x)[i];
			pocetPismen.at(int(pismeno) - int('A'))++;
		}
		int nejvetsi = distance(pocetPismen.begin(), max_element(pocetPismen.begin(), pocetPismen.end()));
		outfile << (char)(nejvetsi + 65);
	}
	outfile.close();
	file.close();
	return 0;
}