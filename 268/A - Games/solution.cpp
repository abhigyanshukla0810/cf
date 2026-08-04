#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int, int>> team(n);
    for(int i = 0;i<n;i++){
        cin>>team[i].first>>team[i].second;
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i != j && team[i].first==team[j].second) ans++;
        }
    }
    cout << ans;
    return 0;
}