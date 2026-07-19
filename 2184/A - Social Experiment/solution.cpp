#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x<=3){
            printf("%d
",x);
        }
        else if(x&1) printf("1
");
        else printf("0
");
    }
    return 0;
}