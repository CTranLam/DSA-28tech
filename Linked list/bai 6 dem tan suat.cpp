#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	string data;
	int tansuat;
	node* next;
};
node* makenode(string s){
	node*newnode=new node;
	newnode->data=s;
	newnode->tansuat=1;
	newnode->next=NULL;
	return newnode;
}
void them(node*&head,string s){
	node* tmp=head;
	if(head==NULL){
		node *newnode=makenode(s);
		head=newnode;
		return;
	}
	while(tmp->next != NULL){
		if(tmp->data==s){
			tmp->tansuat++;
			return;
		}
		tmp=tmp->next;
	}
	if(tmp->data==s){
		tmp->tansuat++;
	}
	// string nay chua co trong dslk
	else{
		node *newnode=makenode(s);
		tmp->next=newnode;
	}
}
int main(){
	node *head=NULL;
	string s;
	while(cin>>s){
		them(head,s);
	}
	node* tmp=head;
	while(tmp != NULL){
		cout << tmp->data <<" "<< tmp->tansuat << endl;
		tmp=tmp->next;
	}
}
