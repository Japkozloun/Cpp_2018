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
	cout << "done \n";
	return 0;
}