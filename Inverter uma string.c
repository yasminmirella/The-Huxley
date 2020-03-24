#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char string[260], aux;
    int i, tam;
    
    scanf(" %s", string);
    
    tam = strlen(string);
    
    for(i=0; i<tam/2; i++){
        aux=string[i];
        string[i]=string[tam-i-1];
        string[tam-i-1]=aux;
        
    }
    printf("%s", string);
    
    
    
	return 0;
}