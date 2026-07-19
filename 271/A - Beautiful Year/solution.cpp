#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  for(int i = n+1; i<=9876;i++){
    int a = i%10;
    int b = (i/10)%10;
    int c = (i/100)%10;
    int d = (i/1000);
    if(a != b && a != c && a != d && b != c && b != d && c != d){
      cout<<i;
      return 0;
    }
  }
 
  return 0;
}