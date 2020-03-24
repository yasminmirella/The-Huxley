#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char bairro;
    int renda, consumo;
    
    scanf("%c\n%d\n%d", &bairro, &renda, &consumo);
    
    if(bairro=='S' || bairro=='I' || bairro=='T'){
        
        if(renda<0){
            printf("Renda e consumo nao podem ser negativos.");
            return 0;
        }
        
        if(bairro=='S'){
            if(renda >50 && renda <500){
                consumo=consumo-50;
                printf("%d", consumo);
            }else if(renda >500 && renda <1000){
                consumo=consumo-25;
                printf("%d", consumo);
            }else{
                printf("%d", consumo);
            }
        }
        
        if(bairro=='I'){
            if(renda > 240 && renda <1000){
                consumo=consumo - 240;
                printf("%d", consumo);
            }else if(renda > 1000 && renda <5000){
                consumo=consumo - 120;
                printf("%d", consumo);
            }else{
                printf("%d", consumo);
            }
        }
        if(bairro=='T'){
            if(renda > 5000 && renda<10000){
                consumo=consumo - 720;
                printf("%d", consumo);
            }else if(renda >10000 && renda <20000){
                consumo=consumo - 360;
                printf("%d", consumo);
            }else{
                printf("%d", consumo);
            }
        }
        
    }else {
        printf("Bairro invalido.");
    }
    
    
    
	return 0;
}