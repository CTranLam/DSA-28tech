#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int data;
	node* left;
	node* right;
	node(int x){
		data=x;
		left=right=NULL;
	}
};
void insert_node(node* root,int key){
	if(root==NULL) return;
	if(key< root->data){
		if(root->left == NULL){
			root->left=new node(key);
		}
		else{
			insert_node(root->left,key);
		}
	}
	else{
		if(root->right== NULL){
			root->right=new node(key);
		}
		else{
			insert_node(root->right,key);
		}
	}
}
node* min_node(node* root){
	node* tmp=root;
	while( tmp != NULL && tmp->left != NULL){
		tmp=tmp->left;
	}
	return tmp; // node nho nhat lon hon node can xoa
}
node* delete_node(node* root,int key){
	if(root == NULL){
		return root;
	}
	if(key < root->data){
		root->left=delete_node(root->left,key);
	}
	else if(key > root->data){
		root->right=delete_node(root->right,key);
	}
	else if(root->data==key){
		// k co node ben trai
		if(root->left== NULL){
			node* tmp=root->right; // day node ben phai len node goc(co the ben phai cx la null)
			delete root;// xoa node goc di
			return tmp;
		}
		else if(root->right==NULL){
			node* tmp=root->left;// day node ben trai len node goc
			delete root;
			return tmp;
		}
		else{
			node* tmp=min_node(root->right);
			root->data=tmp->data;
			root->right=delete_node(root->right,tmp->data);// tim den node la vua xet de xoa di
			// se roi vao 1 trong 2 th tren
		}
	}
	return root;
}
void inorder(node* root){
	if(root != NULL){
		inorder(root->left);
		cout << root->data <<" ";
		inorder(root->right);
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++) cin >> a[i];
	node* root=new node(a[0]);
	set<int> se;
	se.insert(a[0]);
	for(int i=1 ; i<n ; i++){
		insert_node(root,a[i]);
		se.insert(a[i]);
	}
	int x; cin >> x;
	if(se.count(x)==0){
		inorder(root);
		return 0;
	}
	root=delete_node(root,x);
	inorder(root);
}

