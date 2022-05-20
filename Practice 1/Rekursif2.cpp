#include <iostream>
using namespace std;
class Postest{  						//class untuk menyimpan variabel dan fungsi
	public:	
	    int proses(int angka);
	    void output();
	private:
	    int angka,pembalik;
};
 
int Postest::proses(int angka){
    static int pembalik = 0;
    static int awal=1;
    if(angka>0){							//rekursif
    	proses(angka/10);
    	pembalik += (angka%10) * awal;
    	awal *= 10;
	}
    return pembalik;
}
void Postest::output(){						//fungsi keluaran
	int angka;
	cout<<"Masukkan angka : ";
	cin>>angka;
    cout<<endl<<"Angka setelah pembalik = "<<proses(angka);
}
int main(){									//fungsi utama
    int angka;
    Postest Rekursif;
    Rekursif.proses(angka);
    Rekursif.output();
    
	return 0;     
}
