#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v={10,20,30,56,44};
    vector<int> v1={40,33,55};
    // vector<int>v2={33,67};

    
    // v=x;  // Assign
    // v.pop_back();  // -> Remove element on end 
    // v.pop_back();
    // v.push_back(30);   // -> Add element on end

    // v.insert(v.begin()+1,100);   // Element add use insert


    // v.insert(v.begin()+1,v1.begin(),v1.end());  // -> Insert a another vector
    
    // v.erase(v.begin()+1);  // Single Element erase korte
    v.erase(v.begin()+1,v.begin()+3);

    for(int c:v){
        cout<<c<<" ";
    }
    cout<<endl<<v.size();
    return 0;
}
