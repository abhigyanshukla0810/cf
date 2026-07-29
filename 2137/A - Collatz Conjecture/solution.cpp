#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>k>>x;
        // if(x&1){
        //  x = 3*x + 1;
        //  k--;
        // } 
        x <<= k;
        cout<<x<<'
';
    }
    return 0;
}