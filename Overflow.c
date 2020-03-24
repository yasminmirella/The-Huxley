#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int P, Q, N;
    char C;
    
    
    scanf("%d\n", &N);
    scanf("%d %c %d", &P, &C, &Q);
    
    if(C=='+'){
        if(P+Q<=N){
            printf("OK");
        }else{
            printf("OVERFLOW");
        }
    }
    if(C=='*'){
        if(P*Q<=N){
            printf("OK");
        }else{
            printf("OVERFLOW");
        }
    }
        
    
	return 0;
}