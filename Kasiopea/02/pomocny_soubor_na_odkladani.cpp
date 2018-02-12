if(pole.at(0) >= pole.at(1)){
				cout << pocetKroku <<  " || " << endl;
				pole.display();
				cout << endl;
				if(pole.at(0) <= pole.head->prev->data){
					pocetKroku++;
					pole.head = pole.head->next;
				}else{
					for (int i = 0; i < pole.size() - 1; ++i){
						if(!(pole.at(i) <= pole.at(i+1))){
							pocetKroku++;
							pole.head = pole.head->next;
							cout << "!";

							for (int y = 0; y <= pole.size() - 1; ++y){
								if(!(pole.at(y) >= pole.at(y+1))){
									y = pole.size();
									i = pole.size();
									pocetKroku = -1;
								}else{
									y = pole.size();
									i = pole.size();
								}
							}
						}else{
							cout << "?";
						}
					}
					if(pocetKroku >= pole.size() - pocetKroku){
						cout << pole.size() - pocetKroku;
					}else{
						cout << pocetKroku;
					}
					cout << " ";
					pole.display();
					cout << endl;
					loop = false;
				}
			}else{
				cout << pocetKroku <<  " && " << endl;
				pole.display();
				cout << endl;
				if(pole.at(0) >= pole.head->prev->data){
					pocetKroku++;
					pole.head = pole.head->prev;
				}else{
					for (int i = 0; i < pole.size() - 1; ++i){
						if(!(pole.at(i) <= pole.at(i+1))){
							pocetKroku++;
							pole.head = pole.head->next;
							cout << "!";

							for (int y = 0; y <= pole.size() - 1; ++y){
								if(!(pole.at(y) >= pole.at(y+1))){
									y = pole.size();
									i = pole.size();
									pocetKroku = -1;
								}else{
									y = pole.size();
									i = pole.size();
								}
							}
						}else{
							cout << "?";
						}
					}
					if(pocetKroku > pole.size() - pocetKroku){
						cout << pole.size() - pocetKroku;
					}else{
						cout << pocetKroku;
					}
					cout << " ";
					pole.display();
					cout << endl;
					loop = false;
				}
			}