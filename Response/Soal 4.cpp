#include <iostream>
#include <cstdlib>
using namespace std;
class BinaryTree{
    private:
        struct nodeTree{
        nodeTree* left;
        nodeTree* right;
        char data;
    };
    nodeTree* root;
    public:
        BinaryTree(){
            root = NULL;
        }
        bool isEmpty() const{
            return root==NULL;
        }
        void cetak_inorder();
        void inorder(nodeTree*);
        void cetak_preorder();
        void preorder(nodeTree*);
        void cetak_postorder();
        void postorder(nodeTree*);
        void insert_data(char);
};
void BinaryTree::insert_data(char d){
    nodeTree* t = new nodeTree;
    nodeTree* parent;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;
    if(isEmpty()){
        root = t;
    }else{
        nodeTree* current;
        current = root;
    while(current){
        parent = current;
        if(t->data > current->data) current = current->right;
        else current = current->left;
        }
        if(t->data < parent->data)
        parent->left = t;
        else
        parent->right = t;
    }
}
void BinaryTree::cetak_inorder(){
    inorder(root);
}
void BinaryTree::inorder(nodeTree* p){
    if(p != NULL){
        if(p->left) inorder(p->left);
        cout<<" "<<p->data<<" ";
        if(p->right) inorder(p->right);
        }
    else return;
}
void BinaryTree::cetak_preorder(){
    preorder(root);
}
void BinaryTree::preorder(nodeTree* p){
    if(p != NULL){
        cout<<" "<<p->data<<" ";
        if(p->left) preorder(p->left);
        if(p->right) preorder(p->right);
    }
    else return;
}
void BinaryTree::cetak_postorder(){
    postorder(root);
}
void BinaryTree::postorder(nodeTree* p){
    if(p != NULL){
        if(p->left) postorder(p->left);
        if(p->right) postorder(p->right);
        cout<<" "<<p->data<<" ";
    }
    else return;
}
int main(){
    int pilih,data;
    char tmp,tmp1;
    BinaryTree BinTree;
    while(1){
        system("cls");
        cout<<"+===========================+"<<endl;
        cout<<"|       BINARY TREE         |"<<endl;
        cout<<"+===========================+"<<endl;
        cout<<"|  1. Insert Data           |"<<endl;
        cout<<"|  2. InOrder               |"<<endl;
        cout<<"|  3. PreOrder              |"<<endl;
        cout<<"|  4. PostOrder             |"<<endl;
        cout<<"|  5. Exit                  |"<<endl;
        cout<<"+===========================+"<<endl;
        cout<<"Masukan Pilihan anda : ";
        cin>>pilih;
    switch(pilih){
        case 1 :
            cout<<"Masukkan Banyaknya Data : ";
            cin>>data;
            for (int i=0; i<data; i++){
                cout<<"Data ke "<<i+1<<": ";
                cin>>tmp;
                BinTree.insert_data(tmp);
            }
            system("PAUSE");
            cout<<endl;
            break;
        case 2 :
            cout<<endl;
            cout<<"InOrder : ";
            BinTree.cetak_inorder();
            cout<<endl;
            system("PAUSE");
            cout<<endl;
            break;
        case 3 :
            cout<<endl;
            cout<<"PreOrder : ";
            BinTree.cetak_preorder();
            cout<<endl;
            system("PAUSE");
            break;
        case 4 :
            cout<<endl;
            cout<<"PostOrder : ";
            BinTree.cetak_postorder();
            cout<<endl;
            system("PAUSE");
            break;
        case 5 :
            return 0;
        }
    }
}
