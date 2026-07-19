#include <stdio.h>
 
int main(){
      int n;
      scanf("%d",&n);
  int ones = 0;
  while(n!=0){
    if(n%2 != 0) ones++;
    n/=2;
  }
  printf("%d",ones);
  return 0;
}