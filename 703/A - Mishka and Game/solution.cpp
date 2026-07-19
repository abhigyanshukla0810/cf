#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int mishka = 0, chris = 0;
 
    for(int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
 
        if(x > y)
            mishka++;
        else if(y > x)
            chris++;
    }
 
    if(mishka > chris)
        printf("Mishka");
    else if(chris > mishka)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
 
    return 0;
}