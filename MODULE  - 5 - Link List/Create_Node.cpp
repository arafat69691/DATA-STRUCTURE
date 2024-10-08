#include <bits/stdc++.h>
using namespace std;
class Node
{
public: // Create Node
    int val;
    Node *next;
};
int main()
{
    Node a, b;
    a.val = 20; // A and B er value assign;
    b.val = 30;

    a.next = &b; // A er moddhe b group er adress ..
    b.next = NULL;

    cout << a.val << endl;
    cout << a.next->val; // a er moddhe b er pointer... SO a k dereference korle b er value paoa jabe.

    return 0;
}