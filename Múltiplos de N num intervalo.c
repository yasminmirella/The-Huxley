#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N, intervaloA, intervaloB, i;
    
    
    scanf("%d", &N);
    scanf("%d", &intervaloA);
    scanf("%d", & intervaloB);
    
    if(N > intervaloB ){
        
        printf("INEXISTENTE");
        
        
    }else{
    
        for(i= intervaloA; i<= intervaloB; i++){
        
            if( i  % N == 0){
            
             printf("%d\n", i);
            
            }
        
        }   
    
    }
    
    
    
    
    
    
	return 0;
}