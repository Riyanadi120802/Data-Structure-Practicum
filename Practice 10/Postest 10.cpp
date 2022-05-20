//Program TREE AVL Riyan Adi Saputro (2000018286)
#include<iostream>
#include<conio.h>
using namespace std;

template <typename T>
class AVL{
    public:
        class node{
            public:
                T temp;
                int tinggi;
                node * kiri;
                node * kanan;
                node(T k){
                    tinggi = 1;
                    temp = k;
                    kiri = NULL;
                    kanan = NULL;
                }
        };
        node * akar = NULL;
        int n;
        void insert(T x){
            akar=ProsesInput(akar, x);
        }
        void inorder(){
            Proses(akar);
            cout<<endl;
        }
        void Sebelum(T x){
        	ProsesInput(akar, x);
        	cout<<endl;
		}
    private:
        int tinggi(node * isi){
            if(isi==NULL) return 0;
            return isi->tinggi;
        }
        node * RotasiKanan(node * isi){
            node * newisi = isi->kiri;
            isi->kiri = newisi->kanan;
            newisi->kanan = isi;
            isi->tinggi = 1+max(tinggi(isi->kiri), tinggi(isi->kanan));
            newisi->tinggi = 1+max(tinggi(newisi->kiri), tinggi(newisi->kanan));
            return newisi;
        }

        node * RotasiKiri(node * isi){
            node * newisi = isi->kanan;
            isi->kanan = newisi->kiri;
            newisi->kiri = isi;
            isi->tinggi = 1+max(tinggi(isi->kiri), tinggi(isi->kanan));
            newisi->tinggi = 1+max(tinggi(newisi->kiri), tinggi(newisi->kanan));
            return newisi;
        }

        void Proses(node * isi){
            if(isi==NULL) return ;
            Proses(isi->kiri);
            cout<<" "<<isi->temp<<"--";
            Proses(isi->kanan);
        }

        node * ProsesInput(node * isi, T x){
            if(isi==NULL){
                n+=1;
                node * temp = new node(x);
                return temp;
            }
            if(x < isi->temp) isi->kiri = ProsesInput(isi->kiri, x);
            else if(x > isi->temp) isi->kanan = ProsesInput(isi->kanan, x);
            isi->tinggi = 1 + max(tinggi(isi->kiri), tinggi(isi->kanan));
            int bal = tinggi(isi->kiri) - tinggi(isi->kanan);
            if(bal>1){
                if(x < isi->kiri->temp){
                    return RotasiKanan(isi);
                }else{
                    isi->kiri = RotasiKiri(isi->kiri);
                    return RotasiKanan(isi);
                }
            }else if(bal<-1){
                if(x > isi->kanan->temp){
                    return RotasiKiri(isi);
                }else{
                    isi->kanan = RotasiKanan(isi->kanan);
                    return RotasiKiri(isi);
                }
            }
            return isi;
    	}
};

int main(){
    AVL<int> t;
    int angka;
    int pilihan;
    char pilihan2;
    do{
    	system("cls");
    	cout<<" +---------------+\n";
    	cout<<" | Menu Tree AVL |\n";
    	cout<<" +---------------+\n";
    	cout<<" | 1. Insert     |\n";
    	cout<<" | 2. Cetak      |\n";
    	cout<<" +---------------+\n";
    	cout<<" Masukkan pilihan anda : ";
    	cin>>pilihan;
    	switch(pilihan){
    		case 1 :
    			cout<<" Masukkan angka : ";
    			cin>>angka;
    			t.insert(angka);
    			break;
    		case 2 :
				t.inorder();
				break;
			default:
				cout<<"\n Pilihan anda tidak ada !\n";			
		}
		cout<<" Apakah ingin kembali ke Menu (y/n): ";
		cin>>pilihan2;
	}while(pilihan2=='y'|| pilihan2=='Y');
    getch();
    return 0;
}
