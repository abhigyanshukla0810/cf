#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void fxn()
{
    vector <int> v(3);
    for(int i = 0; i<3;i++) cin>>v[i];
    sort(v.begin(),v.end());
    if(v[2] - v[1] == 1 && v[2] - v[0] == 2) cout<<"YES";
    else cout<<"NO";
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