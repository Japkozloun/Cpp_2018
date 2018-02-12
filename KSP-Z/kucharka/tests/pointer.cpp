#include <iostream>

using namespace std;

int main(){
	int x, y;
	int *poi;

	poi = &x;
	*poi = 5;
	poi = &y;
	*poi = 10;

	cout << x << " " << y << endl;

    return 0;
}