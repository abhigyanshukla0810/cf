#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a;
    cin>>n>>a;
    int sum=0;
    vector <int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    if(v[a-1]==0){
        for(int i = 0; i<n; i++){
            if(v[i]>0){
                sum++;
            }
        }
    }
    else{
        for(int i = 0; i<n; i++){
            if(v[i]>=v[a-1]){
                sum++;
    }
        }}
    cout<<sum;
    return 0;
}