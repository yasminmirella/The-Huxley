#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
     long long int n, i=1, divisivel=0;
    
    while(scanf("%lld", &n) != EOF){
        divisivel = 0;
        i=1;
        while(i<=sqrt(n)){
            if((n%i==0) && i==sqrt(n)){
                divisivel++;
            }else if(n%i==0){
                divisivel+=2;
            }
         i++;
        }
        printf("%lld\n", divisivel);
    }
    
	return 0;
}