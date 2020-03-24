#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    if(x < 0 || y < 0){
        
        printf("fora");
        
    }else if(x > 432 || y > 468){
        
        printf("fora");
        
    }else{
        
        printf("dentro");
        
    }
    
    
    
	return 0;
}