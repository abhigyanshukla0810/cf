#include <stdio.h>
 
int main()
{
    long long a;
    printf("");
    scanf("%lld",&a);
    
    int b = a%2;
    long long c = 0;
    c = a/2;
    long long d = 0;
    d = -((a+1)/2);
    if(b ==0){
        printf("%lld",c);
    }
    else{
        printf("%lld",d);
    }
 
    return 0;
}