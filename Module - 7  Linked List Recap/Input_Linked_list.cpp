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
void Insert_Tail(Node* &head,Node* &tail,int val){
    Node* newNode= new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
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
void print_reverse(Node* n){
   if (n==NULL){
    return;
   }
    print_reverse(n->next);
    cout<<n->val<<" ";
}
int main (){
    Node* head=NULL;
    Node* tail= NULL;
    int val;
    while(1){
        cin>>val;
        if(val==-1)break;
        else{
            Insert_Tail(head,tail,val);
        }
    }
            Print_Linked(head);
            cout<<endl;
            print_reverse(head);
    return 0;
}