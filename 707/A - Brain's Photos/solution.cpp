#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  vector <string> v(a*b);
  for(int i = 0; i<a*b;i++){
    cin>>v[i];
    if(v[i] == "M" ||v[i] == "C" ||v[i] == "Y"){
      cout<<"#Color";
      return 0;
    }
  }
  cout<<"#Black&White";
  return 0;
}