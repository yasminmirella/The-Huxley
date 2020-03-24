#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, M, v[1010], i, aux=0, cont=0;

    scanf("%d %d", &N, &M);
    
    for (i=0; i<N; ++i){
        scanf("%d", &v[i]);
        if(v[i]==M){
            aux=-aux;
            cont+=abs(aux);
        }
        else{
            v[i]+=aux;
            aux=M-v[i];
            cont+=abs(aux);

        }
    }
    printf("%d", cont);   
  return 0;
}