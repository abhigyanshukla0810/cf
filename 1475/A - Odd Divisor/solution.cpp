#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){  
        long long a;
        cin>>a;
        if(a & (a-1)){
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