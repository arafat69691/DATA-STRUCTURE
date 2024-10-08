#include<bits/stdc++.h>
using namespace std;
int main (){
    // vector<int> v={3,4,2,4,5};
    // Vector Access

    // cout<<v.back();   // -> Access last element
    // cout<<v[0];   // Access 0 index;
    // cout<<v.front();  // Access First value

    // Iteretor 
    
    //   vector<int> v={3,4,2,4,5};
    //   vector<int>:: iterator it;
    //   for(it=v.begin(); it<v.end();it++){
    //     cout<<*it<<" ";
    //   }

      vector<int> v={3,4,2,4,5};
      for(auto it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
      }
    return 0;
}