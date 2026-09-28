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
        int ans = n;
        int cunt = 0;
        for(int i = 0; i<n;i++){
            cunt++;
            if(s[i] == '1'){
                ans = max(ans, (i+1)*2);
                cunt++;
            }
        }
        ans = max(ans,cunt);
        cunt = 0;
        reverse(s.begin(),s.end());
        for(int i = 0; i<n;i++){
            cunt++;
            if(s[i] == '1'){
                cunt++;
                ans = max(ans, (i+1)*2);
            }
        }
        ans = max(ans,cunt);
        cout<<ans<<'
';
 
    }
    return 0;
}