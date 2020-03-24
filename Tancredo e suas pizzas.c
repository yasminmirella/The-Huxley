#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int T,a;

    scanf("%d", &T);

    for(a=0;a<T;a++){
        int N, i, j, b, x, ele, tam;
        int freq[1020][130]={}, freqv[130]={};
        char pizzas[1000][50], ingredientes[10000];

        scanf("%d", &N);

        for(i=0; i<N; i++){
            scanf(" %s", &pizzas[i]);
        }

        scanf(" %s", ingredientes);
    
        int aux;

        for(i=0; i<N; i++){
            aux=strlen(pizzas[i]);
            for(j=0; j<aux; j++){
                b=pizzas[i][j];
                freq[i][b]++;
            }
        }

        tam=strlen(ingredientes);

        for(i=0; i<tam; i++){
            x=ingredientes[i];
            freqv[x]++;
            //printf("a %d em %d\n", freqv[x],i);
        }

        for(i=0; i<N; i++){
        
            int aux2, elemento, freqP, freqI, min=10000, menor=0;
            
            aux2=strlen(pizzas[i]);
            
            for(j=0; j<aux2; j++){
                elemento=pizzas[i][j];
                freqP=freq[i][elemento];
                freqI=freqv[elemento];
                //printf("a%d\n", freqP);
                //printf("b%d\n", freqI);
                menor= freqI/freqP;
                //printf("a%d\n", menor);
                if(menor<min){
                    min=menor;
                }
            }


        for(j=0; j<aux2; j++){
            ele=pizzas[i][j];
            freqv[ele]= freqv[ele]-min;

        }
            printf("%d\n", min);

        }

        printf("\n");

        }
	return 0;
}
