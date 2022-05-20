#include <iostream>
using namespace std;

struct Stack {
	private:
		int i=0, j=0, a=0;
	public:
		int data[10];
		void push();
		void kondisi();
		void printGenap();
}Tumpukan1, Tumpukan2, Tumpukan;

void Stack::push(){
	
			
}
void Stack::kondisi(){
	while (a<5){
		cout << "\nMasukkan data = "; 
		cin >>Tumpukan.data[a];
		cout<<a;
		a++;
	}
	for (i = 0; i < 5; i++)
		if(Tumpukan.data[i]%2==0){
			for(j=0; j<5; j++)
				Tumpukan1.data[i]=Tumpukan.data[i];
		}
}
void Stack::printGenap(){
	cout<<"Bilangan Genapo :\n";
	for (i = 0; i < 5; i++)
		cout<<Tumpukan1.data[i]<<" ";
}

int main(){
	Stack Riyan;
//	Riyan.push();
	Riyan.kondisi();
	Riyan.printGenap();
	return 0;
}
