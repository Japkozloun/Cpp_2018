/*
n → n/2 (n is even) 2 4 6 8 
n → 3n + 1 (n is odd) 1 3 5 7 9
*/

#include <iostream>
#include <vector>
using namespace std;

long num;
long numOfSteps;
int best[2];
int percentage[2] = {1, 1};


int main(){
	for(int i = 1; i <= 1000000; ++i){
		num = i;
		while(num != 1){
			if(num % 2 == 0){
				num = num / 2;
			}else{
				num = (num * 3) + 1;
			}
			numOfSteps++;
		}
		if(numOfSteps > best[0]){
			best[0] = numOfSteps;
			best[1] = i;
		}
		numOfSteps = 0;
		percentage[1] = i / 10000;
		if(percentage[1] % 1 == 0 && percentage[1] != percentage[0]){
			cout << percentage[1] << endl;
			percentage[0] = percentage[1];
		}
	}
	cout << "========================" << endl;
	cout << "Max pocet kroku: " << best[0] << endl;
	cout << "Cislo u ktereho to bylo: " << best[1] << endl;
	return 0;
}