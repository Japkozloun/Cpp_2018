/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> PrimeVector;
int Input = 10001;
int sum;
int num = 2;

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
		return SubPrime;
	}
}

int prvocisla(int INum){
	if(INum == 2 || INum == 3 || INum == 5 || INum == 7){
		return 1;
	}else{
		if(INum % 2 != 0 && INum % 3 != 0 && INum % 5 != 0 && INum % 7 != 0){
			return INum;
		}else{
			return 0;
		}
	}
	
}

int main(){
	while(sum < Input){
		//cout << "pole: " << PrimeVector.size() << endl;
		if(prvocisla(num) != 0){
			if(prvocisla(num) == 1){
				PrimeVector.push_back(num);
				sum++;
				//cout << "YEY1" << endl;
			}else{
				if(doublecheck(num) != 0){
					PrimeVector.push_back(num);
					sum++;
					//cout << "YEY2" << endl;
				}else{
					//cout << "tak nic" << endl;
				}
			}
			//cout << prvocisla(num) << endl;
		}else{
			//cout << "NO" << endl;
		}
		num++;
	}
	//cout << endl << sum << endl;
	for(int i = 0; i < PrimeVector.size()	; ++i){
		//cout << PrimeVector[i] << " - ";
	}
	cout << endl << "Ans: " << PrimeVector[PrimeVector.size() - 1];
	cout << endl;
	return 0;
}