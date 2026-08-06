#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = 0;
        int max = 0;
        while(n--){
            cin>>x;
            max = ((max > x) ? max : x);
        }
        cout<<max<<'
';
    }
    return 0;
}