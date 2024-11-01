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
int main(){
	int n; cin >> n; int a[n];
	for(int i=0 ; i<n ; i++) cin >> a[i];
	node* root=new node(a[0]);
	int max_=a[0];
	int min_=a[0];
	for(int i=1 ; i<n ; i++){
		insert_node(root,a[i]);
		if(a[i]>max_) max_=a[i];
		if(a[i] < min_) min_=a[i];
	}
	cout << max_ <<" "<<min_ <<endl;
}
