
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *pre;
    Node *next;

    Node(string val)
    {
        this->val = val;
        this->pre = NULL;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }


     // 2nd part
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;
}
void visit_list(Node *head, Node *&tail, string loc)
{
    Node *tmp = head;
    bool flag = false;
    while (tmp != NULL)
    {
        if (tmp->val == loc)
        {
            flag = true;
            tail = tmp;
            break;
        }
        tmp = tmp->next;
    }

    if (flag)
        cout << loc << endl;
    else
        cout << "Not Available" << endl;

    
}
void pre_list(Node *& tail)
{
    if (tail->pre != NULL)
    {

        cout << tail->pre->val << endl;

        tail = tail->pre;
    }

    else
        cout << "Not Available" << endl;
}
void next_list(Node *& tail)
{
    if (tail->next != NULL)
    {
        cout << tail->next->val << endl;
        tail = tail->next;
    }
    else
        cout << "Not Available" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        string val;
        cin >> val;
        if (val == "end")
            break;
        else
            insert_at_tail(head, tail, val);
    }

    int t;
    cin >> t;
    while (t--)
    {
        string step;
        cin >> step;
        if (step == "visit")
        {
            string loc;
            cin >> loc;
            visit_list(head, tail, loc);
        }
        else if (step == "prev")
        {
            pre_list(tail);
        }
        else if (step == "next")
        {
            next_list(tail);
        }
    }

    return 0;
} 