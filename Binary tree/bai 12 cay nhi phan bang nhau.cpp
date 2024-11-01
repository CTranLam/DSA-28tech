#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int data;
	node* left;
	node* right;
	node(int x){
		data=x;
		right=left=NULL;
	}
};
void makenode(node* root,int u,int v,char c){
	if(c=='L') root->left=new node(v);
	else root->right=new node(v);
}
void insert_node(node* root,int u,int v ,char c){
	if(root==NULL) return;
	else if(root->data==u){
		makenode(root,u,v,c);
	}
	else{
		insert_node(root->left,u,v,c);
		insert_node(root->right,u,v,c);
	}
}
ll max_cnt=0;
bool check(node* root1 , node*root2){
	if(root1==NULL && root2==NULL){
		return 1;
	}
	if(root1 != NULL && root2 != NULL){
		if(root1->data==root2->data && check(root1->left,root2->left) && check(root1->right,root2->right)){
			return 1;
		}
		else return 0;
	}
	return 0;
}
int main(){
	int n; cin >> n;
	node* root1=NULL;
	for(int i=0 ; i<n ; i++){
		int u,v;
		char c;
		cin >> u >> v >> c;
		if(root1==NULL){
			root1=new node(u);
			makenode(root1,u,v,c);
		}
		else{
			insert_node(root1,u,v,c);
		}
	}
	int m; cin >> m;
	node* root2=NULL;
	for(int i=0 ; i<m ; i++){
		int u,v;
		char c;
		cin >> u >> v >> c;
		if(root2==NULL){
			root2=new node(u);
			makenode(root2,u,v,c);
		}
		else{
			insert_node(root2,u,v,c);
		}
	}
	if(check(root1,root2)){
		cout <<"YES" << endl;
	}
	else{
		cout <<"NO" << endl;
	}
}

