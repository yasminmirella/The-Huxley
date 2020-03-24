#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char nasc, ocup;
    int quant_arm, cali_arm;
    
    scanf("%c\n%c\n%d\n%d", &nasc, &ocup, &quant_arm, &cali_arm);
    
    
        if(nasc=='B' || nasc=='E'){
            
            if(nasc=='E'){
                if(quant_arm==0 && cali_arm==0){
                    printf("Liberado");
                }else{
                    printf("Barrado");
                }
            }
            
            if(nasc=='B' && ocup=='M'){
                printf("Liberado");
            }
            if(nasc=='B'&& ocup=='T' || nasc=='B' && ocup=='O'){
                if(quant_arm<= 1 && cali_arm <= 22){
                    printf("Liberado");
                }else{
                    printf("Barrado");
                }
            }
            if(nasc=='B' && ocup=='C'){
                if(quant_arm<=2 && cali_arm <=38){
                    printf("Liberado");
                }else{
                    printf("Barrado");
                }
            }
        }
        else{
            printf("Barrado");
        }
    
    
    
	return 0;
}