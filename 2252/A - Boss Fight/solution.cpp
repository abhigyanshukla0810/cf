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
        int x = 0, sum = 0;
        unordered_map <int,int>mpp;
        for(int i = 0; i<n;i++){
            cin>>x;
            sum +=x;
            mpp[x]++;
        }
        int max = 0, v = 0;
        for(auto[x,f] : mpp){
            if(max < f){
                max = f;
                v = x;
            }
        }
        int rem = n - max;
        if(rem+1 >= max){
            cout<<sum<<'
';
        }
        else{
            int sum1 = sum - max*v;
            int ans = sum1 + (rem+2)*v;
            cout<<ans<<'
';
        }
 
    }
    return 0;
}