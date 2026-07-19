#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector <int> v;
        int x = 0;
        for(int i = 0; i<k;i++){
            cin>>x;
            v.emplace_back(x);
        }
        int sum = 0;
        bool yes = false;
        for (int x : v){
            if (x>=3) yes = true;
            if (x>=2) sum++;
        }
        if (yes || sum>=2) cout<<"YES
";
        else cout<<"NO
";
    }
    return 0;
}