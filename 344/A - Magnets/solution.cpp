#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin >>n;
    string a, b;
    cin>>a;
 
    int term= 1;
 
    for (int i = 1; i < n; i++) {
        cin >> b;
        if (b!=a) {
          term++;
        }
        a = b;
    }
    cout<<term << endl;
 
 
  return 0;
}