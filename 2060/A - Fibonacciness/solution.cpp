#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int ans = 0;
        int ar[]={
            a1 + a2,
            a4 - a2,  
            a5 - a4   
        };
        for(int a3 : ar){
            int sum = 0;
            if (a3 == a1 + a2)sum++;
            if (a4 == a2 + a3)sum++;
            if (a5 == a3 + a4)sum++;
            ans = max(ans,sum);
        }
        cout<<ans<<'
';
    }
    return 0;
}