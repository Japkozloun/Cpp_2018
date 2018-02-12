#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int main() {
	std::vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	v.push_back(45);
	v.push_back(7);
	const int N = sizeof(v) / sizeof(int);

	int pozice = distance(v.begin(), std::max_element(v.begin(), v.end()));

	cout << "Index of max element: " << pozice << endl;

  return 0;
}