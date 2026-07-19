#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        vector <int> v;
        for(int i = 0; i<n;i++){
            string s;
            cin>>s;
            v.emplace_back(s.find('#'));
        }
        for(int i = 0; i<n;i++){
            cout<<v[n-i-1]+1<<" ";
        }
        cout<<'
';
    }
    return 0;
}