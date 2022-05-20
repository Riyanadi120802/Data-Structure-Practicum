#include <iostream>
using namespace std;

class Postest{
	public:
		int a[5];
		int temp;	
		void urut(int data[],int n){
			for(int h=0; h<n; h++){
				for(int i=0;i<n;i++){
					if(a[i]<a[i+1]){
						temp=a[i];
						a[i]=a[i+1];
						a[i+1]=temp;
					}
				}	
			}
	    }
};
int main(){
	Postest bil;
	int batas, temp;
	cout<<"Masukkan banyak data : ";cin>>batas;
	int a[batas];
	for(int i=0; i<batas; i++){
		cout<<"Masukkan bilangan : "; cin>>a[i];
	}
	cout<<"Sebelum di urutkan : "<<endl;
	for(int i=0; i<batas; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nSetelah di urutkan : "<<endl;
	bil.urut(a,batas);
	for(int i=0; i<batas; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
