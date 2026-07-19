#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
        while(n--){
        int a,b;
        scanf("%d:%d", &a,&b);
        if(a == 0){
            printf("12:%02d AM
",b);
            continue;
        }
        if(a<12){
            printf("%02d:%02d AM
",a,b);
            continue;
        }
        if(a==12){
            printf("12:%02d PM
",b);
            continue;
        }
        printf("%02d:%02d PM
",a-12,b);
 
    }
    return 0;
}