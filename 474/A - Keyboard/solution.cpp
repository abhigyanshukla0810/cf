#include <bits/stdc++.h>
using namespace std;
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    cin>>dir;
    string s;
    cin>>s;
    for(int i = 0; i<s.size();i++){
        if(s1.find(s[i]) < s1.size() && dir == 'R' ){
            cout<<s1[s1.find(s[i]) - 1];
            continue;  
        }
        if(s1.find(s[i]) < s1.size() && dir == 'L' ){
            cout<<s1[s1.find(s[i]) + 1];
            continue;  
        }
    }
    return 0;
}