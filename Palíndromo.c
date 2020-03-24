#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero, i,j, tam, letra, cont=0;
    char palavra1[1010],palavra[1010];
    
    
    scanf("%d", &numero);
    
    for(i=0; i<numero; i++){
        cont=0;
        letra = 0;
        scanf(" %[^\n]", palavra1);
        
        tam = strlen(palavra1);
        
        for(j=0; j<tam;j++){
            //printf("%d b\n", j);
            if(palavra1[j]!=' '){
                palavra[cont]=palavra1[j];
                //printf("%c %d\n",palavra[cont],cont);
                cont++;
            }
        }
        tam = (cont)/2;
        cont--;
        //printf("%d\n",cont);
        
        for(j=0; j<tam; j++){
            //printf("cu");
            if(palavra[j]>=97){
               // printf("%c 1\n",palavra[j]);
                palavra[j]-=32;
            }
            //printf("%c 2\n",palavra[tam-j]);
            if(palavra[cont-j]>=97){
                //printf("%c 2\n",palavra[cont-j]);
                palavra[cont-j]-=32;
            }
            
            if(palavra[j]!=palavra[cont-j]){
                letra++;
            }
           
        }
         if(letra>=1){
            printf("NAO\n");
        }else{
            printf("SIM\n");
        }

    }
    
    
    
	return 0;
}