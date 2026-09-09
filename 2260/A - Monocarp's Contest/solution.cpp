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
        int z = 0, ans = 0;
        for(int i = 0; i<n;i++){
            cin>>v[i];
            if(v[i] == 0 && (i != 0 && i!= n-1)) z++;
        }
        if(v[0] == 1){
            if(z>=1){
                ans++;
                z--;
            }
            else{
                cout<<"-1
";
                continue;
            }
        }
        if(v[n-1] == 1){
            if(z>=1) ans++;
            else{
                cout<<"-1
";
                continue;
            }
        }
        cout<<ans<<'
';
    }
    return 0;
}