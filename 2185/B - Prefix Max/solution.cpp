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
        int max = 0, x = 0;
        for(int i = 0; i<n;i++){
            cin>>x;
            max = ((max > x) ? max : x);
        }
        cout<<max*n<<'
';
    }
    return 0;
}