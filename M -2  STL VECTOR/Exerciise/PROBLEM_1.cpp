// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n ;
//     cin>> n;
//     vector<int>v(n);
//     for(int i= 0; i<n ; i++){
//      v[i]=i+1;
//     }
//     for(int i = 0 ; i<n ; i++){
//         cout<<v[i]<<" ";
//     }    
//     return 0;
// }

// problem2
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     vector<int>v(5,7);
//     for(int c:v){
//         cout<<c<<" ";
//     }
//     return 0;
// }
// problem 3
#include<bits/stdc++.h>
using namespace std;
int main (){
    int ar[5]=  {10, 20, 30, 40, 50};
    vector<int>v (ar,ar+5);
    for(int i= 0; i<5 ; i++ ){
        cout<<v[i]<<" ";
    }
    return 0;
}

