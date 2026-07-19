#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a,b;
  cin>>a>>b;
  for(int i = 0; i<a;i++){
    if(i&1){
        if((i/2) & 1){
            cout<<'#';
            for(int i = 0; i<b-1;i++){
                cout<<'.';
            }
            cout<<'
';
        }
        else{
        for(int i = 0; i<b-1;i++){
        cout<<'.';
        }
        cout<<"#
";
        }
    }
    else{
        for(int i = 0; i<b;i++){
            cout<<'#';
        }
        cout<<'
';
    }
  }
 
  return 0;
}