#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
      int val;
      Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node * &head , Node * &tail , int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void reverse_linkList(Node *n)
{
    if(n == NULL) return;
    reverse_linkList(n->next);
    cout<<n->val<<" ";
}

int main()
{

    Node * head = NULL;
    Node * tail = tail;
    int x;
    
    while (true)
    {
       cin>>x;
       if(x == -1) break;
       insert_tail(head, tail, x);
    }
    
    reverse_linkList(head);
    return 0;
}