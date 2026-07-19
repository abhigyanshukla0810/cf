#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int term = 0;
    vector <int> v(n);
    for(int i = 0;i <n;i++){
        cin>>v[i];
    }
    vector <int> sorted = v;
    sort(sorted.begin(),sorted.end());
    for(int i = 0; i<n;i++){
        if(v[i] != sorted[i]) term++;
        if(term >2){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}