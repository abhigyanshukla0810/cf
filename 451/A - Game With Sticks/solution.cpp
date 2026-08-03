#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    if(min(a,b) % 2 == 1) cout<<"Akshat";
    else cout<<"Malvika";
    return 0;
}