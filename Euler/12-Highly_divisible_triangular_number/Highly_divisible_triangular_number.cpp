/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

     1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28

We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/

#include <iostream>
#include <cmath>
#include <cpr/cpr.h>
using namespace std;

int In = 1;				//triangle number
int sum = 2;
int n = 2;				//tim se deli
int pocet = 2;			//pocet delitelu
int MaxPocet = 0;		//maximalni pocet delitelu
int Limit;


int main(){
	clock_t begin = clock();
	while(MaxPocet < 500){			//triangle number
		In += sum;
		sum++;
		n = 2;
		Limit = sqrt(In);
		
		cout << In << endl;

		while(n < Limit){
			cout << In << "/" << n << "= ";
			if(In % n == 0){
				Limit = In / n;
				pocet += 2;
				cout << In/n << endl;
			}else{
				cout << "0" << endl;
			}
			n++;
		}

		if(pocet > MaxPocet){MaxPocet = pocet;}
		cout << MaxPocet << endl;
		pocet = 2;
		cout << "----------------------" << endl;
	}
	clock_t end = clock();
	cout << In << " " << MaxPocet << endl;
	cout << "In time: " << to_string(double(end - begin) / CLOCKS_PER_SEC) << endl;
	return 0;
}