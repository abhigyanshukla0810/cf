#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k==1) cout<<n<<'
';
        else{
            long long sum = 0;
            while(n >0){
            if(n%k == 0){ 
                n/=k;
                sum += 1;
            }
            else{
                sum += n%k;
                n -= n%k;
            }}
            cout<<sum<<'
';
        }
    }
    return 0;
}