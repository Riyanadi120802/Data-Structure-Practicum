#include <iostream>
using namespace std;
class Postest{  
	public:
	    int proses(int angka);
	    void output();
	private:
	    int angka,pembalik;
};
 
int Postest::proses(int angka){
    int pembalik = 0;
    int awal=1;
    if(angka>0){
    	proses(angka/10);
    	pembalik += (angka%10) * awal;
    	awal *= 10;
	}
    return pembalik;
}
void Postest::output(){
	int angka;
	cout<<"Masukkan angka : ";
	cin>>angka;
    cout<<endl<<"Angka setelah pembalik = "<<pembalik;
}
int main(){
    int angka;
    Postest Iteratif;
    Iteratif.proses(angka);
    Iteratif.output();
    
	return 0;     
}
