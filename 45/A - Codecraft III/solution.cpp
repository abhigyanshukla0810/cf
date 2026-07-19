#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string a[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
  string s;
  cin>>s;
  int n;
  cin>>n;
  if(n%12 == 0){
    cout<<s;
    return 0;
  }
  for(int i = 0; i<12;i++){
    if(a[i]==s){
      cout<<a[(i+n)%12];
    }
  }
  return 0;
}