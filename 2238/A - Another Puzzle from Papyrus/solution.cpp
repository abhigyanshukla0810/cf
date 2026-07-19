#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    vector <int> v1(n);
    vector <int> v2(n);
    for(int i = 0; i<n;i++){
      cin>>v1[i];
    }
    for(int i = 0; i<n;i++){
      cin>>v2[i];
    }
    int sum = 0;
    for(int i = 0; i<n;i++){
      if(v1[i]<v2[i]){
      sum +=x;
      break;
      }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    bool ans = true;
    for(int i = 0; i<n;i++){
      if(v1[i]<v2[i]){
        cout<<-1<<'
';
        ans = false;
        break;
      }
      else{
        sum += v1[i] - v2[i];
      }
    }
    if(ans) cout<<sum<<'
';
  }
  return 0;
}