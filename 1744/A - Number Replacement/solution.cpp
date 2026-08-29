#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        string s;
        for(int i = 0; i<n;i++) cin>>v[i];
        cin>>s;
        vector<char> mpp(51, 0);
        bool ok = true;
        for (int i = 0; i<n;i++){
            int x = v[i];
            char c = s[i];
            if(mpp[x] == 0) mpp[x] = c;
            else if(mpp[x] != c){
                ok = false;
                break;
            }
        }
        if(ok == true) cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}