#include <bits/stdc++.h>
using namespace std;
class maxHeap
{
public:
    vector<int> node;
    maxHeap()
    {
    }

    void up_heapify(int last_idx)
    {

        while (last_idx > 0 && node[last_idx] > node[(last_idx - 1) / 2])
        {
            swap(node[last_idx], node[(last_idx - 1) / 2]);
            last_idx = (last_idx - 1) / 2;
        }
    }

    void push(int val)
    {
        node.push_back(val);
        up_heapify(node.size() - 1); // Go 11 line
    }


    void down_heapify(int idx){
        

        while(1){
            int largestIndex = idx;
            int l = 2*idx+1;
            int r = 2*idx+2;

            if(l<node.size() && node[largestIndex]<node[l]) largestIndex = l;
            if(r<node.size() && node[largestIndex]<node[r]) largestIndex = r;

            if(idx==largestIndex) break;

            swap(node[idx],node[largestIndex]);
            idx = largestIndex;

        }

    }

    void pop(int idx)
    {
        swap(node[idx],node[node.size()-1]);
        node.pop_back();
        down_heapify(idx);
    }
    void BuildheapfromArray(vector<int> &arr)
    {
        node = arr;
        int lastnonLeafnode = (arr.size()/2)-1;
        for(int i = lastnonLeafnode ; i>=0 ; i--){
            down_heapify(i);
        }
    }
    void Print()
    {
        for (int val : node)
            cout << val << " ";
    }
};
int main()
{
    maxHeap heap;
    heap.push(10);
    heap.push(20);
    heap.push(30);
    heap.push(50);
    heap.push(40);
    // heap.pop(0);
    heap.Print();
    return 0;
}