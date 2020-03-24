#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int k, i, m, n, d, j=1, dragoes=0;
    
    scanf("%d\n%d\n%d\n%d\n%d", &k, &i, &m, &n, &d);
    
    while(j<=d){
        
        if(j%k==0){
            ++dragoes;
        }
        else if(j%i==0){
            ++dragoes;
        }
        else if(j%m==0){
            ++dragoes;
        }
        else if(j%n==0){
            ++dragoes;
        }
        j++;
    }
    printf("%d", dragoes);
    
	return 0;
}