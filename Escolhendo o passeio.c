#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char passeio[10];
    int i;
    
    for(i=0; i<=7; i++){
        scanf(" %s", passeio);
        
        if(i==0){
            if(passeio[i]=='C'){
                printf("CINEMA");
            }else if(passeio[i]=='c'){
                printf("CINEMA");
            }else if(passeio[i]=='B'){
                printf("BOLICHE");
                
            }else{
                printf("BOLICHE");
            }
            
        }
        
    }
    
	return 0;
}