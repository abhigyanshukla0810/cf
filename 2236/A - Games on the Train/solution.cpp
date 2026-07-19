#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        int b = x, s = x;
 
        for(int i = 1; i<n;i++){
            cin>>x;
            if(b<x) b = x;
            if(s>x) s = x;
        }
        cout<< b - s + 1<<'
';
    }
    return 0;
}