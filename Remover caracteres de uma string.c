#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char string1[90], string2[90], string3[90]={};
    int i, j, k, tam1, tam2, tam3,x=0, aux = 0;
    
    scanf(" %[^\n]", string1);
    scanf(" %[^\n]", string2);
    
    tam1=strlen(string1)-1;
    tam2=strlen(string2)-1;
    
    for(i=0; i<=tam1; i++){
        aux = 0;
        for(j=0; j<=tam2; j++){
            if(string1[i] == string2[j]){
                aux++;
            }
        }
        if(aux == 0){
            string3[x] = string1[i];
            x++;
        }
    }
    tam3 = strlen(string3);
    for(i=0; i<tam3; i++){
        printf("%c", string3[i]);
    }
	return 0;
}