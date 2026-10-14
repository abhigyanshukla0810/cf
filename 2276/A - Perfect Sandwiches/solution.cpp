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
        if(y>=x) cout<<"-1
";
        else
        {
            int sum = 0;
            while(x>y && y != 0)
            {
                x -= 2;
                y--;
                sum++;
            }
            cout<<sum<<'
';
        }
    }
    return 0;
} 