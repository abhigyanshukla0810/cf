#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n,m;
    cin>>n>>m;
    vector <pair<int,int>> v(m);
    for(int i = 0; i<m;i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    long long sum = 0;
    for(int i = 0; i<m;i++){
        if(v[i].second <= n){
            sum += v[i].second * v[i].first;
            n -= v[i].second;
        }
        else if( n <= 0) break;
        else{
            sum += n*v[i].first;
            break;
        }
    }
    cout<<sum<<'
';
 
    return 0;
}