#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  getline(cin, s);
  if(s == "{}"){
    cout<<0;
    return 0;
  }
  set <char> result;
  for(int i =1; i<s.size();i+=3){
    result.insert(s[i]);
  }
  cout<<result.size();
  return 0;
}