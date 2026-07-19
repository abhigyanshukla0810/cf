#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max1 = ((a>b) ? a : b);
    int min1 = ((a>b) ? b : a);
    int max2 = ((c>d) ? c : d);
    int min2 = ((c>d) ? d : c);
    if((max1>max2 && min1<min2) || (max1<max2 && min1>min2) || (min2>max1) || (min1>max2)) cout<<"NO
";
    else cout<<"YES
";
 
  }
  return 0;
}