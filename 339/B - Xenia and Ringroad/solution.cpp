#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int x;
    cin>>x;
    long long time = x-1;
    int y = 0;
    for(int i = 0; i<m-1;i++){
        cin>>y;
        if(x>y){
            time += n - x + y;
            x = y;
        }
        else{
            time += y-x;
            x = y;
        }
    }
    cout<<time;
    return 0;
}