#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(10);;
    v.push_back(30);
    // v.clear();
    v.resize(2);
    v.resize(4);
    cout<<v.size()<<endl;

    for(int i = 0 ; i<v.size(); i++){
        cout <<v[i]<<" ";
    }
  
  
    return 0;
}