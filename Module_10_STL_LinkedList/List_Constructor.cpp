#include<bits/stdc++.h>
using namespace std;

int main (){
    // list<int>myList;  // A list with 0 element

    // list<int>myList(5);  // A list with N elements

    // list<int>myList(4,5); // A list with 4 size and elelment is 5

    // list<int>myList1(myList);  // myList copying in myList1

    int ar[5]={1,2,3,4,5};
    list<int>myList(ar,ar+5);  // copying array value in list


    // for(auto it=myList1.begin(); it!=myList1.end(); it++){
    //     cout<<*it;
    // }

    for(int val :myList){
        cout<<val<<endl;
    }

    // cout<<myList.size();
    return 0;
}