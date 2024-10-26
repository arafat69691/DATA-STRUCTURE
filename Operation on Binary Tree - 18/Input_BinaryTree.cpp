#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
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
        if(f->left!=NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);

    }
}  
Node* Input_Tree()
{
    int val; // 10
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
        Node* left;
        Node* right;

        if(l==-1) left = NULL;
        else left = new Node (l);
        
        if(r==-1) right = NULL;
        else right = new Node(r);

        f->left = left;
        f->right = right;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
int sum = 0;

void counting_leaf(Node* root)
{
    if(root==NULL) return;
    if(root->left == NULL && root->right==NULL) 
    {
         sum +=root->val;
         return;
    }
    counting_leaf(root->left);
    counting_leaf(root->right);



}
int main (){
    Node* Root = Input_Tree();
    // Level_Order(Root);
    counting_leaf(Root);
    cout<<sum; 
    return 0;
}