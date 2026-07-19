#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int p = a + b + c;
    int q = a*b*c;
    int r = a*(b+c);
    int s = (a+b)*c;
    cout<<max(q, max(p, max(r,s)));
    return 0;
}