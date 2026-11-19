#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void fxn()
{
    string s;
    cin>>s;
    char col = 'R';
    int ans = 0;
    for(char x : s)
    {
        if(x == col)
        {
            if(col == 'R') col = 'B';
            else col = 'R';
        }
        else
        {
            ans++;
        }
    }
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        fxn();
        cout<<'
';
    }
    return 0;
}