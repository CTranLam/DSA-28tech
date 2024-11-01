#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
typedef Node* node;
node makeNode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->next = nullptr;
    tmp->prev = nullptr;
    return tmp;
}
void insertLast(node &head , int x)
{
    node newnode = makeNode(x);
    if(head == nullptr)
    {
        head = newnode;
        return;
    }
    node tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    newnode->prev = tmp;
    tmp->next = newnode;
}
void reverse(node &head)
{
    node last = head;
    node tmp = nullptr;
    while(last != NULL)
    {
        tmp = last->prev;
        last->prev = last->next;
        last->next = tmp;
        last = last->prev;// dich sang no sau
    }
    if(tmp != NULL)
    {
        head = tmp->prev;
    }
}
void Print(node a)
{
    while(a != nullptr)
    {
        cout << a->data << " ";
        a = a->next;
    }
}
int main()
{
    node head = NULL;
    int n ; cin >> n;
    for(int i = 0 ; i < n ;i++)
    {
        int x; cin >> x;
        insertLast(head , x);
    }
    reverse(head);
    Print(head);
}
