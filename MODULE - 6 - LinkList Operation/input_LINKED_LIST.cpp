#include <bits/stdc++.h>
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
void Insert_LinkedList(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void Printf(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        
     for(int i= 0 ; i<100; i++){
        if(tmp->val==tmp->next->val){
            cout<<"yes";
        }
     }
        
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
        int v;
        int cnt=0;
    Node *head = NULL;
    while (true)
    {
        cin >> v;
        if(v==-1){
            break;
        }
        Insert_LinkedList(head, v);
        cnt++;
    }
        Printf(head);
    return 0;
}