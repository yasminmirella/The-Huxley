#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int hora, minuto;
    
    
    scanf("%d\n%d", &hora, &minuto);
    
    
    if(hora == 00 && minuto >= 00){
        if(minuto > 10){
            printf("12\n%d\nam", minuto);
        }else{
            printf("12\n0%d\nam", minuto);
        }
    }
    if(hora == 12 && minuto >= 00){
        if(minuto > 10){
            
             printf("12\n%d\npm", minuto);
            
        }else{
            
            printf("12\n0%d\npm", minuto);
            
        }
        
    }
    if(hora < 12 && hora != 00){
        if(minuto < 9){
            
            printf("0%d\n0%d\nam", hora, minuto);
            
        }else {
            
            printf("0%d\n%d\nam", hora, minuto);
            
        }
        
    }
    if(hora > 12){
        if(minuto < 9){
             hora= hora - 12;
             printf("0%d\n0%d\npm", hora, minuto);
        }else{
            hora= hora - 12;
            printf("0%d\n%d\npm", hora, minuto);
            
        }
    }
    

	return 0;
}