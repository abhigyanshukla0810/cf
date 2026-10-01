#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a;
    cin>>n>>a;
    int angle = (n-2)*180;
    int minimum = INT_MAX;
    int ind = -1;
    int p = 0, x = 0;
    for(p = 0;p<=n-3;p++){
        x = abs((n-p-2)*180 - a*n);
        if (minimum>x){
            minimum = x;
            ind = p;
        }
    }
    cout<<"1 2 "<<ind+3;
    return 0;
}