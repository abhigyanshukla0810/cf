#include <bits/stdc++.h>
using namespace std;
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin>>s1>>s2;
    for(int i = 0; i<s1.size();i++){
        cout<<( (s1[i] == s2[i]) ? 0 : 1);
    }
    return 0;
}