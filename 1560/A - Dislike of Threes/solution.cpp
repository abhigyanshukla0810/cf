#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    while(a--){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1; i<=10000;i++){
        if(i%10 == 3 || i%3 == 0){
            continue;
        }
        else{
            sum++;
            if(sum==n){
                cout<<i<<"
";
                break;
            }
        }
    }
    }
    return 0;
}