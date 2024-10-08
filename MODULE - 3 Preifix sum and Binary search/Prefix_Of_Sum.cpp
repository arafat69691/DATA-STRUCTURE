#include<bits/stdc++.h>
using namespace std;
int main (){
   long long  int n,q;
    cin>>n>>q;
    int a[n];
    for(int i =0 ; i<n ; i++){
        cin>>a[i];
    }
    //  Prefix Array make
    long long int pref[n];
    pref[0]=a[0];
    for(int i = 1; i<n ; i++){
        pref[i]=a[i]+pref[i-1];
    }
    while(q--){
       long long int l ,r;
        cin>>l>>r;
        l--; // position theke index convert
        r--;
       long long int sum;
        if(l==0) sum=pref[r]; // prefix er index 0 hole er ager index jaoar dorkar naaai
        else sum=pref[r]-pref[l-1];   // prefix er [r] er sathe [l] er ager index baaad dibo
        cout<<sum<<endl;


    }
    return 0;

}