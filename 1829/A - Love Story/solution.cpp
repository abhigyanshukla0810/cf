#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n;
  cin>>n;
  string s = "codeforces";
  while(n--){
    string s1;
    cin>>s1;
    int count = 0;
    for(int i = 0; i<10;i++){
      if(s1[i] != s[i]){
        count++;
      }
    }
    cout<<count<<'
';
  }
  return 0;
}