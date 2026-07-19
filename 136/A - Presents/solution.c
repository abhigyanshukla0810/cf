#include <stdio.h>
#define loop(a,b) for(int i = a; i <= b; i++)
 
int main(){
    int n;
    scanf("%d",&n);
    int a[101];
    int b[101];
    loop(1,n){
        scanf("%d",&a[i]);
        b[a[i]] = i; 
    }
    loop(1,n){
        printf("%d ",b[i]);
    }
 
    return 0;
}