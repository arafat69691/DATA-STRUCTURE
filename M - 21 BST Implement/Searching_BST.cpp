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
        this->right=NULL;
    }
};
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
bool Search_BST(Node* root , int x)
{
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val) {
        bool l = Search_BST(root->left,x);
        if(l == true) return true;
        else return false;
        // jehetur l true or false holeo return korteci  tai if else check korar proyojon nei.... direct subtree return kore dilei hoi
        //return Search_BST(root->left,x);
    }
    else
    {
        return Search_BST(root->right,x);
    }
}
int main (){
    Node* root = Input_Tree();
    // Level_Order(root);
    if(Search_BST(root,70)) cout<<"Yes Found"<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}