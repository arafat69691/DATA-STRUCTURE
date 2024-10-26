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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void Searching(Node *head, int x)
{
    Node *tmp = head;
    int flag = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            flag =1;
        }
        tmp = tmp->next;
    }
    if (flag)
    {
        cout <<flag<<endl;
    }
    else
    {
        cout << flag<<endl;
    }
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        int x;
        cin >> x;
        Searching(head, x);
    }
    return 0;
}