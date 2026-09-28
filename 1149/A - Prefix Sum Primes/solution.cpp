#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    vector <int> v(n);
    int ones = 0, twos = 0;
    for(int i =0; i<n;i++){
        cin>>v[i];
        if(v[i] == 1) ones++;
        else twos++;
    }
    if(ones == n){
        for(int i = 0; i<n;i++)cout<<1<<' ';
    }
    else if(twos == n){
        for(int i = 0; i<n;i++) cout<<2<<' ';
    }
    else{
        cout<<2<<' ';
        cout<<1<<' ';
        twos--;
        ones--;
        for(int i = 0; i<twos;i++) cout<<2<<' ';
        for(int i = 0; i<ones;i++)cout<<1<<' ';
    }
    return 0;
}