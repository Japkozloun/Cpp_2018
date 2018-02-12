/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <iostream>
#include <cmath>
using namespace std;

float SideA, SideB;
float SideC;
unsigned long Ans = 0;
int Goal = 1000;
float NumAB = 0;

int main(){
	for(int SideA = 1; SideA < 500; ++SideA){
		for (int SideB = 0; SideB < 500; ++SideB){
			SideC = sqrt(pow(SideA, 2) + pow(SideB, 2));
			if(SideC == int(SideC)){
				if(SideC + SideB + SideA == Goal){
				cout << " " << SideA << " " << SideB << " " << SideC << endl;
				Ans = SideA * SideB * SideC;
				cout << "Ans: " << Ans << endl;
				cout << endl;
				}
			}
		}
	}
	return 0;
}