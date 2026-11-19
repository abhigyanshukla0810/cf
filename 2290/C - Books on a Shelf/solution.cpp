#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
 
void fxn()
{
    int n;
    cin>>n;
    vector <pair<int,int>> v;
    map<int,int> mpp;
    int x = 0;
    for(int i = 0; i<n;i++)
    {
        cin>>x;
        mpp[x]++;
    }
    vector <int> ans;
    int ANS = 0;
    for(auto &[x,y] : mpp)
    {
        ans.emplace_back(x);
        y--;
        if(y>0) v.emplace_back(x,y);
        ANS++;
    }
    reverse(v.begin(),v.end());
    for(auto &[x,y] : v)
    {
        while(y--)
        {
            ans.emplace_back(x);
        }
        ANS++;
    }
    cout<<ANS<<'
';
    for(int x : ans) cout<<x<<' ';
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        fxn();
        cout<<'
';
    }
    return 0;
}