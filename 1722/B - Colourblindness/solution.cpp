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
        string s1,s2;
        cin>>s1>>s2;
        for(char &x : s1){
            if(x == 'B') x = 'G';
        }
        for(char &x : s2){
            if(x == 'B') x = 'G';
        }
        if(s1==s2) cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}