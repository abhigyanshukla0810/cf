#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        string a;
        cin>>a;
        cin>>m;
        string b, c;
        cin>>b>>c;
        string x, y;
        for (int i = 0; i<m;i++) {
            if (c[i] == 'V') x += b[i];
            else y += b[i];
        }
        reverse(x.begin(), x.end());
        cout<<x<<a<<y<<"
";
    }
    return 0;
}