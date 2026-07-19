#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    long long a;
    cin>>a;
    if(a%2 == 0){
      cout<<(a/2) - 1<<"
";
    }
    else{
      cout<<a/2<<"
";
    }
  }
  return 0;
}