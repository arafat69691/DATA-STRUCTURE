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
int Counting_Node(Node* root)
{
    if(root==NULL) return 0;

    int l =Counting_Node(root->Left);
    int r = Counting_Node(root->Right);
    return l+r+1;
}
Node* Input_Tree()
{
    int val;
    cin>>val;
    Node* root;

    if (val==-1) root=NULL;
    else root = new Node(val);

    queue<Node*>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l ,r ;
        cin>>l>>r;
        Node* Left;
        Node* Right;

        if(l==-1) Left = NULL;
        else Left = new Node (l);
        
        if(r==-1) Right = NULL;
        else Right = new Node(r);

        f->Left = Left;
        f->Right = Right;

        if(f->Left) q.push(f->Left);
        if(f->Right) q.push(f->Right);
    }
    return root;
}
int main (){
    Node* Root = Input_Tree();
    
    cout<<Counting_Node(Root);
    return 0;
}