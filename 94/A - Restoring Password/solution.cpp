#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
   cin>>s;
   unordered_map <string,int> mpp;
   string num;
   for(int i=0; i<10;i++){
    cin>>num;
    mpp[num] = i;
   }
   string s1;
   for(int i = 0; i<80;i+=10){
    string s1 = s.substr(i,10);
    cout<<mpp[s1];
   }
  return 0;
}