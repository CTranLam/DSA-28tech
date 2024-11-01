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
node* insert(node* root,int key){// tra ve vi tri de noi 
	// noi no vao node la
	if(root==NULL) return new node(key); 
	// vi tri noi ben trai hay ben phai
	if(key < root->data){
		root->left=insert(root->left,key);
	}
	else if(key>root->data){
		root->right=insert(root->right,key);
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
	node* root= NULL;
	root=new node(a[0]);
	for(int i=1 ; i<n ; i++){
		root=insert(root,a[i]);
	}
	inorder(root);
}

