#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct Node{
	char data;
 	Node *kiri;
 	Node *kanan;
};
Node *pohon = NULL;
void tambah (Node **root, char databaru){
 	if ((*root)==NULL) {
 		Node *baru;
 		baru = new Node;
 		baru->data=databaru;
 		baru->kiri=NULL;
 		baru->kanan=NULL;
 		(*root) = baru;
 		(*root) -> kiri = NULL;
 		(*root) -> kanan = NULL;
 		printf("Data Bertambah!"); }
	else if (databaru<(*root)->data)
 		tambah(&(*root)->kiri,databaru);
 	else if (databaru>(*root)->data)
 		tambah(&(*root)->kanan,databaru);
 	else if (databaru==(*root)->data)
 		printf("Data Sudah ada!");
}

void preOrder(Node *root){
 	if(root!=NULL){
 		if(root->data!=NULL){
 			printf("%c ",root->data);
 		}
 	preOrder(root->kiri);
 	preOrder(root->kanan);
 	}
}

void inOrder(Node *root){
 	if(root!=NULL)
 		if(root!=NULL){
 			inOrder(root->kiri);
 			if(root->data!=NULL){
 				printf("%c ",root->data);
 			}
 		inOrder(root->kanan);
 	}
}

void postOrder(Node *root){
 	if(root!=NULL) {
 	postOrder(root->kiri);
 	postOrder(root->kanan);
 		if(root->data!=NULL){
 			printf("%c ",root->data); }
 	}
}

int main(){
	char pil;
	while (true)
	{
	system("cls");
	char data;
	printf("\t#PROGRAM TREE Dev C++#");
	printf("\n\t=================");
	printf("\nMENU");
	printf("\n----\n");
	printf("[1] Tambah Data\n");
	printf("[2] Lihat Pre-Order\n");
	printf("[3] Lihat In-Order\n");
	printf("[4] Lihat Post-Order\n");
	printf("[X] Keluar\n");
	printf("Pilihan Anda : ");
	scanf("%c",&pil);
	fflush(stdin);
	switch(pil){
		case '1':
			printf("\nINPUT : ");
			printf("\n-------");
 			printf("\ninputkan data: ");
 			scanf("%c", &data);
 			//panggil fungsi untuk menambah node yang berisi data pada tree
 			tambah(&pohon,data);
 			_getch(); break;
 			//jika pil bernilai '2'
 		case '2':
 			printf("\nOUTPUT PRE ORDER : ");
 			printf("\n------------------\n");
 if(pohon!=NULL)
 //panggil fungsi untuk mencetak data secara preOrder
 preOrder(pohon);
 else
 printf("Masih Kosong!!!");
 _getch();
 break;
//jika pil bernilai '3'
 case '3':
 printf("\nOUTPUT IN ORDER : ");
 printf("\n------------------\n");
 if(pohon!=NULL)
 //panggil fungsi untuk mencetak data secara inOrder
 inOrder(pohon);
 else
 printf("Masih Kosong!!!");
 _getch();
break;
 //jika pil bernilai '4'
 case '4':
 printf("\nOUTPUT POST ORDER: ");
 printf("\n------------------\n");
 if(pohon!=NULL)
 //panggil fungsi untuk mencetak data secara postOrder
 postOrder(pohon);
 else
 printf("Masih Kosong!!!");
 _getch();
 break;
 //jika pil bernilai 'X' atau 'x'
 case 'X'|'x':
 exit(0);
 break;
 }
 }
}
