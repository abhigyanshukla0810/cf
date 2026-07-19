#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin>>n>>a>>b;
 
        long long x= n / 3;
        long long y =n % 3;
 
        long long ans;
        ans = (3 * a <= b) ? n * a : x * b + ((y * a <= b) ? y * a : b);
        cout<<ans<<'
';
    }
    return 0;
}