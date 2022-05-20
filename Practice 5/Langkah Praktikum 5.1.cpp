#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int pilih; void pilihan();
void insert_data();
void cetak_data();
struct node
{
 float nilai;
 node *prev, *next;
};
node *baru, *head=NULL, *tail=NULL,*help,*del;
void pilihan()//fungsi "pilihan" untuk pemrosesan
{
 if(pilih==1)
 insert_data();
 else if(pilih==2)
 cetak_data();
 else
 {
  cout<<"EXIT";
  cout<<"\nSampai Jumpa lagi"<<endl;
 }

}
void buat_baru()//fungsi membuat data baru
{
 baru = new(node);
 cout<<"Masukkan Nilai : ";cin>>baru->nilai;
 getch();
 baru->prev=NULL;
 baru->next=NULL;
}
void insert_data()
{
 buat_baru();
 if(head==NULL)
 {
  head=baru;
  tail=baru;
 }
 else
 {
  baru->next=head;
  head->prev=baru;
  head=baru;
 }
 cout<<endl<<endl;
}
void cetak_data()
{
 if (head==NULL)
 cout<<"\nData tidak dapat ditemukan!"<<endl;//data yang kosong
 else
 {
  help=head;
  while(help!=NULL){
   cout<<" Nilai : "<<help->nilai<<"->";
   help=help->next;
  }
 }
getch();
}
int main()//interface monitor
{
 do
 {
  system("cls");
  cout<<"\tLIN. DOUBLY LINKED LIST"<<endl;
  cout<<"\t=========================="<<endl;
  cout<<"\t1. INSERT DATA"<<endl;
  cout<<"\t2. CETAK DATA"<<endl;
  cout<<"\t3. EXIT"<<endl;
  cout<<"\tPilihan (1 - 3) : ";
  cin>>pilih;
  cout<<endl<<endl;
  pilihan();
  cout<<"==============================="<<endl;
 }
 while(pilih!=4);
 return 0;
}

