#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        char s[4]; 
        scanf("%s", &s);
        if(s[0] == 'a'|| strcmp(s,"bac")==0 || strcmp(s,"cba")==0){
            printf("YES
");
        }
        else{
            printf("NO
");
        }
    }
 
    return 0;
}