#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int sum = a+b+c;
        if(n % sum == 0){
            cout<<n/sum * 3<<'
';
        }
        else{
            if(n%sum <=a) cout<< n/sum*3 + 1<<'
';
            else if(n%sum <= a+b) cout<< n/sum*3 + 2<<'
';
            else cout<< n/sum*3 + 3<<'
';
        }
    }
    return 0;
}