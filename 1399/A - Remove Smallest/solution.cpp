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
        vector <int> v;
        int x = 0;
        for(int i = 0; i<n;i++){
            cin>>x;
            v.emplace_back(x);
        }
        sort(v.begin(),v.end());
        bool yes = true;
        for(int i = 0; i<n-1;i++){
            if((v[i+1] - v[i]) > 1){
                cout<<"NO
";
                yes = false;
                break;
            }
        }
        if(yes) cout<<"YES
";
    }
    return 0;
}