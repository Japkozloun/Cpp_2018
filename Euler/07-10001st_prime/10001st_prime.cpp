/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <iostream>
#include <vector>
using namespace std;

int sum = 0;
int num = 2;
int LineNum = 0;
vector<int> PNum;
int OutputNumPlace = 10001;

int prvocisla(int num){
	int i = num % 100;
	if(i == 2 || i == 3 || i == 5 || i == 7){
		return i;
	}
	if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0){
		return i;
	}else{
		return 0;
	}
}

int main(){
	while(sum < OutputNumPlace){
		if(prvocisla(num) != 0){
			LineNum++;
			cout << LineNum << " " << num << endl;
			sum++;
		}
		num++;
	}
	cout << num - 1 << endl;
	return 0;
}