#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int data;
	node *next;
};
node* makenode(int x){
	node *newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
void insert_last(node* &head ,int x){
	node* newnode=makenode(x);
	if(head==NULL){
		head=newnode;
		return;
	}
	node* tmp=head;
	while(tmp->next != NULL){
		tmp=tmp->next;
	}
	tmp->next=newnode;
}
void delete_all(node *&head,int x){
	node* truoc=NULL;
	node* sau=head;
	while(sau != NULL){
		if(sau->data==x){
			if(truoc==NULL){
				head=head->next;
				sau=head;
			}
			else{
				truoc->next=sau->next;
				sau=truoc->next;
			}
		}
		else{
			truoc=sau;
			sau=truoc->next;
		}
	}
}
int main(){
	int n,k;
	cin >> n >> k;
	node* head = NULL;
	while(n--){
		int x ; cin >> x;
		insert_last(head,x);
	}
	delete_all(head,k);
	node *tmp=head;
	if(tmp==NULL){
		cout << "EMPTY" << endl;
		return 0;
	}
	while(tmp != NULL){
		cout << tmp->data << " ";
		tmp=tmp->next;
	}
}
