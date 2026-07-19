#include <stdio.h>
 
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    k = 240-k;
    int i = 1;
 
    while(k>= 5*i && n>0){
        k -= 5*i;
        n -=1;
        i++;
    }
    printf("%d",i-1);
    return 0;
}