#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char string[20], stringaux[20]={}, aux, letra;
    int tam, i, x=0, retorno;
    
    scanf(" %s", string);
    
    tam=strlen(string);
    
     for(i=0; i<tam/2; i++){
        if(string[i]!= string[tam-i-1]){
            letra++;
        }
    }
    
    if((tam)%2==0 && letra==1){
        printf("YES");
    }else if((tam)%2!=0 && (letra==1 || letra==0)){
        printf("YES");
    }else{
        printf("NO");
    }
    
    
	return 0;
}