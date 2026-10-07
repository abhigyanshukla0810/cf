#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack <int> st;
        vector <int> ans;
        for(int i = 0;i<n;i++)
        {
            if((s[i]) == '1') st.push(i+1);
            else if(s[i] == '2'){
                if(!st.empty()){
                    st.pop();
                    ans.emplace_back(i+1);
                }
            }
        }
        while(!st.empty()){
            ans.emplace_back(st.top());
            st.pop();
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<'
';
        for(int &x : ans) cout<<x<<' ';
        cout<<'
';
    }
    return 0;
}