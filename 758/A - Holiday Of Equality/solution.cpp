#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <long long> v(n);
    cin>>v[0];
    long long j = v[0];
    for(int i = 1; i<n;i++){
        cin>>v[i];
        j = ((j>v[i]) ? j : v[i]);
    }
    long long sum = 0;
    for(auto x : v){
        sum += abs(x - j);
    }
    cout<< sum;
    return 0;
}