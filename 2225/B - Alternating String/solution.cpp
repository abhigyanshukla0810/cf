#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
  string s;
  cin>>s;
  int sum = 0;
  for(int i = 0; i<s.size()-1; i++){
    if(s[i]==s[i+1]){
      sum++;
    }
  }
  if(sum<=2){
    cout<<"YES
";
  }
  else{
    cout<<"NO
";
  }
}
  return 0;
}