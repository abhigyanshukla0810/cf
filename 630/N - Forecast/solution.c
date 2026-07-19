#include <stdio.h>
#include <math.h>
 
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    double x = (-b + sqrt(b*b - 4*a*c))/(2*a);
    double y =  (-b - sqrt(b*b - 4*a*c))/(2*a);
    if(x>=y){
        printf("%.15f 
 %.15f",x,y);
    }
    else{
        printf("%.15f
%.15f",y,x);
    }
    return 0;
}