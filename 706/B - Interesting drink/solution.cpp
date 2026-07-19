#include <bits/stdc++.h>
using namespace std;
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int a;
    cin>>a;
    for(int i = 0; i<a;i++){
        int x;
        cin>>x;
        int l=0,h= n-1,ans = -1;
        while(l<=h){
        int mid = l + (h-l)/2;
        if(v[mid] <= x){
            ans = mid;
            l = mid + 1;
        }
        else{
            h = mid-1;
        }
        }
        cout<<ans+1<<'
';
    }
    return 0;
}