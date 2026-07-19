#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v(25);
  int x = 0;
  for(int i = 0;i<5;i++){
    for(int j = 0; j<5;j++){
      cin>>v[i,j];
      if(v[i,j]==1){
        cout<< abs(2-i) + abs(2-j);
        return 0;
      }
    }
  }
 
  return 0;
}