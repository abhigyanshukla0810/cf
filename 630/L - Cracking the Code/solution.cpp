#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string t;
    t += s[0];
    t += s[2];
    t += s[4];
    t += s[3];
    t += s[1];
    int x = stoi(t);
    long long y = 1;
    for(int i = 1; i<6;i++){
        y = (y*x) % 100000;
    }
    cout<<setw(5)<<setfill('0')<<y;
    return 0;
}