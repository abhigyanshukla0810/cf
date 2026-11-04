#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <long long> v(n);
        for(auto &x : v)
        {
            cin>>x;
        }
        int Max=0;
        for(int i=0; i<n;i++)
        {
            int multhis=0;
            for(int x :v)
            {
                if(x % v[i]==0)multhis++;
            }
            Max = max(Max,multhis);
        }
        cout<<n-Max<<'
';
    }
    return 0;
}