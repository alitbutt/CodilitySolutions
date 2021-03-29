#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std; 
  
int solution(vector<int> &A) {
    int k = 0;
    for (uint i=0; i<A.size(); i++) {
        k ^= 1 << A[i];
    }

    for (uint i=0; i<A.size(); i++) {
        if ((k >> A[i]) & 1)
            return A[i];
    }
    
    return 0;
}
