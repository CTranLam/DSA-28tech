#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int data;
	node* left;
	node* right;
	// constructor
	node(int x){
		data=x;
		left=right=NULL;
	}
};
void makenode(node *root,int u,int v,char c){
	if(c=='L'){
		// tao + noi node con ben trai
		root->left=new node(v);
	}
	else{
		// tao+noi node con ben phai
		root->right=new node(v);
	}
}
// tao node cha
void insertnode(node *root,int u,int v,int c){
	if(root==NULL) return;
	// chay den node cha 
	if(root->data==u){
		makenode(root,u,v,c);
	}
	else{
		insertnode(root->left,u,v,c);
		insertnode(root->right,u,v,c);
	}
}
// duyet sau
void postorder(node * root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		cout << root->data <<" ";
	}
}
int main(){
	node * root=NULL;
	int n;
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		int u,v;
		char c;
		cin >> u >> v >> c;
		if(root==NULL){
			root=new node(u);
			makenode(root,u,v,c);
		}
		else{
			insertnode(root,u,v,c);
		}
	}
	postorder(root);
}
