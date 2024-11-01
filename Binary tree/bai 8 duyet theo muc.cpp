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
// noi node con vao node cha root
void makenode(node* root,int u,int v,char c){
	if(c=='L'){
		root->left=new node(v);
	}
	else{
		root->right=new node(v);
	}
}
void insert_node(node* root,int u,int v,char c){
	if(root == NULL) return;
	if(root->data==u){
		makenode(root,u,v,c);
	}
	else{
		insert_node(root->left,u,v,c);
		insert_node(root->right,u,v,c);
	}
}
void bfs(node* root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* p=q.front();
		q.pop();
		cout << p->data << " ";
		if(p->left != NULL){
			q.push(p->left);
		}
		if(p->right != NULL){
			q.push(p->right);
		}
	}
}
int main(){
	int n; cin >> n;
	node* root=NULL;
	for(int i=0 ; i<n ; i++){
		int u,v;char c;
		cin >> u >> v>> c;
		if(root==NULL){
			root=new node(u);
			makenode(root,u,v,c);
		}
		else{
			insert_node(root,u,v,c);
		}
	}
	bfs(root);
}
