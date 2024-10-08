#include<bits/stdc++.h>
using namespace std;
int main (){
    // Replace (v.begin(),v.end(),vlue,replace_value)

    
    // vector<int> v={3,3,7,3,3,5,6,7,7,8,3};
    // replace(v.begin(),v.begin()+4,3,100);
    // for(int c:v){
    //     cout<<c<<" ";
    // }


    // find(v.begin(),v.end()) 

    vector<int> v={3,3,7,3,3,5,6,7,7,8,3};
    // vector<int>::iterator it;
    // it=find(v.begin(),v.end(),5);
    // cout<<*it;

    // Easy
    auto  it=find(v.begin(),v.end(),10);
    if(it==v.end()) cout<<"NOT FOUND";
    else cout<<"FOUND";
  
    return 0;
}