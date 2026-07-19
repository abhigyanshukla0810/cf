#include <stdio.h>
 
 
int main(){
  int n;
  scanf("%d",&n);
  int freq[5] = {0};
  for(int i = 0; i<n;i++){
    int x;
    scanf("%d",&x);
    freq[x]++;
  }
  int sum = 0;
  sum += freq[4];
  if(freq[3]>=freq[1]){
    sum += freq[1] + (2*freq[2] + 3)/4 + ((freq[3] - freq[1]));
  }
  else{
 
    sum += freq[3] + (2*freq[2] + freq[1] - freq[3] + 3 ) / 4;
  }
  printf("%d",sum);
  return 0;
}