#include <iostream>
using namespace std;

class Mahasiswa{
	public:				//identifier public
		string nama;
		string NIM;
		string jurusan;
		float IPK;	
		
		Mahasiswa(string Inputnama, string InputNIM, string Inputjurusan, float InputIPK){ //Conctructor
			Mahasiswa::nama = Inputnama;
			Mahasiswa::NIM = InputNIM;
			Mahasiswa::jurusan = Inputjurusan;
			Mahasiswa::IPK = InputIPK;
		}
		
		void tampilData(){							//method tanpa parameter tanpa return
			cout<<"Nama saya    : "<<nama<<endl;
			cout<<"NIM saya     : "<<NIM<<endl;
			cout<<"Jurusan saya : "<<jurusan<<endl;
			cout<<"IPK saya     : "<<IPK<<endl;
		
		}

};


int main(){
	Mahasiswa MHS1 = Mahasiswa("fauzan","2000018285","Teknik Perkapalan",3.90);
	MHS1.tampilData();
	return 0;
}
