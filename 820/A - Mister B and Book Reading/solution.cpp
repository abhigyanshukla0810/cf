#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int total = 0, speed = 0,maxspeed = 0, acc = 0, prev = 0;
    cin>>total>>speed>>maxspeed>>acc>>prev;
    int sum = 1;
    total -= speed;
    while(total>0){
        speed += acc;
        if(speed<=maxspeed){
            total = total - speed + prev;
        }
        else{
            total = total - maxspeed + prev;
        }
        sum++;
    }
    cout<<sum;
    return 0;
}