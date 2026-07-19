#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int x;
        scanf("%d", &x);
 
        if (x < 67)
            printf("%d
", x + 1);
        else
            printf("%d
", x);
    }
 
    return 0;
}