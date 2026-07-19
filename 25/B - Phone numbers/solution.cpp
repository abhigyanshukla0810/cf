#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  string s;
  cin>>s;
  if(n==3){
    cout<<s;
    return 0;
  }
  if(n&1){
    cout<<s[0]<<s[1];
    cout<<'-'<<s[2]<<s[3]<<s[4];
    for(int i = 5;i<n;i+=2){
      cout<<'-'<<s[i]<<s[i+1];
    }
 
  }
  else{
    cout<<s[0]<<s[1];
    for(int i = 2; i<n;i+=2){
      cout<<'-'<<s[i]<<s[i+1];
    }
  }
 
  return 0;
}