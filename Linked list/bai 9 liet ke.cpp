#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int data;
	node * next;
};
node * makenode(int x){
	node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
void insert(node*& head,int x){
	node* newnode=makenode(x);
	if(head==NULL){
		head=newnode;
		return;
	}
	node* tmp=head;
	while( tmp->next != NULL){
		if(tmp->data == x){
			return;
		}
		tmp=tmp->next;
	}
	if(tmp->data==x){
		return;
	}
	tmp->next=newnode;
}
int main(){
	int n; cin >> n;
	node* head=NULL;
	while(n--){
		int x; cin >> x;
		insert(head,x);
	}
	node *tmp=head;
	while(tmp != NULL){
		cout << tmp->data <<" ";
		tmp=tmp->next;
	}
}
