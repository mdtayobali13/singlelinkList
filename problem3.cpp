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

void insert_list(Node* &head , Node * &tail , int val)
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
};

void print_middle(Node *head)
{
  int mx = INT_MIN;
  Node * temp = head;
  while (temp != NULL)
  {
    mx = max(mx , temp->val);
    temp = temp->next;
  }
  cout<<mx<<endl;
}


int main()
{
    Node * head  = NULL;
    Node * tail  = NULL;

    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)
          break;
        insert_list(head, tail, val);
    }

    print_middle(head);
    
    return 0;
}