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
void Delete_Node(Node* head,int pos){
    Node* tmp=head;
    for(int i = 1;i<=pos-1; i++){
        tmp=tmp->next;

    }
    Node* DeleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete DeleteNode;
}
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
int main (){
      Node *head = new Node(10); // 0
    Node *a = new Node(20);    // 1
    Node *b = new Node(30);    // 2
    Node *c = new Node(40);    // 3
    Node *d = new Node(50);    // 4
      head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
     
     Print_Linked(head);
     cout<<endl;
    int pos;
    cin>>pos;
    if(pos<= size(head)){
        cout<<"Invalid";
    }
    else{

    Delete_Node(head,pos);
    Print_Linked(head);
    }
    return 0;
}