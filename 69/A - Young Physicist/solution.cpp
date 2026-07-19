#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    vector <int> v(3*n);
    for(int i=0; i<3*n;i++){
        cin>>v[i];
        if(i%3==0){
            sumx+=v[i];
        }
        else if(i%3==1){
            sumy+=v[i];
        }
        else{
            sumz+=v[i];
        }
    }
    if(sumx==0 && sumy==0 && sumz==0 ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}