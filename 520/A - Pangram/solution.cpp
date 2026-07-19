#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count = 0;
  for(int i = 0; i<s.size();i++){
    if(s[i]>91){
      s[i]-=32;
    }
  }
  set<char> result(s.begin(), s.end());
  
  if(result.size()>25){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;
}