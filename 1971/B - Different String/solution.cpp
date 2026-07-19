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
    bool no = true;
    for(int i = 0; i<s.size()-1;i++){
      if(s[i] != s[i+1]){
        cout<<"YES
";
        char temp = s[i+1];
        s[i+1] = s[i];
        s[i] = temp;
        no = false;
        cout<<s<<'
';
        break;
      }
    }
    if(no) cout<<"NO
";
  }
  return 0;
}