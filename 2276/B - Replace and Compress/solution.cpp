#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        string s = "";
        cin>>s;
        int n = s.size();
        int x = 0, y = 0;
        for(int i = 1; i<n-1;i++)
        {
            if(s[i-1] == s[i] && s[i] == s[i+1]) x = 1;
            else if(s[i-1] != s[i] && s[i+1] != s[i]) y = 1;
        }
        cout<< 1 + x + y<<'
';
    }
    return 0;
} 