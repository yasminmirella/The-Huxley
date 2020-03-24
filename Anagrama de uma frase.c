#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i, j, tam1, tam2, cont1 = 0, cont2 = 0, x;
    char palavra1[1010] = {}, palavra2[1010] = {}, string1[1010] = {}, string2[1010] = {};
    
    scanf(" %[^\n]", palavra1);
    scanf(" %[^\n]", palavra2);
    
    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);
    
    for(i=0; i<tam1; i++){
        
        if(palavra1[i] != ' '){
            if(palavra1[i] != '.'){
                if(palavra1[i] != '!'){
                    if(palavra1[i] != '?'){
                        palavra1[cont1] = string1[i];
                        cont1++;
                    }
                }
            }
        }
        
    }
    
    tam1 = cont1;
    
    
    for(i=0; i<tam2; i++){
        
        if(palavra2[i] != ' '){
            if(palavra2[i] != '.'){
                if(palavra2[i] != '!'){
                    if(palavra2[i] != '?'){
                        palavra2[cont2] = string2[i];
                        cont2++;
                    }
                }
            }
        }
        
    }
    
    tam2 = cont2;
    
    //printf("%d\n", tam1);
    //printf("%d\n", tam2);
    
    
    for(j=0; j< tam1; j++){
        
        if(string1[j]>= 97){
            string1[j]-= 32;
        }
    }
    
    for(j=0; j<tam2; j++){
        if(string2[j]>= 97){
            string2[j]-= 32;
        }
        
    }
    
    if(tam1 == tam2){
        for(i=0; i<tam1; i++){
            for(j=0; j<tam2; j++){
                if(string1[i] == string2[j]){
                    x++;
                    string2[j] = 0;
                    break;
                }
            }
        }
        if(x == tam1){
            
            printf("True");
            
        }else{
            
            printf("False");
            
        }
        
    }else {
        
        printf("False");
        
    }
    
    
	return 0;
}