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
   Node *temp = head;

   int count = 0;

   while (temp != NULL)
   {
      count++;
      temp = temp->next;
   }

   temp = head; 

   if (count % 2 == 1)
   {
      int mid = count / 2;
      for (int i = 0; i < mid; i++)
      {
         temp = temp->next;
      }
      cout << temp->val << endl;
   }
   else
   {
      int mid1 = count / 2 - 1;
      int mid2 = count / 2;
      for (int i = 0; i < mid1; i++)
      {
         temp = temp->next;
      }
      cout << temp->val << " " << temp->next->val << endl;
   }
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