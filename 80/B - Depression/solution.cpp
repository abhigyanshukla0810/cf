#include <stdio.h>
#include <math.h>
 
int main()
{
    int x = 0, y =0;
    scanf("%d:%d",&x,&y);
    x = x%12;
    float h = x * 30 + y*0.5;
    float m = y * 6;
    printf("%.15f %.15f",h,m);
 
    return 0;
}