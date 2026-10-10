#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y > x && y - x > 1) cout<<-1<<'
';
        else if(x  == y) cout<<x<<'
';
        else{
            if(x-y&1) cout<<x+1<<'
';
            else cout<<x<<'
'; 
        }
    }
    return 0;
}