#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c = (abs(a-b))/10;
        if((a-b)%10 == 0){
            cout<<c<<endl;
        }
        else{
            cout<<c+1<<endl;
        }
    }
    return 0;
}