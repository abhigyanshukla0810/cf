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
        n -=1;
        int x =0,y = 0;
        cin>>x;
        while(n--) cin>>y;
        cout<<gcd(x,y)<<'
';
    }
    return 0;
}