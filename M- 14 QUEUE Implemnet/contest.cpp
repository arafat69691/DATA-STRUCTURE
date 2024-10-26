#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> Queue;

    Queue.push(10);  // কিউ তে ১০ যোগ করা হলো 
    Queue.push(20);  // কিউ তে ২০ যোগ করা হলো
    Queue.push(30);  // কিউ তে ৩০ যোগ করা হলো

    cout << "Access first element: " << Queue.front() << endl ;  // ১০
    cout << "Access last element: " << Queue.back() << endl ;   // ৩০

    Queue.pop();  // ইলিমেন্ট বাদ দিতে (১০)

    cout << "To access first elements after pop: " << Queue.front() << endl ;  // ২০
    cout << "Size of the Queue" << Queue.size() << endl ;              // ২

    return 0;
}
