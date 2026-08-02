#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int p = n%2020;
        bool no = true;
        for(int x = 0; x<=500;x++){
            if(x*2020 + p*2021 == n){
                cout<<"YES
";
                no = false;
                break;
            }
        }
        if(no) cout<<"NO
";
    }
    return 0;
}