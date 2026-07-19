#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <pair<int,int>> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int max = v[0].second;
    for(int i = 1;i<n;i++){
        if(max>v[i].second){
            cout<<"Happy Alex";
            return 0;
        }
        max = v[i].second;
    }
    cout<<"Poor Alex";
    return 0;
}