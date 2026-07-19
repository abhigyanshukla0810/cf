#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a == b){
            cout<<"YES"<<"
";
        }
        else{
            cout<<"NO"<<"
";
        }
    }
    return 0;
}