#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, M, i, j, a, cont=0 ;

    scanf("%d %d", &N, &M);

    int matriz [500][500], vetor[1000]={};

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            scanf("%d",&matriz[i][j]);
            
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            if(matriz[i][j]==0){

                vetor[i]++;

            }

        }
    }
  
    for(a=0; a<M; a++){
        if (vetor[a]==M){
            for(i=a+1; i<N; i++){
                for(j=0; j<M; j++){
                    if(matriz[i][j]!=0) {
                        printf("N");
                        return 0;
                    }

                } 
            }
        }
    }

    int c, k;

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            if(matriz[i][j]!=0){
                c=j;
                break;
            }
        }
        for(k=i+1;k<N; k++){
            for(j=0;j<=c;j++){
                if(matriz[k][j]!=0){
                    printf("N");
                    return 0;
                }
            }
        }
    }

    printf("S");

    return 0;
}