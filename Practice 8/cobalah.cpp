#include <iostream>
using namespace std;

struct dataKTP{			//struct data KTP
    string NIK;
	string nama;
	string tempatLahir;
	string tanggalLahir;
    string jenisKelamin;
	string gol;
    string almtRumah;
    string rt;
    string rw;
    string kelurahan;
    string kecamatan;
    string agama;
    string status;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku;
    dataKTP *next;
};
dataKTP *head, *ekor, *cur, *newNode, *del, *temp, *midle;   // Inisialisasi pointer Linked List

bool Kosong (){
	if(ekor == NULL){
       return true;
   }else{
       return false;
   }
}

//fungsi tambah data awal
void BuatAntrianAwal(string NIK, string nama, string tempatLahir, string tglLahir, string jenisKelamin, string gol, string almtRumah, string rt, string rw, string kelurahan, string kecamatan, string agama, string status, string pekerjaan, string kewarganegaraan, string berlaku){
    if(Kosong()==true){
    	head = new dataKTP;
	    head->NIK = NIK;
	    head->nama = nama;
	    head->tempatLahir = tempatLahir;
	    head->tanggalLahir = tglLahir;
	    head->jenisKelamin = jenisKelamin;
	    head->gol = gol;
	    head->almtRumah = almtRumah;
	    head->rt = rt;
	    head->rw = rw;
	    head->kelurahan = kelurahan;
	    head->kecamatan = kecamatan;
	    head->agama = agama;
	    head->status = status;
	    head->pekerjaan = pekerjaan;
	    head->kewarganegaraan = kewarganegaraan;
	    head->berlaku = berlaku;
	    ekor = head;
	    ekor->next = head;
	}else{
		cout<<"Antrian Penuh!!";
	}
	
}
// fungsi tambah antrian depan
void TambahAntrianDepan(string NIK, string nama, string tempatLahir, string tglLahir, string jenisKelamin, string gol, string almtRumah, string rt, string rw, string kelurahan, string kecamatan, string agama, string status, string pekerjaan, string kewarganegaraan, string berlaku){
    newNode = new dataKTP;
    newNode->NIK = NIK;
    newNode->nama = nama;
    newNode->tempatLahir = tempatLahir;
    newNode->tanggalLahir = tglLahir;
    newNode->jenisKelamin = jenisKelamin;
    newNode->gol = gol;
    newNode->almtRumah = almtRumah;
    newNode->rt = rt;
    newNode->rw = rw;
    newNode->kelurahan = kelurahan;
    newNode->kecamatan = kecamatan;
    newNode->agama = agama;
    newNode->status = status;
    newNode->pekerjaan = pekerjaan;
    newNode->kewarganegaraan = kewarganegaraan;
    newNode->berlaku = berlaku;
    newNode->next = head;
    ekor->next = newNode;
    head = newNode;
}
//fungsi tambah antrian tengah
void TambahAntrianTengah(string NIK, string nama, string tempatLahir, string tglLahir, string jenisKelamin, string gol, string almtRumah, string rt, string rw, string kelurahan, string kecamatan, string agama, string status, string pekerjaan, string kewarganegaraan, string berlaku){
    midle = new dataKTP;
    midle->NIK = NIK;
    midle->nama = nama;
    midle->tempatLahir = tempatLahir;
    midle->tanggalLahir = tglLahir;
    midle->jenisKelamin = jenisKelamin;
    midle->gol = gol;
    midle->almtRumah = almtRumah;
    midle->rt = rt;
    midle->rw = rw;
    midle->kelurahan = kelurahan;
    midle->kecamatan = kecamatan;
    midle->agama = agama;
    midle->status = status;
    midle->pekerjaan = pekerjaan;
    midle->kewarganegaraan = kewarganegaraan;
    midle->berlaku = berlaku;
    midle->next = head;
    ekor->next = midle;
    ekor = midle;
}
//fungsi tambah antrian akhir
void TambahAntrianAkhir(string NIK, string nama, string tempatLahir, string tglLahir, string jenisKelamin, string gol, string almtRumah, string rt, string rw, string kelurahan, string kecamatan, string agama, string status, string pekerjaan, string kewarganegaraan, string berlaku){
    newNode = new dataKTP;
    newNode->NIK = NIK;
    newNode->nama = nama;
    newNode->tempatLahir = tempatLahir;
    newNode->tanggalLahir = tglLahir;
    newNode->jenisKelamin = jenisKelamin;
    newNode->gol = gol;
    newNode->almtRumah = almtRumah;
    newNode->rt = rt;
    newNode->rw = rw;
    newNode->kelurahan = kelurahan;
    newNode->kecamatan = kecamatan;
    newNode->agama = agama;
    newNode->status = status;
    newNode->pekerjaan = pekerjaan;
    newNode->kewarganegaraan = kewarganegaraan;
    newNode->berlaku = berlaku;
    newNode->next = head;
    ekor->next = newNode;
    ekor = newNode;
}
//fungsi Keluarakan antrian
void KeluarkanAntrian(){
    del = head;
    head = head->next;
    ekor->next = head;
    delete del;
}
//fungsi cetak semua node 
void Tampilkan(){
cur = head;
while(cur->next != head){
        	cout<<"\n\t\t\tPROVINSI JAWA TENGAH\n";
			cout<<"\t\t\t   KABUPATEN SRAGEN\n\n";
			cout<<"NIK\t\t\t: "<<cur->NIK;
			cout<<"\nNama\t\t\t: "<<cur->nama;
			cout<<"\nTempat Tanggal Lahir\t: "<<cur->tempatLahir;
			cout<<"\nTanggal Lahir\t\t: "<<cur->tanggalLahir;
			cout<<"\nJenis Kelamin\t\t: "<<cur->jenisKelamin;
			cout<<"\t Golongan Darah : "<<cur->gol;
			cout<<"\nAlamat\t\t\t: "<<cur->almtRumah;
			cout<<"\n\tRT/RW\t\t: "<<cur->rt<<"/"<<cur->rw;
			cout<<"\n\tDesa\t\t: "<<cur->kelurahan;
			cout<<"\n\tKecamatan\t: "<<cur->kecamatan;
			cout<<"\nAgama\t\t\t: "<<cur->agama;
			cout<<"\nPekerjaan\t\t: "<<cur->pekerjaan;
			cout<<"\nKewarganegaraan\t\t: "<<cur->kewarganegaraan;
			cout<<"\nBerlaku Hingga\t\t: "<<cur->berlaku;
			cout<<"\n========================================\n";
            cur = cur->next;
	}
}
//fungsi utama
int main(){
    BuatAntrianAwal("33140412082002","sansan amerika","Sragen","12 08 2002","Laki-laki","A","Tanjung","12","2","CELEP","KEDAWUNG","ISLAM","Belum Kawin","Mahasiswa","WNI","Seumur Hidup");
    Tampilkan();

    return 0;
}
