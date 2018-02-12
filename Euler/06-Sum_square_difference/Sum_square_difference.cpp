/*
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <iostream>
#include <cmath>
using namespace std;

int Limit = 100;
int Out1;		//soucet mocnin
int Out2;		//mocnina souctu

int Power1(){
	int Output = 0;
	for(int i = 1; i <= Limit; ++i){
		Output += pow(float(i), 2);
	}
	
	return Output;
}

int Power2(){
	int Sum = 0;
	int Output = 0;
	for(int i = 1; i <= Limit; ++i){
		Sum += i;
	}
	//cout << Sum << endl;
	Output = pow(Sum, 2);
	return Output;
}

int main(){
	Out1 = Power1();
	Out2 = Power2();
	cout << Out1 << " - " << Out2 << " = " << Out2 - Out1 << endl;
	return 0;
}