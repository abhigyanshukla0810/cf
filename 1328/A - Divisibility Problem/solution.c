#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int count = 0;
        int a,b;
        scanf("%d %d", &a,&b);
        if(a%b == 0){
            count = 0;
        }
        else{
            if(a<b){
                count = b-a;
            }
            else{
                int temp = a%b;
                count = b - temp;
            }
        }
        printf("%d
",count);
    }
    return 0;
}