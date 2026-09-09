#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long x = 0, y = 0, k = 0, sum = 0;
        cin>>x>>y>>k;
        while(x<=((y+1)>>1)&& k--){
            sum += y%x;
            y++;
            x++;
        }
        if(k>0) sum += (y-x)*k;
        cout<<sum<<'
';
    }
    return 0;
}