#include <bits/stdc++.h>
using namespace std;
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int> v(n);
    int sum = 0, revsum = 0;
    for(int i = 0; i<n;i++){
        cin>>v[i];
        sum += v[i];
    }
    int i = n-1;
    sort(v.begin(), v.end());
    while(revsum <= sum){
        sum -= v[i];
        revsum +=v[i];
        i--;
    }
    cout<<n-1-i;
    return 0;
}