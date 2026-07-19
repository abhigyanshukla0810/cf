#include <stdio.h>
#include <math.h>
int main(){
    float a,b,n;
    scanf("%f %f %f",&a,&b,&n);
    float xi,yi,vi;
    scanf("%f %f %f",&xi,&yi,&vi);
    float time = sqrt(((a-xi)*(a-xi))+((b-yi)*(b-yi))) / vi;
    for(int i = 1; i<n;i++){
        scanf("%f %f %f",&xi,&yi,&vi);
        time = ((time < sqrt(((a-xi)*(a-xi))+((b-yi)*(b-yi))) / vi) ? time : sqrt(((a-xi)*(a-xi))+((b-yi)*(b-yi))) / vi);
    }
    printf("%0.20f",time);
    return 0;
}