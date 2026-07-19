#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        int sum = 0;
        vector <int> v(7);
        for(int i = 0; i<7;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i<6;i++){
            v[i] = -1*v[i];
        }
        for(int x : v){
            sum+=x;
        }
        cout<<sum<<"
";
    }
    return 0;
}