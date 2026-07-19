#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int A = max(0, max(b, c) - a + 1);
        int B = max(0, max(a, c) - b + 1);
        int C = max(0, max(a, b) - c + 1);
        cout << A << " " << B << " " << C << '
';
    }
    return 0;
}