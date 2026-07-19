#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    
    cin>>a>>b>>c;
    int tp = a*c*(c+1)/2;
    if(tp>b){
        cout<<tp-b;
    }
    else{
        cout<<0;
    }
 
    return 0;
}