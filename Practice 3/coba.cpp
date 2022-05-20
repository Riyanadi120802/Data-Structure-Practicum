#include <iostream>
using namespace std;

int main(){
    int batas;
    
	cout<<"Masukkan banyak tingkat = ";cin>>batas;
	
    for(int i=1;i<=batas;i++){
        for(int j=1;j<=i;j++){
                cout<<" "<<i;
        }
        cout<<endl;
    }
    for(int k=batas; k>=1; k--){
    	cout<<"   ";
    	for(int l=1; l<=k; l++){
    		cout<<" "<<k;
		}
		cout<<endl;
	}
    

    cin.get();
    return 0;
}
