#include <iostream>
using namespace std;

int prvocisla(int i){
	if(i == 2 || i == 3 || i == 5 || i == 7){
		return i;
	}
	if(i%2 != 0 || i%3 != 0 || i%5 != 0 || i%7 != 0){
		return 100;
	}else{
		return prvocisla(i + 1);
	}
}

int main(){
	cout << prvocisla(408464633) << endl;
	return 0;
}