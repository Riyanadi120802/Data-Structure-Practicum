#include <iostream>
#include <string>
#include <stdlib.h>
#define maks 5
using namespace std;

class KartuTandaPenduduk{
	public:
		void input();
		void Output();
		struct KTP;
		struct alamat;
		struct tgl;
};
struct tgl{
    int tanggal;
    int bulan;
    int tahun;
};

struct alamat{
    char Alamat[20];
    int RT;
    int RW;
    char Kel[30];
    char kec[20];
    char kota[20];
};

struct KTP{
	char NIK[16];
	char nama[20];
	char tempatLahir[40];
	tgl tanggalLahir;
    char jenisKelamin[10];
	char gol[2];
    alamat almtRumah;
    char agama[10];
    char status[15];
	char pekerjaan[15];
	char kewarganegaraan[10];
	char berlaku[20];
};
KTP teman[maks];

KTP input(){
	KTP ku;
	cout<<"\t\t\t Masukkan Data Diri "<<endl;
	cout<<"Masukkan NIK\t\t\t: ";
	cin>>ku.NIK;
	cin.ignore();
	cout<<"Masukkan Nama Lengkap\t\t: ";
	gets(ku.nama);
	cout<<"Masukkan Tempat Lahir\t\t: ";
	gets(ku.tempatLahir);
	cout<<"Masukkan Tanggal Lahir (tgl)\t: ";
	cin>>ku.tanggalLahir.tanggal;
	cout<<"Masukkan Tanggal Lahir (Bulan)\t: ";
	cin>>ku.tanggalLahir.bulan;
	cout<<"Masukkan Tanggal Lahir (Tahun)\t: ";
	cin>>ku.tanggalLahir.tahun;
	cin.ignore();
	cout<<"Masukkan Jenis Kelamin\t\t: ";
	gets(ku.jenisKelamin);
	cout<<"Masukkan Golongan Darah\t\t: ";
	cin>>ku.gol;
	cin.ignore();
	cout<<"Masukkan alamat\t\t\t: ";
	gets(ku.almtRumah.Alamat);
	cout<<"Masukkan RT\t\t\t: ";
	cin>>(ku.almtRumah.RT);
	cout<<"Masukkan RW\t\t\t: ";
	cin>>(ku.almtRumah.RW);
	cin.ignore();
	cout<<"Masukkan Kelurahan\t\t: ";
	gets(ku.almtRumah.Kel);
	cout<<"Masukkan Kecamatan\t\t: ";
	gets(ku.almtRumah.kec);
	cout<<"Masukkan Agama\t\t\t: ";
	gets(ku.agama);
	cout<<"Masukkan Status Perkawinan\t: ";
	gets(ku.status);
	cout<<"Masukkan Pekerjaan\t\t: ";
	gets(ku.pekerjaan);
	cout<<"Masukkan Kewarganegaraan\t: ";
	gets(ku.kewarganegaraan);
	cout<<"Berlaku sampai \t\t\t: ";
	gets(ku.berlaku);
	
	return ku;	
}
KTP output(KTP ku){
	cout<<"\n\t\t\tPROVINSI JAWA TENGAH\n";
	cout<<"\t\t\t   KABUPATEN SRAGEN\n\n";
	cout<<"NIK\t\t\t: "<<ku.NIK;
	cout<<"\nNama\t\t\t: "<<ku.nama;
	cout<<"\nTempat Tanggal Lahir\t: "<<ku.tanggalLahir.tanggal;
	cout<<" - "<<ku.tanggalLahir.bulan;
	cout<<" - "<<ku.tanggalLahir.tahun;
	cout<<"\nJenis Kelamin\t\t: "<<ku.jenisKelamin;
	cout<<"\t Golongan Darah : "<<ku.gol;
	cout<<"\nAlamat\t\t\t: "<<ku.almtRumah.Alamat;
	cout<<"\n\tRT/RW\t\t: "<<ku.almtRumah.RT<<"/"<<ku.almtRumah.RW;
	cout<<"\n\tDesa\t\t: "<<ku.almtRumah.Kel;
	cout<<"\n\tKecamatan\t: "<<ku.almtRumah.kec;
	cout<<"\nAgama\t\t\t: "<<ku.agama;
	cout<<"\nPekerjaan\t\t: "<<ku.pekerjaan;
	cout<<"\nKewarganegaraan\t\t: "<<ku.kewarganegaraan;
	cout<<"\nBerlaku Hingga\t\t: "<<ku.berlaku;
	cout<<"\n========================================\n";
}
int main(){
	KTP riyan;
	KTP gilang;
	KTP aris;
	cout<<"Data ke-satu : "<<endl;
	riyan = input();
	cout<<"\n------------------------------------------------\n";
	cout<<"\nData ke-dua : "<<endl;
	gilang = input();
	cout<<"\n------------------------------------------------\n";
	cout<<"\nData ke-tiga : "<<endl;
	aris = input();
	cout<<"\n------------------------------------------------\n";
	cout<<endl<<endl;
	cout<<"data ke - 1\n";
	output(riyan);
	cout<<"data ke - 2\n";
	output(gilang);
	cout<<"data ke - 3\n";
	output(aris);
	return 0;
}

