#include <iostream>
#include <conio.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

struct data{
	string prioritas;
	string inf;
	string h;
	struct data *next;
};

class antrian{
	private:
		data *f;
	
	public:
		antrian(){
			f = NULL;
		}
		void insert(string z, string y ,string x){
			data *t, *que;
			t = new data;
			t->inf = z;
			t->prioritas = y;
			t->h = x;
		
			if (f == NULL || y < f->prioritas){
				t->next = f;
				f = t;
			}
			else{
				que = f;
				while (que->next != NULL && que->next->prioritas <= y)
					que = que->next;
					t->next = que->next;
					que->next = t;
			}
			system("cls");
		}
		void delete_data(){
			data *t;
			if (f == NULL)
				cout << "Antrian kosong\n";
			else{
				t = f;
				cout << "Hapus data : " << t->inf << endl;
				f = f->next;
				free(t);
			}
		}
		void cetak(){
			data *ptr;
			ptr = f;
			if (f == NULL)
				cout << "Antrian kosong\n";
			else{
				cout << "Antrian Sekarang : \n";
				while (ptr != NULL){
				    cout << ptr->prioritas << ". "<< ptr->inf<<" ";
					cout << ptr->h << endl;
				    ptr = ptr->next;
				}
			}
		}
};

int main(){
	int opsi;
	string x;
	string y;
	string z;
	antrian a;
	
	do{
		cout<<"Insert(1)"<<endl;
		cout<<"Delete(2)"<<endl;
		cout<<"Cetak(3)"<<endl;
		cout<<"Exit(4)"<<endl;
	    cout << "Opsi yang dipilih : ";
	    cin >> opsi;
		switch (opsi){
	    case 1:
	    	cout<<""<<endl;
			cout <<"Status	         : "; 
			cin >> z;
			cout<< "Usia             : "; 
			cin >> x;
			cout <<"Prioritas        : "; 
			cin >> y;
			a.insert(z, y,x);
			break;
	    case 2:
			a.delete_data();
			break;
	    case 3:
	    	system("cls");
			a.cetak();
			cout<<"\n"<<endl;
			break;
	    case 4:
			break;
	    	default:
			cout << "kesalahan \n";
	    }
	} 
	while (opsi != 4);
	return 0;
}
