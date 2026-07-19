#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a;
  cin>>a;
  while(a--){
    int n;
    cin>>n;
    vector <int> v(n);
    int sum = 0;
    for(int i =0 ; i<n;i++){
      cin>>v[i];
      sum +=v[i];
    }
    if(sum%2 == 0){
      cout<<"YES
";
    }
    else{
      cout<<"NO
";
    }
  }
  return 0;
}