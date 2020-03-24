#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N , n[10010],i, j, esquerdo=0, direito=0, resultado;
    char L[10010];
    
    scanf("%d", &N);
    
    while(N!=-1){
        resultado=0;
        for(i=0; i<N; i++){
        scanf("%d %c", &n[i], &L[i]);
        }
        for(i=30; i<=60; i++){
            esquerdo=0;
            direito=0;
            for(j=0; j<N; j++){
                if(n[j]==i){
                    if(L[j]=='E'){
                        esquerdo++;
                    }else if(L[j]=='D'){
                        direito++;
                    }
                }
            }
            if(direito>esquerdo){
                resultado+= esquerdo;
            }else{
                resultado+=direito;
            }
            
        }
        printf("%d\n", resultado);
        scanf("%d", &N);
    
    }
    
	return 0;
}