#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void Print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
    cout << endl;
}
void prev(Node *tail)
{

    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void Delete_Pos(Node* head,int pos){
    Node* tmp=head;
      for(int i = 1; i<=pos-1;i++){
        tmp=tmp->next;
      } 
      Node* DeleteNode=tmp->next;
      tmp->next=tmp->next->next;
      tmp->next->prev=tmp;
      
      delete DeleteNode;
}
void delete_Tail(Node* &head,Node* &tail){
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_Head(Node* &head,Node* &tail){
    Node* deleteNode=head;
    head=head->next;
    if(head==NULL){
        tail=NULL;
        return;
    }
    delete deleteNode;
    head->prev=NULL;
    

}
int main()
{
    
    Node* head=new Node(10);
    Node* tail=head;
    // Node *a = new Node(20);    // 1
    // Node *b = new Node(30);    // 2
    // Node *c = new Node(40);    // 3
    // Node *d = new Node(50);    // 4

    // head->next = a;

    // a->next = b;
    // a->prev = head;

    // b->next = c;
    // b->prev = a;

    // c->next = d;
    // c->prev = b;

    // d->prev = c;

    // Node *tail = d;

    int pos;
    cin>>pos;
    if(pos>=size(head)){
        cout<<"INVALID"<<endl;
    }   
    else if(pos==0){
        delete_Head(head,tail);
    }
    else if(pos==size(head)-1){
        delete_Tail(head,tail);
    }
    else{
        Delete_Pos(head,pos);
    }
   
    Print(head);
    prev(tail);

    
    return 0;
}  