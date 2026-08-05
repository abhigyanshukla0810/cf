#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n;
        cin>>x>>y;
        long long rate = min(x,y);
        cout<<(n+rate-1)/rate<<'
';
    }
    return 0;
}