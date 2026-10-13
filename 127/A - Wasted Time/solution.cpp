#include <stdio.h>
#include <math.h>
 
int main() {
    int n, k;
    scanf("%d %d",&n,&k);
    double x1,y1,x2,y2;
    double dist = 0;
    scanf("%lf %lf",&x1,&y1);
    for(int i = 1; i<n;i++){
        scanf("%lf %lf",&x2,&y2);
        dist += sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        x1 = x2;
        y1 = y2;
    }
    double time = (dist*k)/50.0;
    printf("%.15lf
", time);
    return 0;
}