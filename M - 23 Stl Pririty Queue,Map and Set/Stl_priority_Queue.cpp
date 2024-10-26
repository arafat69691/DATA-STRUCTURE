#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq; // For maxHeap
    priority_queue<int,vector<int>,greater<int>> pq; // For minHeap
    
    while (1)
    {
        int option;
    cin >> option;
        if (option == 0)
        {
            int v;
            cin >> v;

            pq.push(v); // 0 (logn)
        }
        else if (option == 1)
        {
            pq.pop(); // O(logn)
        }
        else if (option == 2)
        {
            cout << pq.top() << endl; // 0(1);
        }
        else
            break;
    }
    return 0;
}