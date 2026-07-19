#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]<=95 && s[i]>=65){
            u++;
        }
        else{
            l++;
        }
    }
    if(l>=u){
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        cout<<s;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), :: toupper);
        cout<<s;
    }
    return 0;
}