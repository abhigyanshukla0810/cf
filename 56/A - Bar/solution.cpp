#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int n;
    cin>>n;
    int sum = 0;
    set<string> st = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE","GIN", "RUM", "SAKE", "TEQUILA", "VODKA","WHISKEY", "WINE"};
    while(n--){
        cin>>s;
        if(s[0]>='A' && s[0]<='Z'){
            if(st.find(s) != st.end()) sum++;
        }
        else{
            int x = stoi(s);
            if(x<18) sum++;
        }
    }
    cout<<sum;
    return 0;
}