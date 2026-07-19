#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s=="Timru") cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}