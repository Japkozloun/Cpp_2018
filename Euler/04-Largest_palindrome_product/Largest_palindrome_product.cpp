/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int tab[6] = {0, 0, 0, 0, 0, 0};
	int sum;
	int num1=0;
	int num2=0;
	for (int i = 1; i < 1000; i++){
		for (int j = 1; j < 1000; j++){
			sum = i*j;
			for (int i = 5; i >= 0; i--){
				tab[i] = sum % 10;
				sum /= 10;
			}
			num1 = tab[0];
			if(tab[0] == tab[5] && tab[1] == tab[4] && tab[2] == tab[3] && num1 >= num2){
				for (int l = 0; l < 6; l++){
					cout << tab[l];
				}
				cout << endl;
				num2 = num1;
			}
		}
	}
	return 0;
}