#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a == b || a == c || b == c){
            cout<<"0
";
            continue;
        }
        int dif1 = abs(a-b);
        int dif2 = abs(a-c);
        int dif3 = abs(b-c);
        int ans = min({dif1,dif2,dif3});
        cout<<ans<<"
";
    }
    return 0;
}