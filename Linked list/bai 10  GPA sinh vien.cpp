#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string id , name;
    double gpa;
    void nhap()
    {
        cin >> id ; cin.ignore();
        getline(cin , name);
        cin >> gpa;
    }
    void in()
    {
        cout << id << " " << name << " " << fixed << setprecision(2) << gpa << endl;
    }
};
struct node
{
    SinhVien data;
    node *next;
};
node* makenode(SinhVien x){
	node* newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}
double gpa_max = 0;
void Last(node* &a, SinhVien x)
{
    node* tmp = makenode(x);
    gpa_max = max(gpa_max , tmp->data.gpa);
    if(a == NULL) 
    {
        a = tmp;
    }
    else
    {
        node* p = a;
        while(p->next != NULL)
        {
            p= p->next;
        }
        p->next = tmp;
    }
}
void Print_max(node* a)
{
    while(a != NULL)
    {
        if(a->data.gpa == gpa_max) 
        {
            a->data.in();
        }
        a = a->next;
    }
}
int main()
{
    node* head = NULL;
    int n; cin >> n;
    for(int i = 0 ;i <n ;i++)
    {
        SinhVien x ; x.nhap();
        Last(head , x);
    }
    Print_max(head);
}
