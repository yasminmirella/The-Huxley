#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double valor;
    int presente, i=1, sobra, soma = 0, ar = 0;
    
    while(i<=6){
        
        scanf("%lf\n", &valor);
        scanf("%d", &presente);
        
        if(presente>1){
            
            sobra = presente -1;
            soma = soma + (sobra * valor);
            ar += sobra; 
            
        }
        i++;
    }
    
    printf("%d\n", ar);
    
    if(soma >= 800){
        
        printf("SIM");
        
    }else{
        
        printf("NAO");
        
    }
    
	return 0;
}