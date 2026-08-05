#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n = 0, p = 0, x = 0, sum = 0, i =0;
        cin>>n>>p;
        string s;
        bool full = true;
        while(n--){
            cin>>s;
            x = s.size();
            if(full &&  sum+x <= p){
                sum +=x;
                i++;
            }
            else{
                full = false;
            }
        }
        cout<<i<<'
';
    }
    return 0;
}