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
    Node * newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void Print_Reverse(Node* tmp) {
    if (tmp == NULL)
        return;  // Terminate if end of list is reached
    Print_Reverse(tmp->next);  // Print next node
    cout << tmp->val << " ";  // Print this node
}

int main (){
    Node* head=NULL;
    Node* tail=NULL;
    
    int val;
    while(1){
        cin>>val;
        if(val==-1)break;
        else{
            Insert_Tail(head,tail,val);
        }
    }
            // print(head);
    Print_Reverse(head);
    return 0;
}