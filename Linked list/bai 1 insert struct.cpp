#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct sinhvien{
	string ma,ten;
	double gpa;
	friend istream& operator >> (istream& in, sinhvien &x){
		getline(in,x.ma);
		getline(in,x.ten);
		in>>x.gpa;
		return in;
	}
	friend ostream& operator << (ostream& out,sinhvien x){
		out<< x.ma <<" "<<x.ten <<" "<<fixed <<setprecision(2) <<x.gpa <<endl;
		return out;
	}
};
struct node{
	sinhvien data;
	node* next;
};
node* makenode(sinhvien x){
	node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
void insert_first(node* &head,sinhvien x){
	node* tmp=makenode(x);// tao ra 1 not moi
	if(head==NULL){
		head=tmp;
		return;
	}
	tmp->next=head;
	head=tmp;
}
void insert_last(node* &head,sinhvien x){
	node *newnode=makenode(x);
	if(head==NULL){
		head=newnode;
		return;
	}
	node *tmp=head;
	while(tmp->next != NULL){
		tmp=tmp->next;
	}
	tmp->next=newnode;
}
int cnt(node* &head){
	node *tmp=head;
	int res=0;
	while(tmp != NULL){
		tmp=tmp->next;
		++res;
	}
	return res;
}
void insert_mid(node* &head ,int k, sinhvien x){
	if(k==1){ 
		insert_first(head,x);
		return;
	}
	else if(k>cnt(head)){
		insert_last(head,x);
		return;
	}
	node *newnode=makenode(x);
	node *tmp=head;
	for(int i=1 ; i<=k-2; i++){// chay den node k-1
		tmp=tmp->next;
	}
	newnode->next=tmp->next;
	tmp->next=newnode;
}
int main(){
	int t; cin >> t;
	node* head=NULL;
	while(t--){
		int tt;
		cin >> tt;
		if(tt==1){
			cin.ignore();
			sinhvien x;
			cin>> x;
			insert_first(head,x);
		}
		else if(tt==2){
			cin.ignore();
			sinhvien x;
			cin>>x;
			insert_last(head,x);
		}
		else{
			int k;cin >> k;
			cin.ignore();
			sinhvien x;
			cin >> x;
			insert_mid(head,k,x);
		}
	}
	//cout << cnt(head) << endl;
	node* tmp=head;
	while(tmp !=NULL){
		cout << tmp->data;
		tmp=tmp->next;
	}
}
