#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n = 0;
        long long x = 2;
        cin>>n;
        for(int i = 2; i<50;i++){
            x <<= 1;
            if(n % (x-1) == 0){
                cout<<n/(x-1)<<'
';
                break;
            }
        }
    }
    return 0;
}