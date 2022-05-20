#include<iostream>
#define N 30
using namespace std;
string Pr[N];
int r = -1,d = -1;
void enqueue(string p){
    int i;
    if((d==0)&&(r==N-1))
        cout<<"antrian full";
        else{
        if(d==-1){
        d = r = 0;
        Pr[r] = p;
    }
    else if(r == N-1){
        for(i=d;i<=r;i++) {
            Pr[i-d] = Pr[i];
            r = r-d;
            d = 0;
        for(i = r;i>d;i--){
            if(p<Pr[i]){
                Pr[i+1] = Pr[i];
            }
            else
                break;
                Pr[i+1] = p;
                r++;
            }
        }
    }
    else{
        for(i = r;i>=d;i--){
            if(p<Pr[i]){
                Pr[i+1] = Pr[i];
            }
            else
                break;
            }
            Pr[i+1] = p;
            r++;
        }
    }
}
void print() {
    int i;
    if(d == -1){
        cout<<"antrian kosong\n";
        system("pause");
        system("cls");
    }else{
        for(i=d;i<=r;i++){
        cout<<Pr[i]<<endl;
    }
    }
}
int dequeue() {
    if(d == -1){
    cout<<"antrian kosong\n";
    system("pause");
    system("cls");
    }
    else{
        cout<<"dequeue = "<<Pr[d]<<endl;
        if(d==r)
        d = r = -1;
    	else
        d++;
    }
}
int main(){
    string p;
    int opt,i;
    do{
        if(i!=0){
            system("cls");
        }
        cout<<"+-------------+"<<endl;
        cout<<"|   ANTRIAN   |"<<endl;
        cout<<"+-------------+"<<endl;
        cout<<"1. Masukkan antrian\n";
        cout<<"2. lihat antrian\n";
        cout<<"3. dequeue antrian\n";
        cout<<"4. Exit\n";
        cout<<"pilih : ";
        cin>>opt;
        switch(opt){
            case 1:
                cout<<"\nMasukkan angka"<<endl;
                cout<<"antrian "<<i+1<<" : ";
                cin>>p;
                enqueue(p);
                i++;
                break;
            case 2:
                cout<<endl;
                cout<<"Daftar Antrian\n";
                print();
                system("pause");
                break;
            case 3:
                cout<<endl;
                dequeue();
                system("pause");
                break;
            case 4:
                cout<<endl;
                opt=0;
                break;
            default:
           		cout<<"\nPilihan anda salah"<<endl;
                system("pause");
                system("cls");
        }
    }while(opt!=0);
        cout<<"Terimakasih";
 return 0;
}
