#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int neg = 0;
  int z = 0;
  int n;
  cin>>n;
  if(n==1){
    int x;
    cin>>x;
    cout<<x;
    return 0;
  }
  vector <int> v;
  vector <int> arr;
 
  for(int i = 0; i<n;i++){
    int a;
    cin>>a;
    if(a==0){
      z++;
      continue;
    }
    if(a<0){
      neg++;
      v.emplace_back(-a);
      continue;
    }
    arr.emplace_back(a);
  }
 
  if(z==n){
    cout<<0;
    return 0;
  }
  if(neg==1 && z ==n-1){
    cout<<0;
    return 0;
  }
sort(v.begin(),v.end());
 
  if(neg&1){
    for(int i = 1;i<neg;i++){
      cout<<-v[i]<<' ';
    }
    for(int x : arr){
      cout<<x<<' ';
    }
  }
  else{
    for(int x : v){
      cout<<-x<<' ';
    }
    for(int x : arr){
      cout<<x<<' ';
    }
  }
 
  return 0;
}