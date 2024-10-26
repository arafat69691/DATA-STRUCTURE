#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

   vector<int> A(N), B(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++) {
       cin >> B[i];
    }

    // Use insert function to concatenate B and A
    B.insert(B.end(), A.begin(), A.end());

    for(int i = 0; i < 2*N; i++) {
      cout << B[i] << " ";
    }

    return 0;
}
