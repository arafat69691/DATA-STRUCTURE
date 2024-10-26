#include<bits/stdc++.h>
using namespace std;
class Queue
{
    public:
    list<int>q;
    void Popqueue()
    {
        q.pop_front();

    }
    int FrontQueue()
    {
        return q.front();
    }
    bool Emptyqueue()
    {
        if(q.size() == 0) return true;
        else return false;
    }
    void uniqueQueue()
    {
        q.unique();
    }
    void SortQueue()
    {
        q.sort();
    }
    void Push(int v){
        q.push_back(v);
    }
};
int main (){
    int test;
    cin>>test;
    for(int j= 0 ; j<test ; j++){
        Queue q;
        int n; cin>>n;
        for(int i = 0 ; i<n ; i++){
            int x;
            cin>>x;
            q.Push(x);
        }
        q.SortQueue();
        q.uniqueQueue();
        while(!q.Emptyqueue()){
            cout<<q.FrontQueue()<<" ";
            q.Popqueue();
        }
        cout<<endl;
    }  
    return 0;
}