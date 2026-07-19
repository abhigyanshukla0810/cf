#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int digits = 0,real = n,sum = 0;
    while(real>0){
      real/=10;
      digits++;
    }
    vector <int> v;
    for(int i = 0; i<digits;i++){
      if((n%10)*pow(10,i) == 0) {
        n/=10;
        continue;
      }
      v.emplace_back((n%10)*pow(10,i));
      n/=10;
      sum++;
    }
    cout<<sum<<'
';
    for(auto it : v){
      cout<< it<<' ';
    }
    cout<<'
';
  }
  return 0;
}