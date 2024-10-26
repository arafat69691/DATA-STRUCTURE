#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node*perv;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->perv=NULL;
    }
};
void Print(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
     
        tmp=tmp->next;
    }
    cout<<endl;
  
}
void Prev(Node *c){
    Node *tmp =c;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->perv;
    }
}
int main (){
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);

    head->next=a;
    a->next=b;
    a->perv=head;
    b->next=c;
    b->perv=a;
    c->perv=b;
    Print(head);
    cout<<endl;
    Prev(c);

    return 0;
}