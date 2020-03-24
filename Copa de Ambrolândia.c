#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i;
    double iv;
    char n, s;
    
    scanf("%c %d %c %lf", &n, &i, &s, &iv);
    
    if(s != 'F' && s != 'M'){
        printf("nao pode comprar");
    }
    if(i < 0 || i > 120){
        printf("idade invalida!");
        return 0;
    }
    if( n=='A' || n=='B' || n=='F' || n=='C' || n=='I' || n=='R'){
        if(s=='F' && n != 'C' && n != 'F' && n != 'R' && n != 'I'){
            iv = iv*(0.9);
            printf("R$ %.2lf", iv);
        }
        if (i<0 || i>=120){
            printf("idade invalida!");
        }
        if(n=='A'||n=='B'){
            
            if(n=='B'&& s=='F'|| n=='B'&& s=='M'){
               iv = iv*(0.5);
               printf("R$ %.2lf", iv);
            }
            if(n=='A'&& s=='M'){
                if(i>=18){
                    iv = iv;
                printf("R$ %.2lf", iv);
                }else{
                    iv = iv*(0.8);
                    printf("R$ %.2lf", iv);
                }
            }
            if (n=='A'&& s=='F'){
                iv = iv*(0.8);
                printf("R$ %.2lf", iv);
            }
        }
        if(n=='F'||n=='C'){
            if(i<21){
                printf("nao pode comprar");
            }
            if(i>=21){
                iv = iv*(0.7);
                printf("R$ %lf", iv);
            }
        }
        if(n=='I'||n=='R'){
            if(i>=16){
                if(n=='R'|| n=='I'){
                    iv = iv*(0.7);
                    printf("R$ %.2lf", iv);
                }
            }else {
                iv = iv*(0.7);
                printf("R$ %.2lf", iv);
            }
        } 
        
    
    }else{
        if(s=='M'){
            iv=iv;
            printf("R$ %.2lf", iv);
        }
        if(s=='F'){
            iv=iv*(0.9);
            printf("R$ %.2lf", iv);
        }
    }

    
	return 0;
}