#include <bits/stdc++.h>
using namespace std;
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    int a = 0;
    int b = 1;
    int c = 0;
    if(n == 0){
        cout<<0<<" "<<0<<" "<<0;
        return 0;
    }
    if(n == 1){
        cout<<1<<" "<<0<<" "<<0;
        return 0;
    }
    for(int i = 2;i<50;i++){
        c = a + b;
        if(c == n){
            cout<<a<<" "<<b<<" "<<0;
            return 0;
        }
        a = b;
        b = c;
    }
    return 0;
}