#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node* * prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        next->prev=NULL;

    }
};
int main (){
    list<int>myList;
    int val;
   while(true){
    cin>>val;
        if(val==-1){
            break;
        }
        else{
            myList.push_back(val);
        }
   }
    myList.sort();
    myList.unique();
    for(int c:myList){
        cout<<c<<" ";
    }
    return 0;
}