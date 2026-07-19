#include <bits/stdc++.h>
using namespace std;
 
long long C(int n, int k) {
    if(k>n)return 0;
    if(k> n-k) k= n - k;
    long long res = 1;
    for (int i = 1; i<=k;i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
      int n;
    cin >> n;
    cout << C(n, 5) + C(n, 6) + C(n, 7);
  return 0;
}