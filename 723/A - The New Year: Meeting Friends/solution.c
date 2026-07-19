#include <stdio.h>
 
int max(int a, int b, int c){
    int max = ((a > b) ? a : b);
    max = ((max > c) ? max : c);
    return max;
}
int min(int a, int b, int c){
    int min = ((a>b) ? b : a);
    min = ((min > c) ? c  : min);
    return min;
}
 
 
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d", max(a,b,c) - min(a,b,c));
    return 0;
}