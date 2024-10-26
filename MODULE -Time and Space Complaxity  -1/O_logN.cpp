#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n=4543;
    // for(int i = 1; i<=n ; i= i*2){   //Time complexity ->   O(logN) -> log2(10000)
    //     cout<<i<<" ";
    // }
    while(n>0){
       int digit=n%10;   //Time complexity  -> O(logN)   ->log10(1000)
        n=n/10;
        cout<<digit;
    }
    return 0;
}