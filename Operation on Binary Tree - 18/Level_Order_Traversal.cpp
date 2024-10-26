#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int val;
        Node* Left;
        Node* Right;
        Node(int val){
            this->val=val;
            this->Left=NULL;
            this->Right=NULL;
        }
};
void Level_Order(Node* root){
    queue<Node*>q;  // Making Line
    q.push(root);  // 

    while(!q.empty())
    {    
        // 1. Line e anaa
        Node* f=q.front();
        q.pop();

        // Operation Koraa
        cout<<f->val<<" ";

        // Children push kora 
        if(f->Left!=NULL) q.push(f->Left);
        if(f->Right != NULL) q.push(f->Right);

    }
}  
// lEVEL ORDER TO RIGHT SIDE 
void Level_Order_Right(Node* root)
{
    queue<Node*>q;
    q.push(root);
     while(!q.empty())
     {
        Node* f= q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->Right) q.push(f->Right);
        if(f->Left) q.push(f->Left);

     }
}     
int main (){
    Node* Root = new Node(10);  
    Node* a = new Node(20);  
    Node* b = new Node(30);  
    Node* c = new Node(40);  
    Node* d = new Node(50);  
    Node* e = new Node(60);  
    Node* f = new Node(70);  
    Node* g = new Node(80);  
    Node* h = new Node(90);  
    Node* i= new Node(100);
    Node* j= new Node(45);

    Root->Left=d;
    Root->Right=e;
    d->Left=g;
    d->Right=f;
    g->Left=c;
    g->Right=b;
    e->Right=h;
    h->Left=a;
    h->Right=i;
    i->Right=j;

    // Level_Order(Root);
    Level_Order_Right(Root);
    return 0;
}