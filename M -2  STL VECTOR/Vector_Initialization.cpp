#include<bits/stdc++.h>
using namespace std;
int main (){
    // vector<int > v;  // ->1. Vector Initialization 
    // vector<int>v(5);  // -> 2. vector size declaration
    // vector<int> v(5,4);   // -> 3. Vector declaration with size and elements
    // vector<int>v1(5,100);  //  -> 4. vector copying another vector name v1
    // vector<int>v(v1);
    // int a[5]={1,2,3,4,5};    
    // vector<int>v(a,a+5);    // -> 5. Vector copying all elements of 'a' array.
    vector<int>v={34,2,353}; 
    
    for(int i = 0; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     vector<int > v;//Deckare vextor
//     vector <int> v1(5); //Declare vector with size;
//     vector<int>v2(5,4); //Declare vector with size and elements
//     vector<int>v3(v2); // Copying v2 into v3
//     int ar[5];
//     vector<int>v4(ar,ar+5);  // Array er elements vector e copy

//     return 0;
// }