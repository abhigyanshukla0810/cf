#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int k = 0;
    vector <string> v(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    for(auto x : v){
        if(x == "X++" || x == "++X"){
            k +=1;
        }
        else{
            k -=1;
        }
    }
    cout<<k;
    return 0;
}