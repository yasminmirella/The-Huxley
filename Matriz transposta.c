#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int L, C, numL, numC, i, j, aux=0, tam;
    
    scanf("%d %d", &numL, &numC);
    
    int matriz [1010][1010];
    
     for(i=0; i<numL; i++){
        for(j=0; j<numC; j++){
            scanf("%d",&matriz[i][j]);
            
            
        }
    }
    
    if(numL>numC){
        tam= numL;
    }else{
        tam= numC;
    }
    
    for(i=0; i<tam; i++){
        for(j=i+1; j<tam; j++){
            if(j!=i){
                aux=matriz[i][j];
                matriz[i][j]=matriz[j][i];
                matriz[j][i]=aux;
            }
        }
    }
  
    for(i=0; i<numC; i++){
        printf("|");
        for(j=0; j<numL; j++){
            printf(" %d", matriz[i][j]);
        }
        printf(" |\n");
    }
    
    
	return 0;
}