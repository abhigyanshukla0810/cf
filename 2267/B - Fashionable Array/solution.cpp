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
        map <int,int, greater<int>> mpp;
        int mx = 0;
        int x = 0;
        for(int i = 0; i<n;i++){
            cin>>x;
            mpp[x]++;
            mx = max(mx,mpp[x]);
        }
        for(int i = 0; i<mx;i++){
            for(auto &[x,y] : mpp) {
                if(y>0){
                    cout<<x<<' ';
                    y--;
                }
            }
        }
        cout<<'
';
    }
    return 0;
}