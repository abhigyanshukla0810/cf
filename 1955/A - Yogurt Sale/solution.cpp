#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int sum = 0;
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1){
      cout<<a<<'
';
      continue;
    }
    else if(n==2){
      cout<<((2*a > b) ? b : 2*a)<<'
';
      continue;
    }
    else{
      while(n>1){
      sum += (2*a > b) ? b : 2*a;
      n-=2;}
      if(n==1) sum +=a;
      cout<<sum<<'
';
    }
 
  }
  return 0;
}