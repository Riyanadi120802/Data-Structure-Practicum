#include <iostream>
using namespace std;
class Postest{  								//class untuk menyimpan variabel dan fungsi
	public:
	    int proses();
	    void output();
	private:
	    int angka,pembalik;
};
 
int Postest::proses(){										//fungsi proses Iteratif
    cout<<"Masukkan Agka yang ingin dibalik : ";
    cin>>angka;
    pembalik=0;
    while(angka>0){
        pembalik=(pembalik*10)+(angka%10);
        angka = angka/10;
    }
    return 0;
}
void Postest::output(){										//fungsi keluaran
    cout<<endl<<"Angka setelah pembalik = "<<pembalik;
}
int main(){													//fungsi utama
     
    Postest Iteratif;
    Iteratif.proses();
    Iteratif.output();
    
	return 0;     
}
