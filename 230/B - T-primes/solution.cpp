#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  while(n--){
    ll x;
    cin>>x;
    ll y = sqrt(x);
    int count = 0;
    for(ll i = 1; i*i<=y;i++){
      if(y%i == 0){
        if(i*i == y) count++;
        else count += 2;
      }
    }
    if(count == 2 && y*y == x) cout<<"YES
";
    else cout <<"NO
";
  }
  return 0;
}