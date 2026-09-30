#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    if(x==3 || x==5)  cout<<1;
    else if(x==1 || x== 4)cout<<2;
    else if(x==2) cout<<3;
 
    return 0;
}