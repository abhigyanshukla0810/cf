#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x;
  cin>>x;
  string s1,s2;
  vector <pair<string,string>> mpp(x);
  for(int i = 0; i<x;i++){
    cin>>mpp[i].first>>mpp[i].second;
  }
  for(auto it : mpp){
    if(it.second == "rat") cout<<it.first<<'
';
  }
  for(auto it : mpp){
    if(it.second == "woman" || it.second == "child") cout<<it.first<<'
';
  }
  for(auto it : mpp){
    if(it.second == "man") cout<<it.first<<'
';
  }
  for(auto it : mpp){
    if(it.second == "captain") cout<<it.first<<'
';
  }
  return 0;
}