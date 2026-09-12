#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(d>0 && (c == 0 || (b>0 && (a == 0 || (e == 0 && f>0))))) cout<<"Ron";
    else{
        float x = b/a;
        float y = (d/c)*x;
        float z = (f/e)*y;
        if(1<z)cout<<"Ron";
        else cout<<"Hermione";
    }
    return 0;
}