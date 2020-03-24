#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int cv, ce, cs, fv, fe, fs;
    
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    
    int pontos_c, pontos_f;

    
    pontos_c= (cv*3)+(ce*1);
    pontos_f= (fv*3)+(fe*1);
    
        if(pontos_c>pontos_f){
            printf("C");
        } 
        else if(pontos_f>pontos_c){
            printf("F");
        }
        if(pontos_f==pontos_c){
            if(cs>fs){
                printf("C");
            } else if (fs>cs){
                printf("F");
            }
            if(cs==fs){
                printf("=");
            }
        }
    
	return 0;
	
}