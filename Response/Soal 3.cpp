#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;

struct data{
	string prioritas;
	string cek;
	string h;
	struct data *lanjut;
};

class antrian{
	private:
		data *n;
	
	public:
		antrian(){
			n = NULL;
		}
		void insert(string z, string y ,string x){
			data *t, *que;
			t = new data;
			t->cek = z;
			t->prioritas = y;
			t->h = x;
		
			if (n == NULL || y < n->prioritas){
				t->lanjut = n;
				n = t;
			}
			else{
				que = n;
				while (que->lanjut != NULL && que->lanjut->prioritas <= y)
					que = que->lanjut;
					t->lanjut = que->lanjut;
					que->lanjut = t;
			}
			system("cls");
		}
		void delete_data(){
			data *t;
			if (n == NULL)
				cout << "ANTRIAN KOSONG\n";
			else{
				t = n;
				cout << "HAPUS DATA : " << t->cek << endl;
				n = n->lanjut;
				free(t);
			}
		}
		void cetak(){
			data *ptr;
			ptr = n;
			if (n == NULL)
				cout << "ANTRIAN KOSONG\n";
			else{
				cout << "ANTRIAN SEKARANG : \n";
				while (ptr != NULL){
				    cout << ptr->prioritas << ". "<< ptr->cek<<" ";
					cout << ptr->h << endl;
				    ptr = ptr->lanjut;
				}
			}
		}
};

int main(){
	int pilih;
	string i;
	string j;
	string k;
	antrian a;
	
	do{
		cout<<"+------------------------------+"<<endl;
		cout<<"|      ANTRIAN BERPRIORITAS    |"<<endl;
		cout<<"+------------------------------+"<<endl;
		cout<<"|  1. Insert                   |"<<endl;
		cout<<"|  2. Delete                   |"<<endl;
		cout<<"|  3. Cetak                    |"<<endl;
		cout<<"|  4. Exit                     |"<<endl;
		cout<<"+------------------------------+"<<endl;
	    cout << "Masukkan Pilihan Anda : ";
	    cin >> pilih;
	    
		switch (pilih){
	    case 1:
	    	system("cls");
	    	cout<<"INSERT DATA"<<endl;
			cout <<"STATUS	         : "; 
			cin >> k;
			cout<< "USIA             : "; 
			cin >> i;
			cout <<"PRIORITAS        : "; 
			cin >> j;
			a.insert(k, j, i);
			break;
	    case 2:
			a.delete_data();
			break;
	    case 3:
			a.cetak();
			cout<<"\n"<<endl;
			break;
	    case 4:
			break;
	    	default:
			cout << "INPUT DATA SALAH";
	    }
	} 
	while (pilih != 4);
	return 0;
}
