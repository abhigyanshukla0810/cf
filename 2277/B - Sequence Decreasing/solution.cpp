#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long mn = LLONG_MAX;
        for(int i = 0; i<n; i++){
            long long x;
            cin>>x;
            mn = min(mn, x);
        }
        if(mn<n)
        {
            cout<<n<<'
';
        }
        else
        {
            cout<<0<<'
';
        }
    }
    return 0;
}