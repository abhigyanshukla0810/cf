#include <bits/stdc++.h>
using namespace std;
 
void fxn()
{
    vector <int> v(4);
    for(int i = 0; i<4;i++) cin>>v[i];
    sort(v.begin(),v.end());
    if(v[2] < v[0] + v[1] || v[3] < v[1] + v[2])
    {
        cout<<"TRIANGLE";
    }
    else if(v[2] == v[0] + v[1] || v[3] == v[1] + v[2] ){
        cout<<"SEGMENT";
    }
    else{
        cout<<"IMPOSSIBLE";
    }
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fxn();
    return 0;
}