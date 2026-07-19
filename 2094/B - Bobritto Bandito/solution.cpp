#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        int n,m,l,r;
        scanf("%d %d %d %d", &n, &m, &l, &r);
 
        if(l+m < 0){
            printf("%d 0
", -m, 0);
        }
        else {
            printf("%d %d
", l, l + m);
        }
    }
    return 0;
}