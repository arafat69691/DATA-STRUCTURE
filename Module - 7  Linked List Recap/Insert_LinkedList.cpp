#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void Print_Linked(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
}
int size(Node *head)
{
    int cnt = 0;
    Node* tmp=head;
    while(tmp!=NULL){
        cnt++;  
        tmp = tmp->next;
    }
    return cnt;
}
void Insert_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_Head(Node * &head,int val){
    Node * newNode= new Node(val);
    newNode->next=head;
    head=newNode;
}
void insert_Tail(Node* &head, Node * &tail,int val){
    Node * newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
int main()
{
    Node *head = new Node(10); // 0
    Node *a = new Node(20);    // 1
    Node *b = new Node(30);    // 2
    Node *c = new Node(40);    // 3
    Node *d = new Node(50);    // 4
    Node *tail =d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    int pos,val;
    cin >> pos>>val;
    if(size(head)<pos){
        cout<<"Invalid"<<endl;
    }

    else if(pos==0){
        insert_Head(head,val);
         Print_Linked(head);
    }
    else if(pos==size(head)){
        insert_Tail(head,tail,val);
        Print_Linked(head);
    }

    else{
   Insert_position(head,pos,100);
   Print_Linked(head);
    }
    return 0;
}