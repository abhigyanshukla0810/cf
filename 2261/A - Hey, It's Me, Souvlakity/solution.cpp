#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        int f = -1, l = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;
                if (f == -1) f = i;
                l = i;
            }
        }
        if (cnt == 1) cout << 0 << '
';
        else if (cnt == 2) cout << 1 << '
';
        else cout<<l - f<<'
';
    }
    return 0;
}