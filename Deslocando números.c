#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int movimentacao ( int num, int vetor[], int desloc){

    int i=0;

    while( i<num){

        vetor[i] = vetor[i]+ desloc;

        while(vetor[i] > 9){

             vetor[i] = vetor[i] %10;
        }
        while(vetor [i] < 0){

            vetor[i]=  vetor[i]+10;
            
        }
        printf("%d", vetor[i]);
        printf(" ");

        i++;
    }

    return vetor[i];
}


int main() {
    
    int num[10100] = {}, i=0, numero = 0, deslocamento = 0;
    
    scanf("%d\n", &numero);
    
    for( i = 0; i<numero; i++){
        scanf("%d", &num[i]);
    }

    scanf("%d", &deslocamento);
   
    num[i] = movimentacao (numero ,num, deslocamento);

	return 0;
}