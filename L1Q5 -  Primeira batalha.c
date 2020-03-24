#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 
  int P, S, T;
  
  
  scanf("%d", &P);
  scanf("%d", &S);
  scanf("%d", &T);

    if ((P!=0)&&(S!=0)&&(T!=0)) {
        if((P%2==0)&&((S>10)||(T>10))){
            printf("Sim\n");
        }
        else if((S%2==0)&&((P>10)||(T>10))){
            printf("Sim\n");
        }
        else if((T%2==0)&&((S>10)||(P>10))){
            printf("Sim\n");
        }
        else {
            printf("Nao");
        
        }
    }
    else {
        printf("Nao");
    }
    
  return 0;
}