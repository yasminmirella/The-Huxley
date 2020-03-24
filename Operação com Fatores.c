#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    while(1){
        int x, n, exp=2, fatTam=3, flag=0, i=0, j;
        double s, fat=1, expTam;

        scanf("%d %d", &x, &n);
        if(x==0 && n==0){
            return 0;
        }
        else if(x==0||n==0){
            s=0;
            printf("%.6lf\n", s);
        }else{
            s=x;
            while(i<n-1){

                for(j=1; j<=fatTam; j++){
                    fat=fat*j;
                }
                fatTam+=2;
                expTam=pow(x,exp);
                exp+=2;
                if(flag==0){
                    s=s-(expTam/fat);
                    flag=1;
                }else{
                    s=s+(expTam/fat);
                    flag=0;
                }
                fat=1;
                i++;
            }
            printf("%.6lf\n", s);
        }
    }
	return 0;
}