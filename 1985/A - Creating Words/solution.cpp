#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    string a,b;
    cin>>a>>b;
    char c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout<<a<<" "<<b<<"
";}
    return 0;
}