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
void Insert_Tail(Node *&head, int v)  // Complexity O(N)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

// complexity this O(1)

// void insert_Tail(Node* &head, Node * &tail,int val){
//     Node * newNode= new Node(val);
//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     tail=newNode;
// }
void Print(Node *head)
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
    while (true)
    {

        cout << "op -1 : Insert a Tail" << endl;
        cout << "OP - 2 : Print " << endl;
        cout << "OP - 3 : Termenate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            Insert_Tail(head, v);
        }
        else if (op == 2)
        {
            Print(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}

// // #include <bits/stdc++.h>
// // using namespace std;
// // class Node
// // {
// // public:
// //     int val;
// //     Node *next;
// //     Node(int val)
// //     {
// //         this->val = val;
// //         this->next = NULL;
// //     }
// // };

// // void insert_Tail(Node *&head, int v)
// // {
// //     Node *newnode = new Node(v);

// //     if (head == NULL)
// //     {
// //         head = newnode;
// //         return;
// //     }

// //     Node *tmp = head;
// //     while (tmp->next != NULL)
// //     {
// //         tmp = tmp->next;
// //     }
// //     // finish loop tmp in tail and then we linked with new node
// //     tmp->next = newnode;
// // }
// // void Print_Link_List(Node *head)
// // {
// //     cout << "Your LINK LIST IS : ";
// //     Node *tmp = head;
// //     while (tmp != NULL)
// //     {
// //         cout << tmp->val << " ";
// //         tmp = tmp->next;
// //     }
// //     cout << endl;
// // }

// // int main()
// // {
// //     Node *head = NULL;
// //     while (true)
// //     {

// //         cout << "OP -1 : Insert Tail" << endl;
// //         cout << "OP - 2: Print Link List" << endl;
// //         cout << "OP - 3 : Termenate " << endl;

// //         int op;
// //         cin >> op;
// //         if (op == 1)
// //         {
// //             cout<<"Enter a value :";
// //             int v;
// //             cin >> v;
// //             insert_Tail(head, v);
// //         }
// //         // Print Link list
// //         else if (op == 2)
// //         {
// //             Print_Link_List(head);
// //         }
// //         else if (op == 3)
// //         {
// //             break;
// //         }
// //     }
// //     return 0;
// // }
