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
        int line = 0, maxline = 0;
        for(char &x : s){
            if(x=='#'){
                line++;
                maxline = ((maxline>line) ? maxline : line);
            }
            else line = 0;
        }
        cout<<(maxline + 1)/2<<'
';
    }
    return 0;
}