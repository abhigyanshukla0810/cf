#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string> ans;
        int i = n-1;
        while(i >= 0) {
            if (s[i] == 'a' || s[i] == 'e') {
                ans.push_back(s.substr(i - 1, 2));
                i -= 2;
            }
            else {
                ans.push_back(s.substr(i - 2, 3));
                i -= 3;
            }
        }
        reverse(ans.begin(), ans.end());
        for(int j = 0; j<ans.size();j++) {
            cout<<ans[j];
            if(j != ans.size() - 1) cout<<'.';
        }
        cout<<'
';
    }
    return 0;
}