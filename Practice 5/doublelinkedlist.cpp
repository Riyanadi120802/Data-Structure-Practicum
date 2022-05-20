#include <iostream>
using namespace std;

class TNode{
	
};

void insertDepan(int databaru){
 TNode *baru;
 baru = new TNode;
 baru->data = databaru;
 baru->next = NULL;
 baru->prev = NULL;
 if(isEmpty()==1){
head=baru;
head->next = NULL;
head->prev = NULL;
 }
 else {
baru->next = head;
head->prev = baru;
head = baru;
 }
 cout<<"Data masuk\n";
}

int main(){
	isertDepan();
	
	return 0;
}
