// c++ program to explain
// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
	private:
		// bersifat private
		int x;
		int diskon;
		
	public:
		//bersifat umum
		void set(int Input_Angka)
		{
			x = Input_Angka;
		}
		
		//fungsi mengembalikan nilai Inputan
		int getDiskon()
		{
			if(x>=10000){
				diskon = 5000;
			}else{
				diskon = 0;
			}
			return x-diskon;
		}
};

// main function
int main()
{
	int input;
	Encapsulation obj;
	cout<<"Masukkan Inputan bilangan : ";cin>>input;
	
	obj.set(input);
	
	cout<<"Harga Total : "<<obj.getDiskon();
	
	return 0;
}

