#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d %d", &a,&b);
        printf("%d
", ((24-a)*60)-b);
    }
    return 0;
}