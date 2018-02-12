#include<iostream>
using namespace std;

struct node{
	int data;
	node *prev;
	node *next;
};

class list{
private:
	node *head;
	int lsize = 0;
public:
	list()
	{
		head = NULL;
	}

	void createNode(int val){
		node *tmp = new node;
		tmp->data = val;
		tmp->next = NULL;
		if(head == NULL){
			head = tmp;
			head->prev = head;
			head->next = head;
			tmp = NULL;
		}else{
			tmp->prev = head->prev;
			tmp->next = head;
			head->prev->next = tmp;
			head->prev = tmp;
		}
		lsize++;
	}

	void display(){
		node *tmp = new node;
		tmp = head;
		do{
			cout << tmp->data << endl;
			tmp = tmp->next;
		}while(tmp != head);
	}

	int at(int pos){
		node *tmp = head;
		for (int i = 0; i < pos; ++i){
			tmp = tmp->next;
		}
		return tmp->data;
	}

	int size(){
		return lsize;
	}

};

int main(){
	list prvni;
	return 0;
}