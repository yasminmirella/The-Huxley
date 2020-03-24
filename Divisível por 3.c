#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    int i;
    int cont=0, aux;
    
    scanf("%d", &n);
    
    if(n%3 == 0){
       for( i=2; i<=n; i++){
           if(n%i==0){
               if(i%3==0){
                   cont++;
               }
           }
       }
       if(cont!=0){
           printf("%d", cont);
       }
       else{
          printf( "O numero nao possui divisores multiplos de 3!"); 
       }
    }
    else{
        printf( "O numero nao possui divisores multiplos de 3!");
    }
    
	return 0;
}