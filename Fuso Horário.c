#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int s, t ,f, stf;
    
    
    scanf("%d %d %d", &s, &t, &f);
    
    
    stf = s+t+f;
    
    if(stf > 23){
        
        printf("%d", stf- 24);    
    
    }else if(stf == -1){
        
        printf("%d", stf + 24);    
        
    }else {
        
        printf("%d", stf);
        
    }
    
	return 0;
}