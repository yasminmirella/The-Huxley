#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int hora, minuto, hora2, minuto2, hora3, minuto3, h2, m2, h3, i=0;
    
    scanf("%d %d", &hora, &minuto);
    scanf("%d %d", &hora2, &minuto2);
    scanf("%d %d", &hora3, &minuto3);
    
    
    printf("v\n");
    
    h2 = hora+3;
    m2 = minuto+12;
    h3 = hora2 -1;
    
    if(hora2 == h2 && minuto2 == m2){
        
        printf("v\n");
        
        i++;
        
    }else{
        
        printf("f\n");
        
        
    }
    if (h2 = h3){
        
        printf("v\n");
        
        i++;
        
    }else{
        
        printf("f\n");
        
    }
    
    if(i == 2){
        
        printf("sucesso");
        
    }else{
        
        printf("falha");
        
    }
    
	return 0;
}