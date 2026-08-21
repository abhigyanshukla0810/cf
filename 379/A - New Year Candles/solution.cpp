#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int sum = a;
    while(a >= b){
        int x = a/b;
        a = a%b +x;
        sum +=x;
    }
 
    cout<<sum;
 
    return 0;
}