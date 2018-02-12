#include <iostream>
using namespace std;

int Input = 43739;

int prvocisla(int i){
	if(i == 2 || i == 3 || i == 5 || i == 7){
		return i;
	}
	if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0){
		return 1001;
	}else{
		return 0;
	}
}

int main(){
	cout << prvocisla(Input) << endl;
	return 0;
}