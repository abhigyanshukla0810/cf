#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i = 0; i<n;i++){
      cin>>v[i];
    }
    long long first = v[0];
    for(int i = 1; i<n;i++){
    if(v[i] < first) first+=v[i];
    else first= v[i];
    }
    cout <<first<<'
';
  }
  return 0;
}