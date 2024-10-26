#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* Input()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<int>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node*left;
        Node*right;
        if(val==-1) left = NULL;
        else left= new Node(l);

        if(val==-1) right = NULL;
        else right = new Node(r);

        f->left=left;
        f->right=right;

        if(f->left)q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
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
        if(f->left!=NULL) q.push(f->Left);
        if(f->right != NULL) q.push(f->Right);

    }
}

int main (){
    Node* root=Input();
    int x;
    cin>>x;
//    cout<< Searching(root,x);
    return 0;
}

