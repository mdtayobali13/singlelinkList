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

int sameList(Node * head , Node *head1 ){
    bool isFound = true;

    Node * temp  = head ;
    Node * temp1 = head1;

    while (temp!=NULL && temp1!= NULL)
    {
       if(temp->val != temp1->val)
       {
         isFound = false ;
         break;
       }
       temp = temp->next;
       temp1 = temp1->next;

    }
  return temp == NULL && temp1 == NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;

    while (true)
    {
       cin>>val;
       if(val ==-1)break;
       insert_tail(head , tail , val);
    }

    int v;
    while (true)
    {
        cin>>v;
        if(v == -1)break;
        insert_tail(head1 , tail1 , v);
    }
    
   
    if(sameList(head , head1 )){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}