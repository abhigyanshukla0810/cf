#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x= 0;
        cin>>x;
        int sum = 2*x;
 
        for(int i = 1; i<n;i++){
            cin>>x;
            sum = 2*x - sum;
        }
        int ans = -sum/2;
        if(n&1) cout<<-ans<<'
';
        else cout<<ans<<'
';
    }
    return 0;
} 