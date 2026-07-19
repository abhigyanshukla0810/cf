#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = 0, largest = 0, slargest = 0, nlargest = 1;
        vector <int> v;
        for(int i = 0; i<n;i++){
            cin>>x;
            if(x==largest) nlargest++;
            if(x > largest){
                slargest = largest;
                largest = x;
                nlargest = 1;
            }
            else if(x< largest && x>slargest){
                slargest = x;
            }
            v.emplace_back(x);
        }
        if(slargest == 0 || nlargest > 1) slargest = largest;
        for(int &x : v){
            if(x == largest) cout<<x - slargest <<' ';
            else cout<<x - largest << ' ';
        }
        cout<<'
';
    }
    return 0;
}