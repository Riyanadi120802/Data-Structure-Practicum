#include <iostream>
using namespace std;

class Antrian{
	public:
		void enQueue();
		int deQueue();
		void TampilkanQueue(); 
};

struct Node {
	int data;
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
    struct Node* temp;
    struct Node* link;
};
 
struct Queue {
    struct Node *depan, *belakang, *temp;
};
//fungsi penambahan antrian
void enQueue(Queue* queue, string NIK, string nama, string tempatLahir, string tglLahir, string jenisKelamin, string gol, string almtRumah, string rt, string rw, string kelurahan, string kecamatan, string agama, string status, string pekerjaan, string kewarganegaraan, string berlaku){
    struct Node* temp = new Node;
    temp->NIK = NIK;
    temp->nama = nama;
    temp->tempatLahir = tempatLahir;
    temp->tanggalLahir = tglLahir;
    temp->jenisKelamin = jenisKelamin;
    temp->gol = gol;
    temp->almtRumah = almtRumah;
    temp->rt = rt;
    temp->rw = rw;
    temp->kelurahan = kelurahan;
    temp->kecamatan = kecamatan;
    temp->agama = agama;
    temp->status = status;
    temp->pekerjaan = pekerjaan;
    temp->kewarganegaraan = kewarganegaraan;
    temp->berlaku = berlaku;
    if (queue->depan == NULL){
    	queue->depan = temp;
	}else{
		queue->belakang->link = temp;
	}
    queue->belakang = temp;
    queue->belakang->link = queue->depan;
}

int deQueue(Queue* queue) //pengurangan
{
	int del;
    if (queue->depan == NULL) {
        cout<<"Queue is empty";
        return INT_MIN;
   	}else{
        struct Node* temp = queue->depan;
        int del = temp->data;
        queue->depan = queue->depan->link;
        queue->belakang->link = queue->depan;
        delete(temp);
    }
  
    return del;
}

void TampilkanQueue(struct Queue* queue)
{
    struct Node* temp = queue->depan;
    cout<<("Elemen yang ada pada circual : ");
    while (temp->link != queue->depan) {
        cout<<"\n\t\t\tPROVINSI JAWA TENGAH\n";
		cout<<"\t\t\t   KABUPATEN SRAGEN\n\n";
		cout<<"NIK\t\t\t: "<<temp->NIK;
		cout<<"\nNama\t\t\t: "<<temp->nama;
		cout<<"\nTempat Tanggal Lahir\t: "<<temp->tempatLahir;
		cout<<"\nTanggal Lahir\t\t: "<<temp->tanggalLahir;
		cout<<"\nJenis Kelamin\t\t: "<<temp->jenisKelamin;
		cout<<"\t Golongan Darah : "<<temp->gol;
		cout<<"\nAlamat\t\t\t: "<<temp->almtRumah;
		cout<<"\n\tRT/RW\t\t: "<<temp->rt<<"/"<<temp->rw;
		cout<<"\n\tDesa\t\t: "<<temp->kelurahan;
		cout<<"\n\tKecamatan\t: "<<temp->kecamatan;
		cout<<"\nAgama\t\t\t: "<<temp->agama;
		cout<<"\nPekerjaan\t\t: "<<temp->pekerjaan;
		cout<<"\nKewarganegaraan\t\t: "<<temp->kewarganegaraan;
		cout<<"\nBerlaku Hingga\t\t: "<<temp->berlaku;
		cout<<"\n========================================\n";
        temp = temp->link;
    }
}

int main(){
	Queue* queue = new Queue;
    queue->depan = queue->belakang = NULL;
	enQueue(queue,"33140412082002","Riyan Adi Saputro","Sragen","12 08 2002","Laki-laki","A","Tanjung","12","2","CELEP","KEDAWUNG","ISLAM","Belum Kawin","Mahasiswa","WNI","Seumur Hidup");
	enQueue(queue,"33143829120320","Aris Pranata","Surakarta","22 02 1997","Laki-laki","A","Tanjung","13","4","CELEP","KEDAWUNG","ISLAM","Belum Kawin","Mahasiswa","WNI","Seumur Hidup");
	enQueue(queue,"33140412112200","Gilang King Abdul Aziz","Sidoharjo","10 06 1987","Laki-laki","O","Tanjung","13","4","CELEP","KEDAWUNG","ISLAM","Kawin","Wirausaha","WNI","Seumur Hidup");
	enQueue(queue,"33143829124312","Agung Utomo","Surakarta","22 02 1997","Laki-laki","A","Tanjung","19","4","CELEP","KEDAWUNG","ISLAM","Belum Kawin","Mahasiswa","WNI","Seumur Hidup");
	TampilkanQueue(queue);
	deQueue(queue);
	deQueue(queue);
	cout<<"\n===Setelah dihapus====\n";
	TampilkanQueue(queue);
	return 0;
}
