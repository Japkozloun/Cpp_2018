#include <iostream>
#include <string>

using namespace std;

int pocetP;
int pocetR;
int done = 0;

void read(int *poi){
	int val;
	cin >> val;
	*poi = val;
}

struct node{
	int data;
	node *prev;
	node *next;
};

class list{
private:
	int lsize = 0;
public:
	node *head;
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
			cout << tmp->data << " ";
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

	bool sorted(){
		int is = 0;
		int wat = 0;
		for(int i = 0; i < lsize - 1; ++i){
			if(this->at(i) > this->at(i+1)){
				wat++;
			}else{
				wat = 1;
				i = lsize;
			}
		}
		if (wat != 1){
			is++;
		}
		wat = 0;
		for(int i = 0; i < lsize - 1; ++i){
			if(this->at(i) < this->at(i+1)){
				wat++;
			}else{
				wat = 1;
				i = lsize;
			}
		}
		if (wat != 1){
			is++;
		}
		if(is != 0){
			return true;
		}else{
			return false;
		}
	}

};

int main(){
	read(&pocetP);

	for (int x = 0; x < pocetP; ++x){
		read(&pocetR);

		list pole;

		for (int i = 0; i < pocetR; ++i){
			int val;
			read(&val);
			pole.createNode(val);
		}
		//Uz mam nactene konkretni pole
		bool loop = true;
		int pocetKroku = 0;
		while(loop){
			if(pole.at(0) > pole.at(1)){				//posun do prava
				if(pole.at(0) <= pole.head->prev->data){
					pocetKroku++;
					pole.head = pole.head->next;
					pole.display();
					cout << pole.sorted() << " ";
					cout << " #";
				}else{
					if(pole.sorted()){
						cout << "Sorted ";
						pole.display();
						loop = false;
					}else{
						if(pole.head->prev->data > pole.at(0) && pole.at(0) > pole.at(1) && pole.head->prev->data < pole.head->prev->prev->data){
							pole.head = pole.head->next;
						}else if(pole.head->prev->data < pole.at(0) && pole.at(0) < pole.at(1) && pole.head->prev->data < pole.head->prev->prev->data){
							
						}
					}
				}
			}else{										//posun do leva
				if(pole.at(0) >= pole.head->prev->data){
					pocetKroku++;
					pole.head = pole.head->prev;
					pole.display();
					cout << pole.sorted() << " ";
					cout << " &";
				}else{
					if(pole.sorted()){
						cout << "Sorted ";
						pole.display();	
						loop = false;
					}else{
												
					}
				}
			}
			cout << pocetKroku << endl;
		}
	}
	return 0;
}