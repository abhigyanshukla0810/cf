#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    vector <int> v;
    int x = 0;
    for(int i = 0; i<3;i++){
        cin>>x;
        v.emplace_back(x);
    }
    sort(v.begin(), v.end());
    cout<<v[1]<<'
';
}
    return 0;
}