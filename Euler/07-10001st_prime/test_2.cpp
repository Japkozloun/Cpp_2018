#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main(){
	for(int i = 0; i < 20; ++i){
		v.push_back(i);
	}
	for (int i = 0; i < 20; ++i){
		cout << v[i] << "-";
	}
	return 0;
}