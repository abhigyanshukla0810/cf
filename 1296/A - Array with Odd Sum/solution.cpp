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
    int odd = 0, even = 0, x = 0;
    for(int i = 0; i<n;i++){
        cin>>x;
        if(x&1) odd++;
        else even++;
    }
    if(even == n) cout<<"NO
";
    else if(odd == n && n%2 == 0) cout<<"NO
";
    else cout<<"YES
";
 
    }
    return 0;
}