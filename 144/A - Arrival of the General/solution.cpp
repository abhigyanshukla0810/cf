#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x;
    cin>>x;
    int small = x, s=0;
    int big = x, b=0;
    for(int i = 1; i<n;i++){
        cin>>x;
        if(small>=x) small = x, s = i;
        if(big < x) big = x, b = i;
    }
    if(b>s){
        cout<<b+n - (s+2); 
    }
    else{
        cout<< b+n - (s+1);
    }
    return 0;
}