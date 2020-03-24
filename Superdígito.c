#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define  limk 10

int main() {
    
    int k, i=0, valor, limK;
    char n[1000001];
    
    scanf(" %s", n);
    scanf("%d", &k);
    
    while(n[i]!='\0'){
        valor += n[i] - '0';
        if(valor>9){
            valor += -9;
        }
        
        i++;
    }
    int valorF;
    
    while(k--){
        valorF += valor;
        if(valorF>9){
            valorF += -9;
        }
        
    }
    printf("%d", valorF);
    
	return 0;
}