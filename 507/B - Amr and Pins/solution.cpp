#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
 
    long long dis=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    long double d = sqrt(dis);
    long double d1 = ceil(d/(2*r));
 
    cout<<d1;
 
    return 0;
}