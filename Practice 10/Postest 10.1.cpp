#include <iostream>
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
        };
        node * akar = NULL;
        int n;
        void Masuk (int x){
        	akar = ProsesInput(akar, x);
		}
		void inorder(){
            Proses(akar);
            cout<<endl;
        }
        
        private :
        	private:
		        int isi(node * isi){
		            if(isi==NULL) return 0;
		            return isi->isi;
		        }
		        node * RotasiKanan(node * isi){
		            node * newisi = isi->kiri;
		            isi->kiri = newisi->kanan;
		            newisi->kanan = isi;
		            isi->isi = 1+maks(isi(isi->kiri), isi(isi->kanan));
		            newisi->isi = 1+maks(isi(newisi->kiri), isi(newisi->kanan));
		            return newisi;
		        }
		
		        node * RotasiKiri(node * isi){
		            node * newisi = isi->kanan;
		            isi->kanan = newisi->kiri;
		            newisi->kiri = isi;
		            isi->isi = 1+maks(isi(isi->kiri), isi(isi->kanan));
		            newisi->isi = 1+maks(isi(newisi->kiri), isi(newisi->kanan));
		            return newisi;
		        }
		
		        void Proses(node * isi){
		            if(isi==NULL) return ;
		            Proses(isi->kiri);
		            cout<<isi->temp<<" ";
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
		            isi->isi = 1 + maks(isi(isi->kiri), isi(isi->kanan));
		            int bal = isi(isi->kiri) - isi(isi->kanan);
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
	AVL<int> postest10;
	postest10.Masuk(7);
	postest10.Masuk(10);
	
	
	
	
	return 0;
}
