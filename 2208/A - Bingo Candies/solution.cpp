#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> v(n * n);
 
        for(int i = 0; i < n * n; i++) {
            cin >> v[i];
        }
 
        set<int> unique;
 
        for(int i = 0; i < n * n; i++) {
            unique.insert(v[i]);
        }
 
        int mfreq = 0;
 
        vector<int> unique_vec;
 
        for(auto x : unique) {
            unique_vec.push_back(x);
        }
 
        for(int j = 0; j < unique_vec.size(); j++) {
            int color = unique_vec[j];
            int count = 0;
 
            for(int i = 0; i < n * n; i++) {
                if(v[i] == color) {
                    count++;
                }
            }
 
            if(count > mfreq) {
                mfreq = count;
            }
        }
 
        if(mfreq >= n * n - (n - 1)) {
            cout << "NO
";
        } else {
            cout << "YES
";
        }
    }
 
    return 0;
}