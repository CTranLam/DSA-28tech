#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int heso,somu;
	node* next;
};
node* makenode(int heso,int somu){
	node* newnode=new node;
	newnode->heso=heso;
	newnode->somu=somu;
	newnode->next=NULL;
	return newnode;
}
void duyet(node * head){
	while(head != NULL){
		cout << head->heso <<"x^"<<head->somu;
		head=head->next;
		if(head != NULL) cout <<" + ";
	}
	cout << endl;
}
void them(node* &head,int heso,int somu){
	node* prev=head;
	node* tmp=head;
	while(tmp != NULL){
		if(tmp->somu==somu){
			tmp->heso+=heso;
			return;
		}
		prev=tmp;
		tmp=tmp->next;
	}
	node *newnode=makenode(heso,somu);
	if(prev==NULL){
		head=newnode;
		return;
	}
	prev->next=newnode;
}
void sapxep(node* &head){
	for(node* i=head ; i!= NULL ; i=i->next){
		node * min=i;
		for(node* j=i->next ; j != NULL ; j=j->next){
			if(min->somu < j->somu){
				min=j;
			}
		}
		swap(min->somu,i->somu);
		swap(min->heso,i->heso);
	}
}
int main(){
	node* head=NULL;
	string s;
	while(cin>>s){
		if(s != "+"){
			int hs=0,sm=0;
			int i=0;
			while(s[i] != 'x'){
				hs=hs*10+(s[i]-'0');
				++i;
			}
			i+=2; // bo qua x^
			while(i<s.size()){
				sm=sm*10+(s[i]-'0');
				++i;
			}
			them(head,hs,sm);
		}
	}
	sapxep(head);
	duyet(head);
}
