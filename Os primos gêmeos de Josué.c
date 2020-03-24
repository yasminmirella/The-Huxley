#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, primoA=0, primoB=0, i;
    
    scanf("%d", &A);
    scanf("%d", &B);
     
     
    for(i=2; i<A; i++) {
        if(A%i == 0) {
            primoA++;
        }
    }
    for(i=2; i<B; i++) {
        if(B%i == 0) {
            primoB++;
        }
    }
    if((primoA == 0) && (primoB == 0) && (A>= 3) && (B>=3)) {
        if(B>=A) {
            if(B-A == 2) {
            printf("Sao gemeos!\n");
            }
            else printf("Nao sao gemeos!\n");
        }
        else if(A>=B) {
            if(A-B == 2) {
                printf("Sao gemeos!\n");
            }
            else printf(" Nao sao gemeos!\n");
        }
    }
    else printf("Nao sao gemeos!\n");
    
	return 0;
}