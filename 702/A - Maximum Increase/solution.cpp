#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int> v(n);
    int x = 1, y= 1;
    for(int i = 0; i<n;i++){
        cin>>v[i];
        if(i>=1){
            if(v[i]>v[i-1]){
                x++;
                y = ((y>x) ? y : x);
            }
            else x = 1;
        }
    }
    cout<<y;
    return 0;
}