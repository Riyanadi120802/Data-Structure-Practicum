//stack Array Dinamis (Riyan Adi Saputro / 2000018286 / Genap)
#include <iostream>
using namespace std;

class stck{
    private:
        int Atas1;
        int Atas2;
        int* Simpan1;
        int max;
        int* Simpan2;
    public:
        void masuk();
        bool Kosong1();
        bool Kosong2();
        bool Penuh1();
        bool Penuh2();
        bool push1(int data_baru);
        bool push2(int data_baru);
        bool pop(int& data_keluar);
        bool pop1(int& data_keluar);
        void maks(int kapasitas);
        void Tampilkan();
        void HapusSemua();
};

void stck::maks(int kapasitas){
    max = kapasitas;
    Simpan1 = new int[max];
    Simpan2 = new int[max];
}

void stck::masuk(){
    Atas1 = 0;
    Atas2 = 0;
}

bool stck::Kosong1(){
    if(Atas1==0){
        return true;
    }else{
        return false;
    }
}

bool stck::Kosong2(){
    if(Atas2==0){
        return true;
    }else{
        return false;
    }
}

bool stck::Penuh1(){
    if(Atas1==max){
        return true;
    }else{
        return false;
    }
}

bool stck::Penuh2(){
    if(Atas2==max){
        return true;
    }else{
        return false;
    }
}

bool stck::push1(int data_baru){
    if(Penuh1() != true){
        Simpan1[Atas1] = data_baru;
        Atas1++;
        return Atas1;
    }
}

bool stck::push2(int data_baru){
    if(Penuh2() != true){
        Simpan2[Atas2] = data_baru;
        Atas2++;
        return Atas2;
    }
}

bool stck::pop(int& data_keluar){
    if(Kosong1()==false){
        Atas1--;
        data_keluar = Simpan1[Atas1];
        return true;
    }else{
        return false;
    }
}

bool stck::pop1(int& data_keluar){
    if(Kosong2()==false){
        Atas2--;
        data_keluar = Simpan2[Atas2];
        return true;
    }else{
        return false;
    }
}

void stck::Tampilkan(){
    int DataKeluar;
    while(Kosong1()==false){
        pop(DataKeluar);
        push2(DataKeluar);
    }
    while(Kosong2()==false){
        pop1(DataKeluar);
        cout << DataKeluar << " ";
        push1(DataKeluar); 
    }
}

char menu(){
    char pilihan;
    cout<<"\n\t===============";
    cout<<"\n\t||Daftar Menu||";
    cout<<"\n\t===============\n";
    cout<<" a. Memasukkan data (push Data)\n";
    cout<<" b. Menghapus data (Pop Data)\n";
    cout<<" c. Keluar\n";
    cout<<" Silahkan pilih menu : ";
    cin>>pilihan;
    return pilihan;
}

int Kapasitas(){
    int maksimal;
    cout<<" Kapasitas maksimal untuk stack : ";
    cin>>maksimal;
    return maksimal;
}

void stck::HapusSemua(){
    delete[] Simpan1;
    delete[] Simpan2;
}

int main(int argc, char const *argv[])
{
    stck Postest7;
    Postest7.masuk();
    char pilihan;
    int lanjut = 1;
    Postest7.maks(Kapasitas());
    do{
        pilihan = menu();
        switch (pilihan){
            case 'a':
                int DataAwal;
                system("cls");
                if(Postest7.Penuh1()==false){
                    cout<<"Masukkan angka : ";
                    cin>>DataAwal;
                    if(Postest7.push1(DataAwal)==true){
                        cout<<"Data "<<DataAwal<<" Berhasil di masukkan\n";
                    }
                    cout<<"Data saat ini : ";
                    Postest7.Tampilkan();
                }else{
                    cout<<"Maaf, kondisi Stack sudah Penuh!!\n";
                    cout<<"Data saat ini : ";
                    Postest7.Tampilkan();
                }
                break;
            case 'b':
                int DataKeluar;
                system("cls");
                if(Postest7.Kosong1()==false){
                    if(Postest7.pop(DataKeluar)== true){
                        cout<<"Data "<<DataKeluar<<" berhasil di keluarkan\n";
                    }
                    cout<<"Data saat ini : ";
                    Postest7.Tampilkan();
                }else{
                    cout<<"Maaf, Kondisi stack Kosong!! \n";
                    cout<<"Data saat ini : ";
                    Postest7.Tampilkan();
                }  
                break;
            case 'c':
                lanjut = 0;
            default:
                system("cls");
                cout<<"Maaf pilihan anda tidak tersedia\n";      
        }
    }while (lanjut==1);
    system("cls");
    cout<<"Program Berakhir :)\n";
    Postest7.HapusSemua();
    
    return 0;
}

