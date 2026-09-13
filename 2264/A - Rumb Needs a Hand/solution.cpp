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
        vector <int> v(n);
        vector <int> un;
        for(int i = 0; i<n;i++){
            cin>>v[i];
            if(i+1 != v[i]) un.emplace_back(v[i]);
        }
        bool ordered = true;
        vector <int> x = un;
        sort(un.begin(),un.end());
        reverse(un.begin(),un.end());
        if(un != x) ordered = false;
        if(ordered) cout<<"YES
";
        else cout<<"NO
";
 
    }
    return 0;
}