#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
      int a,b,c,d= 0;
      cin>>a>>b>>c;
      int x = ((a>b) ? a : b);
      int sum = a+b,n = 1;
      if(a+b>c){
        cout<<1<<'
';
        continue;
      }
      while(!(sum>c)){
        d = sum;
        sum +=x;
        x = d;
        n++;
      }
      cout<<n<<'
';
    }
    return 0;
}