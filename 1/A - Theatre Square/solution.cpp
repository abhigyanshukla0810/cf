#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
 
    long long x = (a + c - 1) / c;
    long long y = (b + c - 1) / c;
 
    cout << x * y;
 
    return 0;
}