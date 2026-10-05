#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
 
    if((s1=="rock" && s2=="scissors" && s3=="scissors")||(s1=="scissors" && s2=="paper" && s3=="paper") || (s1=="paper" && s2=="rock" && s3=="rock")){
        cout<<"F";
    }
    else if((s2=="rock"&&s1=="scissors"&&s3=="scissors")||(s2=="scissors"&&s1=="paper"&&s3=="paper")||(s2=="paper"&&s1=="rock"&&s3=="rock")){
        cout<<"M";
    }
    else if((s3=="rock"&&s1=="scissors"&&s2=="scissors")||(s3=="scissors"&&s1=="paper"&&s2=="paper")|| (s3=="paper"&&s1=="rock"&&s2=="rock")){
        cout<<"S";
    }
    else cout<<"?";
 
    return 0;
}