#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
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
void Prev(Node *tail){
    Node *tmp =tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
void insert_Position(Node* &head,int pos,int val){
        Node* newNode=new Node(val);

       
        Node* tmp=head;
        for(int i = 1; i<=pos-1; i++){
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
        newNode->next->prev=newNode;
        newNode->prev=tmp;
}
int size(Node* head){
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main (){
    Node* head= new Node(10);//0
    Node* a= new Node(20);//1
    Node* b= new Node(30);//2
    Node* c= new Node(40);//3
    Node* d= new Node(50);//4

    head->next=a;
    
    a->next=b;
    a->prev=head;

    b->next=c;
    b->prev=a;

    c->next=d;
    c->prev=b;

    d->prev=c;

    Node* tail=d;

    int val,pos;
    cin>>val>>pos;
   
    if(size(head)<=pos){
        cout<<"Invalid";
    }
    else{
        insert_Position(head,pos,val);
    Print(head);
    }
   
    // Prev(tail);
    return 0;
}





 // if(pos==0){
        //     head->prev=newNode;
        //     newNode->next=head;
        //     head=newNode;
        //     return;
        // }