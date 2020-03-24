#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char string[60], carac;
    
    int i, x, tam;
    
    scanf(" %s", string);
    scanf(" %c", &carac);
    
    tam=strlen(string);    
    
    for(i=0; i<tam; i++){
        if(string[i]==carac){
            x++;
        }
    }
    
    printf("%d", x);
    
    
	return 0;
}