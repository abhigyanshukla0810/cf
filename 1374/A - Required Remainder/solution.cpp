#include <bits/stdc++.h>
using namespace std;
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        if(n%x < y){
            cout<< (n - n%x) - (x-y)<<'
';
        }
        else if(n%x == y){
            cout<<n<<'
';
        }
        else{
            cout<<n-((n%x) -y)<<'
';
        }
    }
    return 0;
}