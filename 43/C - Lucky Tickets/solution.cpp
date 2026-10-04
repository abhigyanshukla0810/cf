#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int> v;
    int x = 0;
    for(int i = 0; i<n;i++)
    {
        cin>>x;
        v.emplace_back(x%3);
    }
    int one = 0, two = 0, zero = 0;
    for(int x : v)
    {
        if(x==1)one++;
        else if(x==2)two++;
        else zero++;
    }
    int sum = min(one,two) + zero/2;
    cout<<sum;
 
 
    return 0;
}