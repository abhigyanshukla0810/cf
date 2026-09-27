#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int n,k;
    cin>>n>>k;
    vector <pair<int,int>> v(n);
    long long sum = 0;
    for(int i = 0; i<n;i++){ 
        cin>>v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end());
    int i = 0;
    while(sum<=k && i<n){
        sum+=v[i++].first;
    }
    if(sum>k){
        if(i-1<0) cout<<0; 
        else {
            cout<<i-1;
            cout<<'
';
            for(int j = 0; j<i-1;j++) cout<<v[j].second<<' ';
        }
    }
    else{
        cout<<i<<'
';
        for(int j = 0; j<i;j++) cout<<v[j].second<<' ';
    }
    
    return 0;
}