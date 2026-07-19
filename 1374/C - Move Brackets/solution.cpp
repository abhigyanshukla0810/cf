#include <bits/stdc++.h>
using namespace std;
#define loop(a,b) for(int i = a; i<b;i++)
 
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        while(s.find("()") < n ){
            s.erase(s.find("()"),2);
        }
        int bracks = 0;
        for(int i = 0; i<s.size();i++){
            if(s[i] == '('){
                bracks++;
            }
        }
        cout<<bracks<<'
';
    }
    return 0;
}