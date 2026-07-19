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
        bool yes = true;
        unordered_set <int> sst;
        int x = 0;
        for(int i = 0; i<n;i++){
            cin>>x;
            sst.insert(x);
        }
        if(sst.size() == n) cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}