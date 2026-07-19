#include <stdio.h>
 
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n==1){
            printf("0
");
            continue;
        }
        if(n%3 != 0){
            printf("-1
");
            continue;
        }
        int count = 0;
        while(n>1){
            if(n & 1){
                n/=3;
                count+=2;
            }
            else{
                n/=6;
                count +=1;
            }
            if(n%3 != 0) break;
        }
        if(n==1) printf("%d
",count);
        else printf("-1
");
    }
    return 0;
}