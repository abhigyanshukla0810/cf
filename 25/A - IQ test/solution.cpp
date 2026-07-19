#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  vector <int> v(t);
  for(int i = 0; i<t;i++){
    cin>>v[i];
  }
 
  int odd = 0,even = 0,x=0,y=0;
 
  for(int i = 0; i<t;i++){
    if (odd > 1 && even > 1) break;
    if(v[i]%2 == 0){
      even++;
      x = i;
    }
 
    else{
      odd++;
      y = i;
    }
  }
  if(odd == 1){
    cout<<y+1;
  }
  else{
    cout<<x+1;
  }
  return 0;
}