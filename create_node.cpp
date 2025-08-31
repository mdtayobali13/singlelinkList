#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node*& head,int pos, int val) {
    Node* newNode = new Node(val);

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_tail(Node * &head , Node *&tail , int val)
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

void insert_head(Node *&head , int val)
{
    Node * newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

void delete_node(Node * head , int pos)
{
     Node * temp = head;
     for (int i = 0; i < pos-1; i++)
     {
       temp = temp->next;
     }

     Node * deleteNode = temp->next;
     temp->next = temp->next->next;
     delete deleteNode;
     
}

int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_link_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    print_link_list(head);

    int val, pos;
    cin >> pos >> val;

    if (pos > size(head)) {
        cout << "Position Invalid" << endl;
    }
    else if(pos == 0){
        insert_head(head , val);
    }else if(pos == size(head)){
        insert_tail(head ,tail, val);
    }else if(pos > size(head))
    {
        delete_node(head , pos);
    }
     else {
        insert(head,pos , val);
    }

    print_link_list(head);
    return 0;
}
