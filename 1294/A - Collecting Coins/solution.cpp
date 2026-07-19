#include <iostream>
using namespace std;
 
int main(){
    int n;
 
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int e = max(a,max(b,c));
        int x = 3*e-a-b-c;
        int y = d - x;
        if(y<0){cout<<"NO"<<endl;}
        else{if(y%3==0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}}}
    return 0;
}