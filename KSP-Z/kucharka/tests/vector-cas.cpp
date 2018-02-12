#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using Clock = std::chrono::high_resolution_clock;

int main(){
	auto s = Clock::now();
	std::vector<int> pole;
	for (int i = 1; i < 1000000; ++i){
		pole.push_back(i);
	}
	cout << pole.at(459876) << endl;
	auto e = Clock::now();
	std::chrono::duration<double> diff = e-s;
	cout << diff.count() << "s" << endl;

	return 0;
}