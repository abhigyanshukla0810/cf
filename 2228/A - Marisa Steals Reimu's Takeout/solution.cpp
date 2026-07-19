#include <bits/stdc++.h>
using namespace std;
#define loop(a,b) for(int i = a; i<b;i++)
 
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    while(a--){
    int s0=0,s1=0,s2=0;
    int n;
    cin>>n;
    vector <int> v(n);
    loop(0,n){
        cin>>v[i];
    }
    loop(0,n){
        if(v[i]==0) s0++;
        else if(v[i]==1) s1++;
        else s2++;
    }
 
    int k = (s1>s2) ? s2:s1;
 
    cout << s0 + k + (s1-k)/3 + (s2-k)/3 << '
';}
    return 0;
}