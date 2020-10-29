#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n, i=1;
  int aux = 0;
  scanf("%d", &n);
  
  while(n!=0){
        i= (n-1)/2;
        printf("%d - %d\n", (i+1)*(i+1), i*i);                       
  scanf("%d", &n); }
  
  return 0;
}
