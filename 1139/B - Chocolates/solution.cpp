#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i = 0; i<n;i++) cin>>v[i];
    long long sum = v[n-1], x = 0;
    for(int i = n-1; i>=1;i--){
        if(v[i-1]<v[i]) sum+=v[i-1];
        else{
            x = v[i] - 1;
            if(x < 0){
                v[i-1] = 0;
            }
            else{
                sum += x;
                v[i-1] = v[i] - 1;
            }
        }
    }
    cout<<sum;
    return 0;
}