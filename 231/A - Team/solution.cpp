#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n--){
        vector<int> v(3);
        for(int i = 0; i < 3; i++){
            cin>>v[i];
        }
        if(v[0] + v[1] + v[2] >= 2){
            sum++;
        }
    }
        cout<<sum<<endl;
    return 0;
}