#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float n, VC, VB, DC, DB, i, a, tB, TC, sucesso;

    scanf("%f", &n);
    ;

    for(i=1; i<=n; i=i+1){


        scanf("%f %f %f %f", &VC, &VB, &DC, &DB);

            while(sucesso==0) {
            tB=ceil(VC/DB);
        
                if(tB*DC>=VB){
                printf("Clodes\n");
                sucesso=1;
                }
                else {
                     if(DB>=VC){
                    printf("Bezaliel\n");
                     sucesso=1;
                    }
                    else {
                     VC=VC-DB; 
                     DC=DC+50;
                    }       
            
                }
            }       
        sucesso=0;
    }
    
    
    return 0;
}

