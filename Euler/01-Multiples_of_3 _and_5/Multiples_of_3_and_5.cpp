//https://projecteuler.net/problem=1
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>		//standart I/O
#include <ctime>		//time
using namespace std;

int deleni3 = 1000 / 3;
int deleni5 = 1000 / 5;
int long Output;
int long Suma1;
int long Suma2;

int main(){
	clock_t begin = clock();
	cout << deleni3 << ", " << deleni5 << endl;
	for(int i = deleni3; i > 0; --i){
		Suma1 += i * 3;
		cout << i << " | " << i * 3 << " | " << Suma1 << endl;
	}
	cout << "-----" << endl;
	for(int i = deleni5; i > 0; --i){
		Suma1 += i * 5;
		cout << i << " | " << i * 5	 << " | " << Suma1 << endl;
	}
	for(int i = 1; i * (5 * 3) < 1000; ++i){
		Suma2 += (5 * 3 * i);
	}
	clock_t end = clock();
	Output = Suma1 - Suma2 - (deleni5 * 5);
	cout << "Time: " << to_string(double(end - begin) / CLOCKS_PER_SEC) << "s" << endl;
	cout << endl << Output << endl;

	return 0;
}
