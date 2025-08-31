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

int size(Node * head)
{
    int cout = 0;
    Node * temp = head;

    while (temp != NULL)
    {
       cout++;
       temp = temp->next;
    }
    return cout;
}

int main()
{
    Node * head = NULL ;Node* tail = NULL;
    Node * head1 = NULL ; Node* tail1 = NULL;
    int x;

    while (true)
    {
       cin>>x;
       if(x == -1)break;;
       insert_tail(head , tail , x);
    }
    int y;

    while (true)
    {
        cin>>y;
        if(y == -1) break;;
        insert_tail(head1 , tail1 , y);
    }
    

    int s1 = size(head);
    int s2 = size(head1);

    if(s1 == s2)
      cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}