#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int val;
    Node* next;

    Node(int val){

        this->val=val;
        this->next=NULL;

    }

};
int main (){
    Node* a = new Node(10); // Added value
    Node* b = new Node(20);

    a->next = b;

    cout<<a->val<<endl<<b->val<<endl;
    cout<<a->next->val<<endl;
    cout<<(*(*a).next).val;   
    /* 
       1. a ekti pointer tai a k dereference kori
       2. next b er adress rakhe tai b ... tai next nijeo pointer.. so next ke o dereference kori
     */
        
    return 0;
}