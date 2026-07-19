#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
 
    vector<int> freq(26);
    int distinct = 0;
    for(char c : s){
        if(freq[c - 'a'] == 0)
            distinct++;
        freq[c - 'a']++;
    }
 
    if(distinct % 2 == 0)
        cout << "CHAT WITH HER!
";
    else
        cout << "IGNORE HIM!
";
 
    return 0;
}