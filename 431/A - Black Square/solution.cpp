#include <iostream>
using namespace std;
 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int freq[5] = {0};
    for(char x : s){
        freq[x-'0']++;
    } 
    cout<<(freq[1]*a1) + (freq[2]*a2) + (freq[3]*a3) + (freq[4]*a4);
    return 0;
}