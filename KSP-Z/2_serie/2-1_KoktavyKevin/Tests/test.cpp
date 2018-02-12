#include <bits/stdc++.h>	//Jsem liny BTW tohle jsem presne potreboval

using namespace std;

fstream file;
string retezec;
int num = 0;

int main(){
	file.open("in.in");
	while(getline(file, retezec)){
		num++;
		cout << retezec << " " << num << endl;
	}
	cout << num;
	return 0;
}	