#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  unordered_map <string,int> mpp;
  for(int i = 0; i<n;i++){
    string s;
    cin>>s;
    mpp[s]++;
    if(mpp[s] == 1) cout<<"OK
";
    else{
      cout<<s<<mpp[s]-1<<'
';
    }
  } 
  return 0;
}