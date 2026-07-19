#include <bits\stdc++.h>
using namespace std;
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(s[0] == '9') cout<<9;
    else{
        if('9' - s[0] < s[0] - '0'){
            cout<<'9' - s[0];
        }
        else cout<<s[0];
    }
    for(int i = 1;i<s.size();i++){
        if('9' - s[i] < s[i] - '0'){
            cout<<'9' - s[i];
        }
        else cout<<s[i];
    }
    return 0;
}