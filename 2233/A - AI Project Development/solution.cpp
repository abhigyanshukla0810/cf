#include <bits/stdc++.h>
using namespace std;
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        float n,x,y,z;
        cin>>n>>x>>y>>z;
        float a = ceil(n / (x+y));
        
        float c = ceil((n-(x*z))/(x + 10*y)) + z;
        cout<<min(a,c)<<'
';
    }
    return 0;
}