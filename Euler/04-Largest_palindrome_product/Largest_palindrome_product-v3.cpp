#include <iostream>
using namespace std;

int arr[6] = {0, 0, 0, 0, 0, 0};
int Product = 0;
int sum;
int Max = 0;

int IsPalindrom(int SubPalin[6]){
	if(SubPalin[0] == SubPalin[5] && SubPalin[1] == SubPalin[4] && SubPalin[2] == SubPalin[3]){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	for(int i = 100; i < 1000; ++i){
		for(int y = 100; y < 1000; ++y){
			sum = i*y;
			for(int z = 5; z >= 0; --z){
				arr[z] = sum % 10;
				sum /= 10;
			}
			if(IsPalindrom(arr) == 1){
				int Product = 0;
				for(int p2 = 0; p2 < 6; ++p2){
					Product += int(arr[p2]);
					Product = Product * 10;
				}
				Product /= 10;
				if(Product > Max){
					Max = Product;
				}
			}
		}
	}
	cout << "Max: " << Max;
	cout << endl;
	return 0;
}