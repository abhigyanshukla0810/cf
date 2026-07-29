#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x&1){
            cout<<0<<'
';
            continue;
        }
        cout<<x/4 + 1<<'
';
    }
    return 0;
}