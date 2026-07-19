#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b,c;
    cin>>a>>b>>c;
    vector<int> v1(26, 0), v2(26, 0);
    for(char &x : a) v1[x - 'A']++;
    for(char &x : b) v1[x - 'A']++;
    for(char &x : c) v2[x - 'A']++;
    if(v1 == v2) cout << "YES";
    else cout << "NO";
    return 0;
}