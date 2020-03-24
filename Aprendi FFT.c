#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b , C[4020], B[2010], A[2010], i, j , caso=1;

    while (scanf("%d %d", &a, &b)!=EOF){
        for(i=0; i<=a+b; i++){
            C[i]=0;
        }
            for(i=0; i<=a; i++){
                scanf("%d", &A[i]);
        }
                for(j=0;j<=b; j++){
                    scanf("%d", &B[j]);
                }
                    for(i=0; i<=a; i++){
                        for(j=0; j<=b; j++){

                            C[i+j]+= A[i]*B[j];
                        }
                    }

        printf("Caso #%d:", caso++);
            for(i=0; i<=a+b; i++){
                printf(" %d", C[i]);
            } 
            printf("\n");

    }
  
  return 0;
}