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
        int x = 0, y = 0;
        unordered_map <int,int> mpp;
        for(int i = 0; i<n;i++){
            cin>>x;
            mpp[x]++;
            if(mpp[x] == 3) y = x;
        }
        if(y == 0) cout<<-1<<'
';
        else cout<<y<<'
';
 
    }
    return 0;
}