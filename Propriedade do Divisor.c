#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numb, N, a, b;
    
    scanf("%d", &N);
    
    numb=N;

    if (N>=10){
   
    a= N/10;
    N= N % 10;
    b= N/1;
    N= N % 1;
    }
    
    if(b!=0){
        if(a<=9){
            if(numb%a==0){
                printf("SIM");
            }else
            printf("NAO");
        }
    }
    else{
        printf("NAO");
    }
    
	return 0;
}