/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <iostream>
#include <vector>
#include <ctime>
using namespace  std;

int Limit = 2000000;
int num = 2;
unsigned long long sum = 0;
int OutputNum = 0;
int NumNow = 0;
vector<int> PrimeVector;

int doublecheck(int SubPrime);
int prvocisla(int INum);

int main(){
	clock_t begin = clock();
	while(num < Limit){
		NumNow = prvocisla(num);
		if(NumNow != 0){
			cout << NumNow << endl;
			sum += NumNow;
		}
		num++;
	}
	clock_t end = clock();
	cout << endl << "Time: " << to_string(double(end - begin) / CLOCKS_PER_SEC) << "s , ans=";
	cout << sum << endl;
	return 0;
}

int doublecheck(int SubPrime){
	int ch = 0;
	for(int i = 0; i < PrimeVector.size(); ++i){
		if(SubPrime % PrimeVector[i] == 0){
			ch++;
		}
	}
	if(ch >= 1){
		return 0;
	}else{
		PrimeVector.push_back(SubPrime);
		return SubPrime;
	}
}

int prvocisla(int INum){ 
	if(INum == 2 || INum == 3 || INum == 5 || INum == 7){
		PrimeVector.push_back(INum);
		return INum;
	}else{
		if(INum % 2 != 0 && INum % 3 != 0 && INum % 5 != 0 && INum % 7 != 0){
			return doublecheck(INum);
		}else{
			return 0;
		}
	}
	
}
