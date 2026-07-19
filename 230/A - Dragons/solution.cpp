#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int s,n;
    cin>>s>>n;
 
    vector<pair<int, int>>dragons(n);
 
    for (int i = 0; i<n;i++) {
        cin>>dragons[i].first>>dragons[i].second;
    }
    sort(dragons.begin(), dragons.end());
    for (int i=0;i<n;i++) {
        int xi = dragons[i].first;
        int yi = dragons[i].second;
 
        if (xi>= s) {
            cout<<"NO
";
            return 0;
        }
        s+=yi;
    }
    cout << "YES
";
    return 0;
}