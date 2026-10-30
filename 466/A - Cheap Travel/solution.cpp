#include <iostream>
#include <vector>
using namespace std;
 
 
 
int main()
{
    int n = 0, m = 0, a = 0, b = 0;
    cin>>n>>m>>a>>b;
    int sum = 0;
    if(m*a > b)
    {
        while(n > m)
        {
            sum += b;
            n -=m;
        }
        if(n*a > b)
        {
            sum +=b;
        }
        else sum += n*a;
    }
    else
    {
        sum = n*a;
    }
    cout<<sum;
 
    return 0;
}