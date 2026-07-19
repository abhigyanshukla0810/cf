#include <bits/stdc++.h>
using namespace std;
 
int hcf(int a, int b = 6) {
    if (a == 0)
        return b;
 
    return hcf(b % a, a);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    b = (b > a) ? b : a;
    int x = 6 - b + 1;
    cout << x/hcf(x) << "/"<< 6/hcf(x);
    return 0;
}