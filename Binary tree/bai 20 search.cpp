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
	if(root != NULL){
		if(key<root->data){
			if(root->left== NULL) root->left=new node(key);
			else insert_node(root->left,key);
		}
		if(key>root->data){
			if(root->right== NULL) root->right=new node(key);
			else insert_node(root->right,key);
		}
	}
}
bool search(node* root,int key){
	if(root==NULL) return false;
	if(root->data== key) return true;
	if(root->data > key){
		return search(root->left,key);
	}
	else if(root->data < key){
		return search(root->right,key);
	}
}
int main(){
	int n,x; cin >> n >> x; int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		if(a[i]==x){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
//	node* root=new node(a[0]);
//	for(int i=1 ; i<n ; i++){
//		insert_node(root,a[i]);
//	}
//	if(search(root,x)) cout << "YES" << endl;
//	else cout << "NO" << endl;
}
