#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool palund = true;
        for(int i = 0; i<n/2;i++){
            if(s[i] == s[n-i-1]) continue;
            else if(abs(s[i] - s[n-i-1]) == 2) continue;
            else palund = false;
        }
        if(palund) cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}