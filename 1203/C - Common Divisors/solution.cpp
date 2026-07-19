#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll hcf(vector <ll> &v){
    ll x = 0;
    for(int i = 0; i<v.size();i++){
        x = gcd(x,v[i]);
    }
    return x;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <ll> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    ll x = hcf(v);
    int count = 0;
    for (ll i = 1; i * i <= x; i++) {
    if (x%i==0) {
        count += 2;          
        if (i*i==x)    
            count--;
    }
}
    cout<<count;
    return 0;
}