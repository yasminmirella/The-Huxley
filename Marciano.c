#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int L, A, P, R;
    int L2,A2,P2;
    int Diagonal;
    scanf("%d%d%d%d", &L, &A, &P, &R);
    L2 = L*L;
    A2= A*A;
    P2= P*P;
    Diagonal= sqrt(L2+A2);
    
    
    
    double D;
    D= 2*R;
    
    if(L < D){
        if(A < D){
            if(P < D){
                if(Diagonal < D){
                    printf("S");
                    return 0;
                }
                else{
                    printf("N");
                    return 0;
                }
            }
            else{
                printf("N");
                return 0;
            }
        }
        else{
            printf("N");
            return 0;
        }
    }
    else{
        printf("N");
        return 0;
    }
    
    

   
    
    
	return 0;
}