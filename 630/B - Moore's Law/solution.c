#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    long long t;
    scanf("%d %lld", &n,&t);
    long double ans= n* powl(1.000000011L, t);
    printf("%.25Lf
", ans);
    
    return 0;
}