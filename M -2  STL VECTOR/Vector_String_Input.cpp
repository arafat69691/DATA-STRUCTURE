#include<bits/stdc++.h>
using namespace std;
int main (){
    // TYPE ONE
    //Take input wothout space

    // int n;
    // cin>>n;
    // vector<string>v(n);
    // for(int i = 0; i<n ; i++){
    //     // string s;
    //     // cin>>s;
    //     // v.push_back(s);
    //     cin>>v[i];
    // }
    // for(string k:v){
    //     cout<<k<<" ";
    // }

    //TYPE TWO
    // INPUT WITH SPACE


    int n ;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i =0; i<n ; i++){
        getline(cin,v[i]);
    }
    for(string c: v){
        cout<<c<<endl;
    }


    return 0;
}