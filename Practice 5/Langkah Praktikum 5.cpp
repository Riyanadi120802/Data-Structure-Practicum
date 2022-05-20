#include <iostream>
using namespace std;
#define maks 6
class Stack {
	friend ostream& operator<<(ostream&, const Stack&);
	public :
	Stack();
	int penuh(int);
	int kosong(int);
	void cetak();
	void push(char);
	char pop();
	private :
	char A[maks];
	int banyak;
};

ostream& operator<<(ostream& out, const Stack& s){ 
	cout << "\n Isi stack \t\t\t: ";
	for (int i=0; i< s.banyak; i++)
	out << s.A[i] << " ";
}

Stack::Stack() {
	banyak = 0;
	for (int i=0; i<maks; i++)
	A[i] = '0';
}

int Stack::penuh(int s){
	return s == maks ? 1 : 0; 
}

int Stack::kosong(int s){ 
	return s == 0 ? 1 : 0; 
}

void Stack::cetak(){
	cout << "\n Isi stack \t\t\t: ";
	for (int i=0; i< banyak; i++)
	cout << A[i] << " "; 
}

void Stack::push(char x){ 
	cout << "\n Elemen masuk \t\t\t: " << x;
	if (penuh(banyak)) cout << "Stack penuh";
	else if (A[0]=='0') {
		A[0] = x;
		banyak++; 
	}else{
		for (int i=banyak; i>=0; i--)
		A[i+1] = A[i];
		A[0] = x;
		banyak++;
	}
}

char Stack::pop(){
	cout << "\n Pop stack, elemen yang di-pop\t: " << A[0];
	char temp=A[0];
	for (int i=0; i<banyak; i++) A[i] = A[i+1];
	A[banyak] = '0';
	banyak--;
	return temp;
}

int main() {
	Stack stack;
	for (char c='a'; c<'d'; c++) {
		stack.push(c);
		stack.cetak();
	}
	char p = stack.pop();
	stack.cetak();
	cout<<"\n\n=====================================";
	cout << "\nCetak pakai ovrloading \t\t: " << stack;
}
