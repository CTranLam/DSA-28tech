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
void insert_node(node* root, int u,int v,char c){
	if(root==NULL) return;
	if(root->data==u){
		makenode(root,u,v,c);
	}
	else{
		insert_node(root->left,u,v,c);
		insert_node(root->right,u,v,c);
	}
}
int max_ans=0;
void high(node* root,int cnt){
	if(root != NULL){
		high(root->left,cnt+1);
		high(root->right,cnt+1);
		max_ans=max(max_ans,cnt);
	}
}
int main(){
	node* root=NULL;
	int n; cin >> n;
	for(int i=1 ; i<=n ; i++){
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
	high(root,0);
	cout << max_ans << endl;
}
