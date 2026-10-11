#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int> mpp;
        int x = 0;
        for(int i = 0; i<n;i++){
            cin>>x;
            mpp[x]++;
        }
        int i = 0;
        bool done = true;
        for(auto [x,y] : mpp)
        {
            if(x != i)
            {
                cout<<"NO
";
                done = false;
                break;
            }
            else if(y >= 2*k)
            {
                i++;
                continue;
            }
            else if(y == 2*k-1)
            {
                cout<<"YES
";
                done = false;
                break;
            }
            else{
                cout<<"NO
";
                done = false;
                break;
            }
        }
        if(done) cout<<"NO
";
    }
    return 0;
}