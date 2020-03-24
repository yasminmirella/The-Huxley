#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int n, i, numProc, freq=0, valLido;
 
 scanf("%d %d", &n, &numProc);
 
 for(i=1; i<=n; i++) {
     scanf("%d", &valLido);
     if(valLido==numProc)freq++; 
 }
 printf("%d", freq);
  
  return 0;
}