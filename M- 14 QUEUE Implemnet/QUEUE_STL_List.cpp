// #include<bits/stdc++.h>
// using namespace std;
// class myQueue{
//     public:
//     list<int>l;
//     void push(int val){
//         l.push_back(val);
//     }
//     void pop(){
//         l.pop_front();
//     }
//     int front(){
//         return l.front();
//     }
//     int size(){
//         return l.size();
//     }
//     bool empty(){
//         return l.empty();
//     }
// };
// int main (){
//     myQueue q;
//     int n;
//     cin>>n;
//     for(int i = 0; i<n ; i++){
//         int x;
//         cin>>x;
//         q.push(x);
//     }
//     while(q.empty()==false){
//         cout<<q.front()<<endl;
//         q.pop();

//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myQueue{
    public:
    queue<int>Q;
    void push(int val){
    Q.push(val);
    }
    void pop(){
        Q.pop();
    }
    int  front(){
        return Q.front();
    }
    int size(){
        return Q.size();
    }
};
int main (){
    myQueue Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    Q.push(60);
    Q.pop();
    Q.pop();
    Q.pop();
    cout<<Q.front()<<endl;
    return 0;
}






















