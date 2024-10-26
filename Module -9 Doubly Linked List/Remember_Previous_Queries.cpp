#include <bits/stdc++.h>
using namespace std;
void print_left(list<int> myList)
{
    cout << "L -> ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
}
void print_right(list<int> myList)
{
    list<int> tempList(myList);
    tempList.reverse();
    cout << "R -> ";
    for (int val : tempList)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    list<int> myList;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
            print_left(myList);
            print_right(myList);
        }
        else if (x == 1)
        {
            myList.push_back(v);
            print_left(myList);
            print_right(myList);
        }
        else if (x == 2)
        {
            int size = myList.size();
            if (size > v)
            {
                myList.erase(next(myList.begin(), v));
                print_left(myList);
                print_right(myList);
            }
            else
            {
                print_left(myList);
                print_right(myList);
            }
        }
    }

    return 0;
}