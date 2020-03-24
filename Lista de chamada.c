#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, K, i=0, j, a;
    char string [3000] [2000], aux[2000];

    scanf("%d %d", &N, &K);
    
    for(i=0; i<N; i++){
        scanf("%s", string [i]);
    }

    for (i=0; i<N; i++){
        for(j=0; j<N-1; j++){
            if(strcmp(string[j], string[j+1])>0){
                strcpy(aux, string [j+1]);
                strcpy(string[j+1], string[j]);
                strcpy(string[j], aux);
            }
        }
    }
    
    printf("%s", string[K-1]);

	return 0;
}