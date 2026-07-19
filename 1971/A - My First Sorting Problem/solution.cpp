#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<b<<" "<<a<<"
";
    }
    else cout<<a<<" "<<b<<"
";
}
    return 0;
}