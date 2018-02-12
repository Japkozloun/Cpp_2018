/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
using namespace std;

int long Input = 600851475143;
float SqrtN = Input * 0.5;
float i = 2;
bool run = true;

int prvocisla(int i){
	if(i == 2 || i == 3 || i == 5 || i == 7){
		return i;
	}
	if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0){
		return i;
	}else{
		return prvocisla(i + 1);
	}
}

int main(){
	cout << Input << endl;
	while(run == true){
		if(Input % prvocisla(i) == 0){
			cout << "x/" << i << endl;
			if(Input / prvocisla(i) == 1){
				Input = Input / prvocisla(i);
				run = false;
			}else{
				Input = Input / prvocisla(i);
				cout << Input << endl;
			}
		}else{
			if(i + 1 <= SqrtN){
				i++;
			}else{
				run = false;
			}
		}
	}
	cout << Input << endl;
	return 0;
}