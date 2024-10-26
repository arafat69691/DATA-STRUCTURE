#include<bits/stdc++.h>
using namespace std;
int main (){
    map<string,int>mp;
    mp.insert({"Yeasin",79});
    mp.insert ({"Arafat",55});
    mp["Arman"]= 44;

    // Print Method 1
    // for(auto it = mp.begin() ; it!=mp.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    //Print Method 2
    cout<<mp["Arafat"];



    // Check value have or not
    if(mp.count("Yeasin")) cout<<"YES";
    else cout<<"NO";

    return 0;
}