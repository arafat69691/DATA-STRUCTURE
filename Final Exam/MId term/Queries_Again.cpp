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

void Insert_Tail(Node *&tail,Node* &head, int val)
{
    Node *newNode = new Node(val);
    Node*tmp=tail;
    if (tmp==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
    tmp = newNode;
}
void insert_Position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void Insert_Head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node* tmp=head;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = tmp;
    tmp->prev = newNode;
    tmp = newNode;
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
void previ(Node *tail)
{

    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node* tail=NULL;
   
    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
       if (pos == 0)
        { 
            // cout<<"insert head"<<endl;
           Insert_Head(head, tail, val);
             cout << "L -> ";
            Print(head);
            cout << endl
                 << "R -> ";
            previ(tail);
            cout << endl;
        }
      
        else if (pos == size(head))
        {
            Insert_Tail(head, tail, val);
            cout << "L -> ";
            Print(head);
            cout << endl
                 << "R -> ";
            previ(tail);
            cout << endl;
        }
         else if (pos >= size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
           insert_Position(head, pos, val);
                Print(head);
            cout << endl
                 << "R -> ";
            previ(tail);
            cout << endl;
        }
    }

    return 0;
}