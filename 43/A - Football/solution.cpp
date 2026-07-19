#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  unordered_map <string,int> mpp;
  for(int i = 0; i<n;i++){
    string s;
    cin>>s;
    mpp[s]++;
  }
  string ans;
  int max = 0;
 
  for (auto &it : mpp) {
      if (it.second > max) {
          max = it.second;
          ans = it.first;
      }
  }
  cout<<ans<<'
';
 
  return 0;
}