#include <stdio.h>
 
int main()
{
    int a;
    scanf("%d", &a); 
    while(a>0) {
        long long b,c;
        scanf("%lld %lld",&b, &c);
        long long d=b;
        long long i= b/c;         
        long long e= d-i;
        printf("%lld
", e);  
        a--;
    }
    return 0;
}