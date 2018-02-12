#include <iostream>
#include <string>
#include <vector>

using namespace std;

int pocetP;
int delkaP;

void read(int *poi){
	int val;
	cin >> val;
	*poi = val;
}

int main(){
	read(&pocetP);

	for (int x = 0; x < pocetP; ++x){
		read(&delkaP);
		int error = 0;
		std::vector<int> pole;
		for (int i = 0; i < delkaP; ++i){
			int val;
			read(&val);
			pole.push_back(val);
		}
		for (int i = 0; i < delkaP - 1; ++i){
			//cout << pole[i+1] << "-" << pole[i] << "=" << pole[i+1] - pole[i] << "  --  ";
			if((pole[i+1] - pole[i]) > 3){
				error = 1;
				i = (delkaP + 1);
			}
		}
		if(error == 1){
			cout << "ne";
		}else{
			cout << "ano";
		}
		cout << endl;
	}
	return 0;
}