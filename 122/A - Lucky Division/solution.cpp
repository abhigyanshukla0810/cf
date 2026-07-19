#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector <int> v;
  v = {4,7,44,47,74,77,444,447,477,744,747,777};
  bool found = false;
  for(auto x : v){
    if(n%x==0){
      cout<<"YES";
      found = true;
      break;
    }
  }
  if(!found){
    cout<<"NO";
  }
  return 0;
}