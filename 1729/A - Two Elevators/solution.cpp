#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int x = abs(b-c) + (c-1);
        if((a-1) < x){
            cout<<1<<"
";
        }
        else if((a-1) == x){
            cout<<3<<"
";
        }
        else{
            cout<<2<<"
";
        }
    }
    return 0;
}