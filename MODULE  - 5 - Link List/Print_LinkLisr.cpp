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
int main()
{
    // Assign value

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // Link with Node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->val<<endl;
    // cout<<head->next->val<<endl;
    // cout<<head->next->next->val<<endl;
    // cout<<head->next->next->next->val<<endl;
    // cout<<head->next->next->next->next->val;

    // while (head!=NULL)
    // {
    //     cout<<head->val<<endl;
    //     head=head->next;
    // }
    // Head Stand on Null...Thats why lost head memory address and we are not print again because we haven't head address.

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    // If we want print it again that need assign head address in tmp again
    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}