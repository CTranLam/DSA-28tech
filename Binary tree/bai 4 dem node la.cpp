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
	if(c=='L'){
		root->left=new node(v);
	}
	else{
		root->right=new node(v);
	}
}
void insertnode(node* root ,int u ,int v,char c){
	if(root== NULL){
		return;
	}
	// tim thay node cha
	else if(root->data==u){
		makenode(root,u,v,c);
	}
	else{
		insertnode(root->left,u,v,c);
		insertnode(root->right,u,v,c);
	}
}
int ans=0;
void cnt(node* root){
	if(root != NULL){
		if(root->left == NULL && root->right== NULL){
			ans++;
		}
		cnt(root->left);
		cnt(root->right);
	}
	
}
int main(){
	node* root=NULL;
	int n; cin >> n;
	for(int i=0 ; i<n ; i++){
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
	cnt(root);
	cout << ans << endl;
}
