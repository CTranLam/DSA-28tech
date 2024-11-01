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
void insert_first(node* &head,int x){
	node *newnode=makenode(x);
	if(head==NULL){
		head=newnode;
		return;
	}
	newnode->next=head;
	head=newnode;
}
void erase_first(node *&head){
	if(head==NULL) return;
	node *tmp=head;
	head=head->next;
	delete tmp;
}
void show(node* &head){
	node* tmp=head;
	if(tmp==NULL){
		cout << "EMPTY" << endl;
		cout << endl;
	}
	while(tmp != NULL){
		cout << tmp->data <<" ";
		tmp=tmp->next;
	}
}
int main(){
	int t; cin>> t;
	node *head=NULL;
	while(t--){
		string tt;
		cin>> tt;
		if(tt=="push"){
			int x; cin >> x;
			insert_first(head,x);
		}
		else if(tt=="pop"){
			erase_first(head);
		}
		else{
			show(head);
		}
	}
}
