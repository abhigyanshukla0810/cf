#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long> v(n);
        for(auto &x : v)
        {
            cin>>x;
        }
 
        sort(v.begin(), v.end());
 
        if(k < n && v[n-k-1] == v[n-1])
        {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
 
        for (int i = n - k; i < n; i++)
        {
            cout<<v[i]<<' ';
        }
        for (int i = n - k - 1; i >= 0; i--)
        {
            cout<<v[i]<<' ';
        }
        cout<<'
';
    }
    return 0;
}