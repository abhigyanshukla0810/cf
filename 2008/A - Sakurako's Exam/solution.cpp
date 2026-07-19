#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
      int x,y;
      cin>>x>>y;
      if(x&1){
        cout<<"NO
";
        continue;
      }
      if(x!=0) cout<<"YES
";
      else{
        if(y&1) cout<<"NO
";
        else cout<<"YES
";
      }
    }
    return 0;
}