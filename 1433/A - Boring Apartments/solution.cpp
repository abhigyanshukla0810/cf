#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int digits = 0, rem = n%10;
        while(n>0){
            n /=10;
            digits++;
        }
        cout<< (rem-1)*10 + ((digits)*(digits+1))/2<<'
';
    }
    return 0;
}