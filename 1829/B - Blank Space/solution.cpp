#include <stdio.h>
 
int main() {
    int a;
    scanf("%d",&a);
    while(a--){
        int n;
        scanf("%d",&n);
        int terms = 0,j = terms;
        for(int i = 0; i<n;i++){
            int x;
            scanf("%d",&x);
            if(x==0){
                terms++;
                j = ((j >= terms) ? j : terms);  
            }
            else{
                terms = 0;
            }
 
        }
        printf("%d
",j);
 
    }
    return 0;
}