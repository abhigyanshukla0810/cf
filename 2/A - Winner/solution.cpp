#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <pair<string,int>> v;
    unordered_map <string, int> mpp;
    string s;
    int x = 0;
    int max = -1;
    string smax;
    for(int i = 0; i<n;i++){
        cin>>s>>x;
        v.emplace_back(s,x);
        mpp[s] += x;
    }
    for(auto it : mpp){
        if(it.second>max) max = it.second;
    }
    unordered_map <string,int> sex;
    for(auto it:v){
        sex[it.first] += it.second;
        if(mpp[it.first] == max &&  sex[it.first] >= max){
            cout<<it.first;
            break;
        }
    }
    return 0;
}