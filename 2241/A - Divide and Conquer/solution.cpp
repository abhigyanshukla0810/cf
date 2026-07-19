#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int x,y;
    cin>>x>>y;
    if(x%y == 0) cout<<"YES
";
    else cout<<"NO
";
  }
  return 0;
}