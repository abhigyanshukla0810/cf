#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int a,b;
    cin>>a>>b;
    int c = abs(a-b);
    if(a>b){
    cout<<b<<" "<<c/2;
    }
    else{
        cout<<a<<" "<<c/2;
    }
return 0;
}