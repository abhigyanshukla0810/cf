#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    cin>>k;
    while(k--){
        int a;
        cin>>a;
        if(a<10){
            cout<<a<<"
";
        }
        else if(a<100){
            int x = a%10;
            int y = (a/10)%10;
            cout<<min(x,y)<<"
";
        }
        else{
            int x = a%10;
            int y = (a/10)%10;
            int z = (a/100)%10;
            cout<<min(z,min(x,y))<<"
";
        }
    }
    return 0;
}