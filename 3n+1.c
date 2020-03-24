#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, n1;
     
    while(scanf("%d %d", &n, &n1)!= EOF) {
        int a, c, x, y=0, NumF=0, p=0;
        if(n>n1){
        c=n;
        n=n1;
        n1=c;
        p=1;
        }  

    for (a=n;a<=n1;a++) {
        x=a;
        NumF=0;
        while(x!=1){
            if(x%2==0){
                 x=x/2;
                NumF++;
             }
             else{
                    x=(3*x)+1;
                    NumF++;
                }
        }    
        if(NumF>y) {
            y=NumF;
        }    
    }  
        if(p==1){
            printf("%d %d %d\n",n1, n, y+1);
        }
        else {
            printf("%d %d %d\n",n, n1, y+1);
        }
    }    
    return 0;
}
