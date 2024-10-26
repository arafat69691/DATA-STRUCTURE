#include<bits/stdc++.h>
using namespace std;
int main (){
    list<int>myList={10,20,30,40,50};
    // cout<<myList.size();  // Pirnt list size
    // cout<<myList.max_size(); // Print max size of list
    // myList.clear();  // Clear elements .. But do not delete in memory
    // cout<<myList.size()<<endl;

    myList.resize(3); // make size into 3 And take 3 elements
    myList.resize(5,3);  // take previous size and elements and add extra 2 elements  ..5 er por comma diye value dile oita add korbe..
    for(int val : myList){
        cout<<val<<" ";
    }
    return 0;
}