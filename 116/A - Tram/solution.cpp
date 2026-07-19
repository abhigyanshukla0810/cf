#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  vector <int> v(2*n);
  int x = 0,y=0;
  for(int i =0 ; i<2*n;i++){
    cin>>v[i];
  }
  x = v[0] + v[1];
  y= x;
  for(int i = 2; i<2*n ; i+=2){
      x = x - v[i] + v[i+1];
      if(x>y){
          y=x;
      }
    }
  cout<<y;
  return 0;
}