#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(s.size() == 1) cout<<0;
    else{
    long long y = 0;
    for(char &x : s) y += (x-'0');
    int sum = 1;
    string s1 = to_string(y);
    while(s1.size() != 1){
        y = 0;
        for(char &x : s1) y+= (x-'0');
        s1 = to_string(y);
        sum++;
    }
    cout<<sum;
    }
    return 0;
}