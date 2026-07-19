#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    long long x,y;
  cin>>x>>y;
  bool found = false;
  for(int i=2; x*i<y; i++){
    if(x*i<y && y%(x*i) !=0){
      cout<<"Yes
";
      found = true;
      break;
    }
  }
  if(!found){
    cout<<"NO
";
  }
}
  return 0;
}