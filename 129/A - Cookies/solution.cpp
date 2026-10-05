#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n;
    cin>>n;
    int x = 0,odd = 0, even = 0, sum = 0;
    for(int i = 0; i<n;i++){
        cin>>x;
        if(x&1) odd++;
        else even++;
        sum+=x;
    }
    if(sum&1) cout<<odd;
    else cout<<even;
 
 
    return 0;
}