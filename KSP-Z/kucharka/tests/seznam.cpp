#include <iostream>

using namespace std;

int main(){
	struct informace{
		int hodnota = 0;
		int *dalsi;
		int *prvni;
	};
	informace *pointer;

	informace I1;
	informace I2;

	int x = 10;

	pointer->hodnota = x;

	cout << I1.hodnota << " " << I2.hodnota << endl;

    return 0;
}