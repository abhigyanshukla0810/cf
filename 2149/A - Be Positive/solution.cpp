#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mone = 0, zero = 0, x = 0;
        while(n--){
            cin>>x;
            if(x == 0) zero++;
            else if(x== -1) mone++;
        }
        if(mone & 1) cout<< zero + 2<<'
';
        else cout<<zero<<'
';
    }
    return 0;
}