#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s1,s2;
  cin>>s1;
  if(s1[0]>91){
  s1[0] -=32;}
  cout<<s1;
  return 0;
}