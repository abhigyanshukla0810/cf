#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string p;
    for(int i = 0; i<5;i++){
        cin>>p;
        if(s[0] == p[0] || s[1] == p[1]){
            cout<<"YES
";
            return 0;
        }
    }
    cout<<"NO
";
    return 0;
}