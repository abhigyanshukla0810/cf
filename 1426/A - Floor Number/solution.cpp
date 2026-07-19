#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  while(n--){
    int a,b;
    cin>>a>>b;
    if(a==1 && b == 1){
        cout<<1<<'
';
        continue;
    }
    if(a<b){
      if(a<=2) cout<<1<<'
';
      else cout<<2<<'
';
    }
    else if((a-2)%b==0){
      cout<<(a-2)/b + 1<<'
';
    }
    else{
      cout<<(a-2)/b + 2<<'
';
    }
 
  }
  return 0;
}