#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    while(s.find("WUB") != string::npos){
    s.replace(s.find("WUB"), 3, " ");
    }
    cout<<s;
    return 0;
}