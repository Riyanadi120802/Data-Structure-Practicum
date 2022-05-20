//Program Tree Binary Riyan Adi 2000018286
#include <iostream>
using namespace std;

class BinaryTree{
	private:
		struct nodeTree{
			nodeTree* kiri;
			nodeTree* kanan;
			char data;
		};
		nodeTree* akar;
	public:
		BinaryTree(){
			akar = NULL;
		}
	bool isEmpty() const {
		return akar==NULL; 
	}
	void Cetak_inorder();
	void inorder(nodeTree*);
	void Cetak_preorder();
	void preorder(nodeTree*);
	void Cetak_postorder();
	void postorder(nodeTree*);
	void input(char);
};

void BinaryTree::input(char d){
	nodeTree* t = new nodeTree;
	nodeTree* parent;
	t->data = d;
	t->kiri = NULL;
	t->kanan = NULL;
	parent = NULL;
	
	if(isEmpty()) akar = t;
	else{
		nodeTree* cur;
		cur = akar;
	while(cur){
		parent = cur;
		if(t->data > cur->data) cur = cur->kanan;
		else cur = cur->kiri;
	}

	if(t->data < parent->data)
		parent->kiri = t;
		else
		parent->kanan = t;
	}
}

void BinaryTree::Cetak_inorder(){
	inorder(akar);
}

void BinaryTree::inorder(nodeTree* p){
	if(p != NULL){
		inorder(p->kiri);
		cout<<" "<<p->data<<" ";
		inorder(p->kanan);
	}
}

void BinaryTree::Cetak_preorder(){
	preorder(akar);
}

void BinaryTree::preorder(nodeTree* p){
	if(p != NULL){
		cout<<" "<<p->data<<" ";
		preorder(p->kiri);
		preorder(p->kanan);
	}else return;
}

void BinaryTree::Cetak_postorder(){
	postorder(akar);
}

void BinaryTree::postorder(nodeTree* p){
	if(p != NULL){
		postorder(p->kiri);
		postorder(p->kanan);
		cout<<" "<<p->data<<" ";
	}else return;
}

int main(){
	BinaryTree b;
	char data;
	int i=1, batas = 12;
	while(i<=batas){
		cout<<" inputkan data ke - " <<i<< " : ";
		cin>>data;
		b.input(data);
		i++;
	}
	cout<<" +----------+\n";
	cout<<" | In-Order |\n";
	cout<<" +----------+\n";
	b.Cetak_inorder();
	cout<<endl;
	cout<<" +------------+\n";
	cout<<" | Post-Order |\n";
	cout<<" +------------+\n";
	b.Cetak_postorder();
	cout<<endl;
	cout<<" +-----------+\n";
	cout<<" | Pre-Order |\n";
	cout<<" +-----------+\n";
	b.Cetak_preorder();
	cout<<endl;
	
	return 0;
}
