#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        auto it = s.find('0');
        if(it != string::npos)s.erase(it, 1);
        it = s.find('1');
        if(it != string::npos) s.erase(it, 1);
        cout<<s<<'
';
    }
    return 0;
}