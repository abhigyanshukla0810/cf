#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    string s;
    cin>>s;
    string target = "hello";
    int j = 0;
    for(char c :s){
        if(j<5 && c==target[j]) j++;
    }
    cout<<(j == 5 ?"YES":"NO")<<'
';
    return 0;
}