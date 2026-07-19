#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    int countY = 0;
    bool YES = true;;
    for(char x : s){
      if(x=='Y'){
        countY++;
        if(countY >= 2){
          cout<<"NO
";
          YES = false;
          break;
        }
      }
    }
    if(YES) cout<<"YES
";
  }
  return 0;
}