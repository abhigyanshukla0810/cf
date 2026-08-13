#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        vector <int> v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        if(v[0] + v[1] < v[2]){
            cout<<v[1]<<'
';
        }
        else{
            cout<<v[2] - v[0]<<'
';
        }
 
    }
 
  return 0;
}