#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
            vector<int> v(a);
            for(int i = 0; i<a; i++){
                cin>>v[i];
            }
            sort(v.begin(), v.end());
            int k = 0;
            for(int i = 0; i<a-1;i++){
                if(v[i] == v[i+1]){
                    k= 1;
                    break;
                }
            }
            if(k == 1){
                cout<<-1<<"
";
            }
            else{
                for(int i = a-1; i>=0; i--){
                    cout<<v[i]<<" ";
                }
                cout<<"
";
            }
 
        }
    return 0;
}