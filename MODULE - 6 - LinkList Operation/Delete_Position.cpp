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
void Insert_at_Tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << "INSERTED IN HEAD" << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "INSERT AT TAIL" << endl;
}

void Insert_At_Anyposition(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "INSERT AT POSITION :" << pos << endl;
}
void Insert_at_Head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "Insert at Head " << endl;
}
void delete_position(Node* head,int pos){
    Node* tmp=head;
    for(int i= 1 ; i<pos ; i++){
        tmp=tmp->next;
    }
    Node* DeleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete DeleteNode;
}


void Print_Linked_List(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    cout << "OP - 1 : Insert at tail :" << endl;
    cout << "OP - 2 : Insert at AnyPosition" << endl;
    cout << "OP - 3 : Print Linked List " << endl;
    cout << "OP - 4 : Insert at Head " << endl;
    cout<<"OP - 5 : Delete Node "<<endl;
    cout<<"OP - 6 : Delete Head"<<endl;
    cout << "OP - 7 : TERMENATED" << endl;
    while (true)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            Insert_at_Tail(head, v);
        }
        else if (op == 2)
        {
            int pos, v;
            cout << "ENTER YOUR POSITION :";
            cin >> pos;
            cout << "ENTER YOUR VALUE :";
            cin >> v;
            if (pos == 0)
            {
                Insert_at_Head(head, v);
            }
            else
            {
                Insert_At_Anyposition(head, pos, v);
            }
        }
        else if (op == 3)
        {
            Print_Linked_List(head);
        }
        else if (op == 4)
        {
            int v;
            cin >> v;
            Insert_at_Head(head, v);
        }
        else if(op==5){
            int pos;
            cout<<"Enter your Delete Position :";
            cin>>pos;
            delete_position(head,pos);
        }
       
        else 
        {
            break;
            cout << "PROGRAMM TERMENATED ";
        }
    }
    return 0;
}