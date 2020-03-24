#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int dia, mes, ano;
    
    scanf("%d %d %d", &dia, &mes, &ano);
    if(mes > 12 || mes < 1){
        printf("invalida");
        return 0;
    }
    if(ano < 1900 || ano > 2100){
        printf("invalida");
        return 0;
    }
    if(dia>=1 && dia <=31){
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
            if(dia>=1 && dia <=31){
                printf("valida");
            }else{
                printf("invalida");
            }
        } 
        
        if(mes==4 || mes==6 || mes==9 || mes== 11){
            if(dia>=1 && dia <=30 ){
                printf("valida");
            }else{
                printf("invalida");
            }
        }
        if(mes==2){
            if(dia<=28){
                printf("valida");
            }
            if(dia !=29 && dia > 28){
                printf("invalida");
                return 0;
            }
            else if(dia == 29){
                if (ano%400==0){
                    printf("valida");
                }else if(ano%4==0 && ano%100!=0){
                    printf("valida");
                }else{
                    printf("invalida"); 
                }
            }
        }
    }else{
        printf("invalida");
    }
    
	return 0;
}