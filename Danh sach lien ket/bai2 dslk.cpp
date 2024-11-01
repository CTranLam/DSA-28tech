#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
	int data; // string sinhVien .....
	node *next;
};

void duyet(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int sz(node *head){
	int cnt = 0;
	while(head != NULL){
		++cnt;
		head = head->next;
	}
	return cnt;
}

node* makeNode(int x){
	node *newNode = new node;
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void themdau(node *&head, int x){
	node *newNode = makeNode(x);
	newNode->next = head;
	head = newNode;
}

void themcuoi(node *&head, int x){
	node *newNode = makeNode(x);
	node *tmp = head; // duyet
	if(head == NULL){
		head = newNode; return;
	}
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

//n node : 1 => n + 1

void themgiua(node *&head, int x, int k){
	if(k < 1 || k > sz(head) + 1) return;
	node *newNode = makeNode(x);
	node *tmp = head;
	if(k == 1){
		newNode->next = head; head = newNode;
	}
	for(int i = 1; i <= k - 2; i++){
		tmp = tmp->next;
	}
	//tmp : k - 1
	newNode->next = tmp->next; // tmp : k - 1, tmp->next : k 
	tmp->next = newNode;
}

void xoadau(node *&head){
	if(head == NULL) return;
	node *del = head; // dung de xoa
	head = head->next;
	delete del;
}

void xoacuoi(node *&head){
	if(head == NULL) return;
	node *tmp = head;
	if(tmp->next == NULL){
		head = NULL; delete tmp;
		return;
	}
	while(tmp->next->next != NULL){
		tmp = tmp->next;
	}
	node *del = tmp->next;
	tmp->next = NULL;
	delete del;
}

void xoagiua(node *&head, int k){
	if(k < 1 || k > sz(head)) return;
	node *tmp = head;
	if(k == 1){
		xoadau(head); return;
	}
	for(int i = 1; i <= k - 2; i++){
		tmp = tmp->next;
	}
	// tmp : k - 1
	node *del = tmp->next;
	tmp->next = del->next; // tmp->next->next
	delete del;
}

void deleteAll(node *&head, int x){
	node *tmp = head;
	if(head==NULL) return;
	int cnt=0;
	while( tmp -> next !=NULL){
		++cnt;
		if(tmp->data==x){
			xoagiua(tmp,cnt);
			--cnt;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	node *head = NULL;
	int n, x; cin >> n >> x;
	for(int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		themcuoi(head, tmp);
	}
	deleteAll(head, x);
	duyet(head);
}
