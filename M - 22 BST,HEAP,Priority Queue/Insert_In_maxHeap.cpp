#include<bits/stdc++.h>
using namespace std;
int main (){
    
    vector <int> v= {50,40,45,30,35,20,25,18,17,10,15,13};
    int x; 
    cin>> x;
    v.push_back(x);
    int Current_Index = v.size() - 1;
    
    while(Current_Index != 0)
    {
        
        int Parent_Index = (Current_Index - 1)/2;
        if(v[Parent_Index]<v[Current_Index]) swap (v[Parent_Index],v[Current_Index]);  // Min heap e Parent boro and Current choto hobe 
        
        else break; // Parent Index boro hole .
        
        Current_Index = Parent_Index; 

    }
    for(int val : v) cout<<val <<" ";




    return 0;
}