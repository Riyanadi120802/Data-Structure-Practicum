#include <iostream>
using namespace std;

struct Stack {
	int top, data[10];
}Tumpukan1, Tumpukan2, Tumpukan;

void push() {
	int a = 0;
	while (a<5){
		cout << "\nMasukkan data = "; 
		cin >>Tumpukan.data[a];
		a++;
	}
			
}
void kondisi() {
	for (int i = 0; i < 5; i++)
		if(Tumpukan.data[i]%2==0){
			Tumpukan.data[i]=Tumpukan1.data[i];
		}else{
			Tumpukan.data[i]=Tumpukan2.data[i];
		}
}
void printGenap(){
	cout<<"\nBilangan Genap :\n";
	for (int i = 0; i < 5; i++)
		cout<<Tumpukan1.data[i]<<" ";
}
void printGanjil(){
	cout<<"\nBilangan Ganjil :\n";
	for (int i = 0; i < 5; i++)
		cout<<Tumpukan1.data[i]<<" ";
}

int main(){
	
	int i;
	push();
	kondisi();
	printGenap();
	printGanjil();
	return 0;
}
