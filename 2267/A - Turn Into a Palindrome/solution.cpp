#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int sum = 0;
        for(int i = 0; i<(n+1)/2;i++){
            if(s[i] == s[n-i-1]) continue;
            else if(s[i] != s[n-i-1] && (s[i] == c || s[n-i-1] == c)) sum++;
            else sum += 2;
        }
        cout<<sum<<'
';
    }
    return 0;
}