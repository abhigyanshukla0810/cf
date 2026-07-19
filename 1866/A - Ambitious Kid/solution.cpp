#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int small = INT_MAX, x = 0;
    for(int i = 0; i<n;i++){
        cin>>x;
        if(x==0){
            cout<<0;
            return 0;
        }
        small = ((small > abs(0-x)) ? abs(0-x) : small); 
    }
    cout<<small;
    return 0;
}