#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    unordered_set <int> st;
    int x = 0;
    for(int i = 0; i<n;i++)
    {
        cin>>x;
        st.insert(x);
    }
    int sum = 0;
    for(int i = 1;i<=n;i++)
    {
        if(st.find(i) == st.end())
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}