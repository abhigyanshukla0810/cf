#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,small = INT_MAX, ind = 0;
        cin>>n;
        vector <int> v(n);
        for(int i = 0; i<n;i++){
            cin>>v[i];
            if(small > v[i]){
                small = v[i];
                ind = i;
            }
        }
        v[ind] += 1;
        long long product = 1;
        for(int x : v){
            product *= x;
        }
        cout<<product<<'
';
    }
    return 0;
}