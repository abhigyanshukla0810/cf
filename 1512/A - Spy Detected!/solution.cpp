#include <bits/stdc++.h>
using namespace std;
#define loop(a,b) for(int i = a; i<b;i++)
 
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    while(a--){
    int n;
    cin>>n;
    vector <pair<int,int>> v;
    loop(0,n){
        int x;
        cin>>x;
        v.emplace_back(x,i);
    }
 
    sort(v.begin(),v.end());
    if(v[0].first != v[1].first){
        cout<<v[0].second+1<<'
';
    }
    else{
        cout<<v[n-1].second+1<<'
';
    }}
    return 0;
}