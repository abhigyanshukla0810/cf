#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int sum = 1;
    int n = s.size();
    char c = s[0];
    int k = 1;
    for(int i = 1;i<n;i++)
    {
        if(s[i] != c)
        {
            sum++;
            c = s[i];
            k = 1;
        }
        else
        {
            k++;
            if(k>5)
            {
                k = 1;
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}