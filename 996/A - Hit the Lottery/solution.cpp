#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bills = 0;
   vector<int> v = {100, 20, 10, 5};
    for(int i = 0; i<4;i++){
        bills += n/v[i];
        n = n % v[i]; 
    }
    cout<<bills + n;
    return 0;
}