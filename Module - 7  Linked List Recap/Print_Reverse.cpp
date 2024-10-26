#include<bits/stdc++.h>
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
void Recursion(Node* h){
    if(h==NULL)return;
    cout<<h->val<<" ";
    Recursion(h->next);
}
void Reverse(Node* h){
    if(h==NULL)return;
    Reverse(h->next);
    cout<<h->val<<" ";
}
int main (){
     Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);

    head->next= a;
    a->next=b;
    b->next=c;
    c->next=d;
    Recursion(head);
    cout<<endl;
    Reverse(head);
    return 0;
}