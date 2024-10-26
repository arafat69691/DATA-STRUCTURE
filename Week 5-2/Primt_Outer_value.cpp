#include<bits/stdc++.h>
using namespace std;
 class Node
{
public:
    int val;
    Node *left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right= NULL;
    }
};
Node* Input_Tree()
{
    int val ;
    cin>>val;
    Node* root;
    if(val==-1) return root=NULL;
    else root = new Node(val);

    queue <Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;

        if(l==-1) left = NULL;
        else left = new Node(l);

        if(r==-1) right = NULL;
        else right = new Node(r);

        f->left= left;
        f->right= right;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
void Level_Order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) Level_Order(f->left);
        if(f->right) Level_Order(f->right);
    }
}
int sum = 0;
void Sum_LeafNode(Node* root)
{
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
        sum += root->val;
        return;
    }
    Sum_LeafNode(root->left);
    Sum_LeafNode(root->right);
}
void Print_right(Node* root)
{
    
    if(root->right)
    {
        cout<<root->right->val;
        Print_right(root->right);

    }
    else if (root->left)
    {
        cout<<root->left->val;
        Print_right(root->left);
    }
}
int main (){
    Node* Root = Input_Tree();
    // Level_Order(Root);
    // Sum_LeafNode(Root);
    // cout<<sum;

    cout<<Root->val;
    Print_right(Root);
    return 0;
}