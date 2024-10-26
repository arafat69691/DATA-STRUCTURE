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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

bool isPalindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    if(i==NULL){
        return true;
    }
    while (i !=j)
    {
        if(i->val!=j->val){
           return false;
        }
        else if (i->next==j){
           break;
        }
        i=i->next;
        j=j->prev;
    }
    return true;
    
}
void Print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
}
int main()
{
    Node* head=NULL;
   Node * tail =NULL;
    int val;
    while(1){
        cin>>val;
        if(val==-1){
            break;
        }
       else{
         insert_tail(head,tail,val);
       }
    }
   if(isPalindrome(head,tail)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}