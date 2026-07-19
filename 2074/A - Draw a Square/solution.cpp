#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){
        int l, r, d, u;
        cin>>l>>r>>d>>u;
 
        if(l==r && r==u && u==d){
            cout<<"YES
";
        } 
        else{
            cout<<"NO
";
        }
    }
    return 0;
}