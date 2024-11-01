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
	if(root !=NULL){
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
		insert_node(root,a[i]);
	}
	inorder(root);
}
