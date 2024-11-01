#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// xay cay nhi phan
struct node{
	int data;
	node * left;
	node * right;
	// ham khoi tao:constructor thay cho ham makenode hay sd
	node(int x){
		data=x;
		left=right=NULL;
	}
};
// tao ra not con+noi vao node cha
void makenode(node* root,int u ,int v, char c){
	if(c=='L') root->left=new node(v);
	else{
		root->right=new node(v);
	}
}
// tim den node cha
void insertnode(node* root ,int u ,int v,char c){
	if(root==NULL) return;
	if(root->data==u){
		makenode(root,u,v,c);
	}
	else{
		insertnode(root->left,u,v,c);
		insertnode(root->right,u,v,c);
	}
}
// duyet truoc
void preorder(node* root){
	if(root != NULL){
		cout << root->data <<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
int main(){
	int n; cin >> n;
	node* root=NULL;
	for(int i=1 ; i<=n ; i++){
		int u,v;
		char c;
		cin >> u >> v >> c;
		// cay chua duoc xay
		if(root==NULL){
			root=new node(u);// cap phat dong ra node cha
			makenode(root,u,v,c);
		}
		else{
			insertnode(root,u,v,c);
		}
	}
	preorder(root);
}
