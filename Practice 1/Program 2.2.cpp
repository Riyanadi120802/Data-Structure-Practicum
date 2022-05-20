#include <iostream>
using namespace std;

//void cari(int x, int n){
//	
//	static int i;
//	if (n==0){
//		cout<<"Bilangan tidak ditemukan\n";
//	}else if(x==n){
//		cout<<"Bilangan ditemukan setelah perulangan ke "<<i<<endl;
//	}else{
//		i++;
//		cari(x,n-1);
//	}
//}

int faktorial(int n){
	
	if(n==4){
		cout<<n;
	}else{
		return (n*faktorial(n-1));
	}
}

int main(int argc, char *agrv[]){
//	cari(14,9);
//	system("PAUSE");
	int n; 
	cout<<"Masukkan n : "; cin>>n;
	faktorial(n);
	
	return 0;
}
