#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<int> pole;
	for (int i = 0; i < 10; ++i){
		pole.push_back(i);
	}
	pole.pop_back();
	for (int i = 0; i < pole.size(); ++i){
		cout << pole.at(i);
	}
	return 0;
}