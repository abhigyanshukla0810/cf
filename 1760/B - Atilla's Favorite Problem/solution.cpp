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
        string s;
        cin>>s;
        int largest = 0;
        for(char &x : s){
            largest  = (largest > (x-'a') ? largest : (x-'a'));
        }
        cout<<largest+1<<'
';
    }
    return 0;
}