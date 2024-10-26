#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i = 0 ; i<n ;i++){
        cin>>v[i];
    }
    int cnt=0;
    for(int i = 0 ; i<n ; i++){
        int f=v[i]+1;
        auto it=find(v.begin(),v.end(),f);
        if(*it==v[i]+1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}