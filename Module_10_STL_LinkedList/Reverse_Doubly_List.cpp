// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *perv;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->perv = NULL;
//     }
// };
// void Print(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";

//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// void reverse(Node *head, Node *tail)
// {
//     Node *i = head;
//     Node *j = tail;
//     while (i != j && i->next != j)
//     {
//         swap(i->val, j->val);
//         i=i->next;
//         j=j->perv;
//     }
//     swap(i->val, j->val);
// }
// int main()
// {
//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);
//     Node *c = new Node(40);
//     Node *tail = c;
//     head->next = a;
//     a->next = b;
//     a->perv = head;
//     b->next = c;
//     b->perv = a;
//     c->perv = b;
//     reverse(head, tail);
//     Print(head);

//     return 0;
// }

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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
    tmp = newNode;
    // tmp->next = NULL;
}
void Insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    // tmp->next = NULL;
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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    
    Print(head);

    Node *tail = NULL;
    int n;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        insert_tail(head, tail, n);
    }
        Print(head);
    return 0;
}