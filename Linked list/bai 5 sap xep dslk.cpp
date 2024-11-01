#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int data;
	node *next;
};
node* makenode(int x){
	node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
void insert_first(node *&head,int x){
	node *newnode=makenode(x);
	if(head==NULL){
		head=newnode;
		return;
	}
	newnode->next=head;
	head=newnode;
}
int cnt(node*&head){
	int res=0;
	node *tmp=head;
	while(tmp!=NULL){
		++res;
		tmp=tmp->next;
	}
	return res;
}
void insert_mid(node* &head,int k,int x){
	node *tmp=head;
	if(k<1 || k>(cnt(tmp)+1)) return;
	if(k==1){
		insert_first(head,x);
		return;
	}
	node *newnode=makenode(x);
	for(int i=1 ; i<=(k-2) ; i++){
		tmp=tmp->next;
	}
	newnode->next=tmp->next;
	tmp->next=newnode;
}
int visited(node* &head,int x){
	node*tmp=head;
	int res=1;
	if(tmp==NULL){
		return 1;
	}
	while(tmp != NULL){
		if(tmp->data >= x){
			return res;
		}
		tmp=tmp->next;
		++res;
	}
	return res;
}
int main(){
	int n; cin >> n;
	node*head=NULL;
	while(n--){
		int x; cin >> x;
		int k=visited(head,x);
		insert_mid(head,k,x);
	}
	vector<int> v;
	node *tmp1=head;
	while(tmp1 != NULL){
		cout << tmp1->data <<" ";
		v.push_back(tmp1->data);
		tmp1=tmp1->next;
	}
	cout << endl;
	reverse(v.begin(),v.end());
	for(int x : v){
		cout << x <<" ";
	}
}
