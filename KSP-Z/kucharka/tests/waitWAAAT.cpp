#include <iostream>
#include <chrono>

using namespace std;
using Clock = std::chrono::high_resolution_clock;

class list{
	public:
		struct node{
			int data;
			node *next = NULL;
		};
		node *h = NULL;	//pointer to first element
		node *n = NULL;	//pointer to new element
		node *t = NULL;	//pointer to temp. element
		node *l = NULL;	//pointre na posledni

		void insert(int);
		int show(int);
		void Bsort();
};

void list::insert(int iNum){
	node *n = new node;
	if (h == NULL){
		h = n;
		t = h;
		t->next = NULL;
	}else{
		t->next = n;
	}
	n->data = iNum;
	t = n;
	l = n;
}

int list::show(int pos){
	int val;
	t = h;
	for (int i = 0; i < pos; ++i){
		if (t->next){
			//cout << i << " " << t->data << endl;
			t = t->next;
		}else{
			i = pos;
		}
	}
	val = t->data;
	return val;
}

void list::Bsort(){
	t = h;
	do{
		t = t->next;
	}while(t != l);
}

int main(){
	auto s = Clock::now();
	list seznam;
	for (int i = 1; i < 1000000; ++i){
		seznam.insert(i);
	}
	cout << seznam.show(459876) << endl;
	auto e = Clock::now();
	std::chrono::duration<double> diff = e-s;
	cout << diff.count() << "s" << endl;
	return 0;
}