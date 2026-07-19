#include <stdio.h>
 
int main() {
        int a;
    scanf("%d",&a);
    while(a--){
        int n,x;
        scanf("%d %d", &n ,&x);
        int p;
        scanf("%d",&p);
        int diff = p;
        for(int i = 1; i < n; i++){
            int q;
            scanf("%d",&q);
            diff = ((diff > abs(p-q)) ? diff : abs((p-q)));
            p = q;
        }
        diff = ((diff > abs(2*(p-x)) ? diff : abs(2*(p-x))));
        printf("%d
",diff);;
    }
    return 0;
}