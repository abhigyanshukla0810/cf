#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n>=1LL*k*k && n%2==k%2) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}