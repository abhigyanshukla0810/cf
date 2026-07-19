#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    for(int i = 1; i<=x;i++){
      if(i&1){
        for(int j = 1; j<=x;j++){
          if(j&1) cout<<"##";
          else cout<<"..";
        }
        cout<<'
';
        for(int j = 1; j<=x;j++){
          if(j&1) cout<<"##";
          else cout<<"..";
        }
        cout<<'
';
      }
      else{
        for(int j = 1; j<=x;j++){
          if(j&1) cout<<"..";
          else cout<<"##";
        }
        cout<<'
';
        for(int j = 1; j<=x;j++){
          if(j&1) cout<<"..";
          else cout<<"##";
        }
        cout<<'
';
 
      }
 
    }
 
 
  }
  return 0;
}