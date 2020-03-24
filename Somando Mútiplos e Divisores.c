#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A, B, i, aux=0, resultado=0;
    
    
    scanf("%d\n", &A);
    scanf("%d", &B);
    
    if(A>B){
        
       aux = A;
       A = B;
       B = aux;
        
    }
    
    for(i = A+1; i < B; i++){
        
        if(1000%i == 0  && i%4 == 0){

                resultado= resultado + i;
   
        }
        
    }
    
    printf("%d",resultado);
    
    
	return 0;
}