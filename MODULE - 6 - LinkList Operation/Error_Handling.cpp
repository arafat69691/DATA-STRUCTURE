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
// Insert At Tail

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

// Insert At Anyposition

void Insert_At_Anyposition(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "INVALID POSITION" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "INSERT AT POSITION :" << pos << endl;
}

// Insert at Head

void Insert_at_Head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "Insert at Head " << endl;
}

// Delete at anyposition

void delete_position(Node *head, int pos)
{
    Node *tmp = head;
   
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "INVALID POSITION" << endl;
            return;
        }
    }
    Node *DeleteNode = tmp->next;
    if (tmp->next == NULL)
    {
        cout << "INVALID POSITION" << endl;
        return;
    }
    tmp->next = tmp->next->next;
    delete DeleteNode;
}

// Delete at head

void Delete_Head(Node *&head)
{
    if(head==NULL){
        cout<<"Invalid POsition"<<endl;
        return;
    }
    Node *Delete = head;
    head = head->next;
    delete Delete;
    cout << "Head Deleted " << endl;
}

// Print Linked List
void Print_Linked_List(Node *head)
{
    cout << "Your Linked List is :";
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
    cout << "OP - 1 : Insert at tail :" << endl;      // Error Handl
    cout << "OP - 2 : Insert at AnyPosition" << endl; // Error Handle
    cout << "OP - 3 : Print Linked List " << endl;    // Error Handle
    cout << "OP - 4 : Insert at Head " << endl;       // Error Handle
    cout << "OP - 5 : Delete At position1 " << endl;
    cout << "OP - 6 : Delete Head" << endl;
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
        else if (op == 5)
        {
            int pos;
            cout << "Enter your Delete Position :";
            cin >> pos;
           if(pos==0){
            Delete_Head(head);
           }
           
                
           else{
             delete_position(head, pos);
           }

            
        }
        else if (op == 6)
        {

            Delete_Head(head);
        }
        else
        {
            break;
            cout << "PROGRAMM TERMENATED ";
        }
    }
    return 0;
}