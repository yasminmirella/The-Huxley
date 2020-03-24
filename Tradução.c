#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {

    int n, m;
    char ssubstituta[1000][1000], ssubstituida [1000][1000], aux[100], tex[1000];

    scanf("%d %d", &n, &m);

    while(n!=0 && m!=0){

            int i, j, a;

    for(i=0; i<n; i++){
        scanf(" %s", ssubstituta[i]);
        scanf(" -> %s", ssubstituida[i]);
    }

    int aux2=0, auxtex, aux3;

    for(j=0; j<m; j++){
        scanf(" %[^\n]", tex);
        auxtex = strlen(tex);


        for(i=0; i<n; i++){
            aux2=strlen(ssubstituta[i]);
            aux3=strlen(ssubstituida[i]);
           
           
            for(a=0; a<=auxtex-aux2+1; a++){
             
              if(strncmp(tex+a, ssubstituta[i], aux2)==0){
                    strcpy(aux, tex+ a+ aux2);
                    strcpy(tex+a, ssubstituida[i]);
                    strcpy(tex+a+ aux3, aux);
              }
            }
        }
        printf("%s\n", tex);
    }
    scanf("%d %d", &n, &m);
    }
  
  return 0;
}