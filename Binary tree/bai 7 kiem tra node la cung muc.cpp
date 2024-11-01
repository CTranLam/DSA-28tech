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
vector<pair<node* ,int>> v;
void bfs(node* root,int ts){
	queue<pair<node*,int>> q;
	q.push({root,0});
	while(!q.empty()){
		node* p=q.front().first;
		int n=q.front().second;
		q.pop();
		if(p->left != NULL){
			q.push({p->left,n+1});
		}
		if(p->right != NULL){
			q.push({p->right,n+1});
		}
		if(p->left== NULL && p->right==NULL){
			v.push_back({p,n});
			//cout << p->data <<" "<<n << endl;
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
	bfs(root,1);
	int res=v[0].second;
//	cout << res << endl;
	for(int i=1 ; i<v.size() ; i++){
		if(v[i].second != res){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	
}
