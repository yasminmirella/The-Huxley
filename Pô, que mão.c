#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int frutinhas, pokemon1, pokemon2, pokemon3, soma;
    
    scanf("%d\n%d\n%d\n%d", &frutinhas, &pokemon1, &pokemon2, &pokemon3);
    
    soma = pokemon1 + pokemon2 + pokemon3;
    
    if(frutinhas >= soma){
        
        printf("3");
    
    }else if((pokemon1+pokemon2) <= frutinhas || (pokemon1+ pokemon3) <= frutinhas || (pokemon2+pokemon3)<= frutinhas){
        
        printf("2");
        
    }else if(pokemon3 <= frutinhas || pokemon2 <= frutinhas || pokemon1 <= frutinhas){
        
        printf("1");
        
    }else{
        
        printf("0");
        
    }
    
    
	return 0;
}