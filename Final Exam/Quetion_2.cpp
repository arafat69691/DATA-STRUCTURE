#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string,int>&q,pair<string,int>&w){
    if(q.first<w.first) return true;
    if(q.first>w.first) return false;
    return q.second>w.second;
}
int main (){
    int v;
    cin>>v;
    vector<pair<string,int>>pairing(v);
    for(int i =0 ; i<v ; ++i){
        cin>>pairing[i].first>>pairing[i].second;
    }
    sort(pairing.begin(),pairing.end(),compare);
    for(int i = 0 ; i<v ; i++){
        cout<<pairing[i].first<<" "<<pairing[i].second<<endl;
    }
    return 0;
}