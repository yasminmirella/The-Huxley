#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int num, divisor=2, freq=0, aux, numfreq=-1, aux1;

  scanf("%d", &num);

  while(divisor < num){
      aux=num;
    while(aux % divisor == 0 && aux!=1){
    aux=aux/divisor;
        freq++;
        
    }
    if(freq>numfreq){
        aux1=divisor;
        numfreq= freq;
    }
    divisor++;
    freq = 0;
  }
  
  printf("mostFrequent: %d, frequency: %d", aux1, numfreq);

	return 0;
}