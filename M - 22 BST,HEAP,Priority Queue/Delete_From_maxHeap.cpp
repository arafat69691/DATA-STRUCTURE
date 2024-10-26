#include <bits/stdc++.h>
using namespace std;
void Insert_maxHeap(vector<int> &v, int x)
{
    v.push_back(x);

    int Current_Idx = v.size() - 1;

    while (Current_Idx != 0)
    {
        int Parent_idx = (Current_Idx - 1) / 2;
        if (v[Parent_idx] < v[Current_Idx])
            swap(v[Parent_idx], v[Current_Idx]);
        else
            break;
        Current_Idx = Parent_idx;
    }
}
void Print_Heap(vector<int>v)
{
    for(int val : v)
    {
        cout<<val<<" ";
    }
}
void Delete_maxHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int Current = 0;
    while (1)
    {
        int left_child = Current * 2 + 1;
        int right_child = Current * 2 + 2;
        int last_idx = v.size() - 1;

        // Duitai Ache kina
        if (left_child <= last_idx && right_child <= last_idx)
        {
            // Left boro kins
            if (v[left_child] >= v[right_child] && v[left_child] > v[Current])
            {
                swap(v[left_child], v[Current]);
                Current = left_child;
            }
            // Right boro kina
            else if (v[left_child] <= v[right_child] && v[right_child > v[Current]])
            {
                swap(v[right_child], v[Current]);
                Current = right_child;
            }
            else
                break;
        }

        // Left ache kina
        else if (left_child <= last_idx)
        {
            if(v[left_child]>v[Current])
            {
                swap(v[left_child], v[Current]);
                Current = left_child;
            }
            else break;
        }

        // Right Ache kina
        else if (right_child <= last_idx)
        {
             if(v[right_child]> v[Current])
             {
                swap(v[right_child],v[Current]);
                Current = right_child;

             }
             else break;
        }
        else
            break;
    }
}
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Insert_maxHeap(v, x);
    }
    Delete_maxHeap(v);
    Print_Heap(v);
    return 0;
}