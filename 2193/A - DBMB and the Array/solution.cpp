#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,s,x;
    cin>>n>>s>>x;
    int sum = 0;
    for(int i = 0; i<n;i++){
      int p;
      cin>>p;
      sum+=p;
    }
    if(s - sum < 0) cout<<"NO
";
    else if(s - sum == 0) cout<<"YES
";
    else{
      if((s - sum) % x == 0) cout<<"YES
";
      else cout<<"NO
";
    }
  }
  return 0;
}