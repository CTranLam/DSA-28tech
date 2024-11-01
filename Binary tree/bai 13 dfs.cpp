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
void makenode(node* root,int u,int v,char c){
	if(c=='L') root->left=new node(v);
	else root->right=new node(v);
}
void insert_node(node* root,int u,int v,char c){
	if(root==NULL) return;
	if(root->data==u){
		makenode(root,u,v,c);
	}
	else{
		insert_node(root->left,u,v,c);
		insert_node(root->right,u,v,c);
	}
}
void dfs(node* root){
	if(root!= NULL){
		cout << root->data <<" ";
		dfs(root->right);
		dfs(root->left);
	}
}
int main(){
	int n; cin >> n;
	node* root=NULL;
	for(int i=0 ; i<n ; i++){
		int u,v;
		char c;
		cin >> u >> v >> c;
		if(root==NULL){
			root=new node(u);
			makenode(root,u,v,c);
		}
		else{
			insert_node(root,u,v,c);
		}
	}
	dfs(root);
}
