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
    vector <int> v(n);
    for(int i = 0; i<n;i++){
      cin>>v[i];
    }
    for(int i = 0; i<n-1;i++){
      for(int j = i+1;j<n;j++){
        if(v[i]<v[j]){
          v[j] = v[i];
          continue;
        }
      }
    }
     int sum = 0;
        for (int x : v) {
            sum += x;
        }
    cout<<sum<<'
';
  }
  return 0;
}