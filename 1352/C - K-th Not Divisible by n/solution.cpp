#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    cout<<(b/(a-1)) * a + (((b%(a-1)) != 0) ? (b%(a-1)) : -1) <<'
';
  }
  return 0;
}