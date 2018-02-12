#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> coped;
std::vector<int> vektor;
int pocet;

void Ivektor(int leng){
	for(int i = 1; i <= leng; ++i){
		int placeVal = i + ((i-1)*leng);

		vektor.push_back(placeVal);
		//cout << vektor[i-1] << endl;
	}
}

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

void doIt(string todo){
	for (int i = 0; i < limit[0]; ++i){
		switch(todo[i]){
			case '^':
				if(vektor[i] - limit[0] > 0){
					vektor[i] -= limit[0];
				}
				break;
			case 'v':
				if(vektor[i] + limit[0] < (limit[0]*limit[0]) + 1){
					vektor[i] += limit[0];
				}
				break;
			case '<':
				if(vektor[i] - 1 > 0){
					vektor[i] -= 1;
				}
				break;
			case '>':
				if(vektor[i] + 1 < (limit[0]*limit[0]) + 1){
					vektor[i] += 1;
				}
				break;
		}
	}
}

int done(std::vector<int> policko){
	std::sort(policko.begin(), policko.end());
	for (int i = 1; i < policko.size(); ++i){
		if(policko[i-1] == policko[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	string line;
	fstream file;
	string fname = "InOut/testing";
	file.open(fname + ".in");

	getline(file, line);
	InputParse(line);

	Ivektor(limit[0]);

	for(int i = 0; i < limit[1]; i++){
		pocet++;
		string Instructs;
		getline(file, Instructs);
		doIt(Instructs);
		coped = vektor;
		if(done(coped)){
			cout << " -> " << pocet << endl;
			return 0;
		}
	}
	return 0;
}