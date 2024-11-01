#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
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
int d[100005];
void high_node(node* root){
	if(root != NULL){
		if(root->left != NULL && d[root->left->data] > d[root->data]){
			d[root->left->data]=d[root->data]+1;
			high_node(root->left);
		}
		if(root->right != NULL && d[root->right->data] > d[root->data]){
			d[root->right->data]=d[root->data]+1;
			high_node(root->right);
		}
	}
}
vector<int> v;
int max_high=0;
void print(node* root){
	if(root != NULL){
		v.push_back(d[root->data]);
		max_high=max(max_high,d[root->data]);
		print(root->left);
		print(root->right);
	}
}
int cnt=0;
void dem(node* root){
	if(root != NULL){
		if(d[root->data]==max_high && root->left== NULL && root->right== NULL){
			++cnt;
		}
		dem(root->left);
		dem(root->right);
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
	for(int i=0 ; i<100005 ; i++){
		d[i]=MOD;
	}
	d[root->data]=0;
	high_node(root);
	print(root);
	dem(root);
	cout << cnt << endl;
}
