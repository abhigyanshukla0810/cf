#include <stdio.h>
 
int main(){
    int n;
  scanf("%d", &n);
  
  while(n--){
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int runners = 0;
    if(b>a){
      runners++;
    }
    if(c>a){
      runners++;
    }
    if(d>a){
      runners++;
    }
    printf("%d
",runners);
  }
    return 0;
}