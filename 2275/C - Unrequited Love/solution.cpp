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
        vector <int> v(n);
        for(int i = 0; i<n;i++) cin>>v[i];
        vector<long long> sum(n-4);
        for(int i = 0; i<n-4;i++) sum[i] = v[i] + v[i+2] - v[i+4];
        unordered_map<long long,long long>mpp;
        long long ans=0;
        for(int i = 0;i<n-4;i++)
        {
            ans += mpp[sum[i]];
            if(i>=2 && sum[i-2] == sum[i]) ans--;
            if(i>=4 && sum[i-4] == sum[i]) ans--;
            mpp[sum[i]]++;
        }
        cout<<ans<<'
';
    }
    return 0;
}