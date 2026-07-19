#include <bits/stdc++.h>
using namespace std;
#define loop(a,b) for(int i = a; i<b;i++)
 
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int terms = 0, x = terms;
    int a;
    cin>>a;
    loop(0,n-1){
        int b;
        cin>>b;
        if(a <=b ) {terms++;
        x = (x>terms)?x:terms;}
        else terms = 0;
        a = b;
    }
 
    cout<<x+1;
    return 0;
}