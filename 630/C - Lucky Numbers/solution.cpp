#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long x = 2LL  *((1LL << n) - 1);
    cout<<x;
    return 0;
}