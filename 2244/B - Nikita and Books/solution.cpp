#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long carry =0;
        bool ok =true;
        for(int i = 1; i<=n;i++){
            long long x;
            cin>>x;
            long long current = x+carry;
            if(current<i){
                ok = false;
            }
            else{
                carry = current-i;
            }
        }
        cout<<(ok ? "YES" : "NO")<<'
';
    }
    return 0;
}